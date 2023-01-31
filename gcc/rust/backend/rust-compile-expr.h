// Copyright (C) 2020-2023 Free Software Foundation, Inc.

// This file is part of GCC.

// GCC is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 3, or (at your option) any later
// version.

// GCC is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.

// You should have received a copy of the GNU General Public License
// along with GCC; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#ifndef RUST_COMPILE_EXPR
#define RUST_COMPILE_EXPR

#include "rust-compile-base.h"

namespace Rust {
namespace Compile {

class CompileExpr : private HIRCompileBase, protected HIR::HIRExpressionVisitor
{
public:
  static tree Compile (HIR::Expr *expr, Context *ctx);

  void visit (HIR::TupleIndexExpr &expr) override;
  void visit (HIR::TupleExpr &expr) override;
  void visit (HIR::ReturnExpr &expr) override;
  void visit (HIR::CallExpr &expr) override;
  void visit (HIR::MethodCallExpr &expr) override;
  void visit (HIR::LiteralExpr &expr) override;
  void visit (HIR::AssignmentExpr &expr) override;
  void visit (HIR::CompoundAssignmentExpr &expr) override;
  void visit (HIR::ArrayIndexExpr &expr) override;
  void visit (HIR::ArrayExpr &expr) override;
  void visit (HIR::ArithmeticOrLogicalExpr &expr) override;
  void visit (HIR::ComparisonExpr &expr) override;
  void visit (HIR::LazyBooleanExpr &expr) override;
  void visit (HIR::NegationExpr &expr) override;
  void visit (HIR::TypeCastExpr &expr) override;
  void visit (HIR::IfExpr &expr) override;
  void visit (HIR::IfExprConseqIf &expr) override;
  void visit (HIR::IfExprConseqElse &expr) override;
  void visit (HIR::BlockExpr &expr) override;
  void visit (HIR::UnsafeBlockExpr &expr) override;
  void visit (HIR::StructExprStruct &struct_expr) override;
  void visit (HIR::StructExprStructFields &struct_expr) override;
  void visit (HIR::GroupedExpr &expr) override;
  void visit (HIR::FieldAccessExpr &expr) override;
  void visit (HIR::QualifiedPathInExpression &expr) override;
  void visit (HIR::PathInExpression &expr) override;
  void visit (HIR::LoopExpr &expr) override;
  void visit (HIR::WhileLoopExpr &expr) override;
  void visit (HIR::BreakExpr &expr) override;
  void visit (HIR::ContinueExpr &expr) override;
  void visit (HIR::BorrowExpr &expr) override;
  void visit (HIR::DereferenceExpr &expr) override;
  void visit (HIR::MatchExpr &expr) override;
  void visit (HIR::RangeFromToExpr &expr) override;
  void visit (HIR::RangeFromExpr &expr) override;
  void visit (HIR::RangeToExpr &expr) override;
  void visit (HIR::RangeFullExpr &expr) override;
  void visit (HIR::RangeFromToInclExpr &expr) override;

  // Empty visit for unused Expression HIR nodes.
  void visit (HIR::ClosureExprInner &) override {}
  void visit (HIR::ClosureExprInnerTyped &) override {}
  void visit (HIR::StructExprFieldIdentifier &) override {}
  void visit (HIR::StructExprFieldIdentifierValue &) override {}
  void visit (HIR::StructExprFieldIndexValue &) override {}
  void visit (HIR::ErrorPropagationExpr &) override {}
  void visit (HIR::RangeToInclExpr &) override {}
  void visit (HIR::WhileLetLoopExpr &) override {}
  void visit (HIR::ForLoopExpr &) override {}
  void visit (HIR::IfExprConseqIfLet &) override {}
  void visit (HIR::IfLetExpr &) override {}
  void visit (HIR::IfLetExprConseqElse &) override {}
  void visit (HIR::IfLetExprConseqIf &) override {}
  void visit (HIR::IfLetExprConseqIfLet &) override {}
  void visit (HIR::AwaitExpr &) override {}
  void visit (HIR::AsyncBlockExpr &) override {}

protected:
  tree get_fn_addr_from_dyn (const TyTy::DynamicObjectType *dyn,
			     TyTy::BaseType *receiver, TyTy::FnType *fntype,
			     tree receiver_ref, Location expr_locus);

  tree get_receiver_from_dyn (const TyTy::DynamicObjectType *dyn,
			      TyTy::BaseType *receiver, TyTy::FnType *fntype,
			      tree receiver_ref, Location expr_locus);

  tree resolve_method_address (TyTy::FnType *fntype, HirId ref,
			       TyTy::BaseType *receiver,
			       HIR::PathIdentSegment &segment,
			       Analysis::NodeMapping expr_mappings,
			       Location expr_locus);

  tree
  resolve_operator_overload (Analysis::RustLangItem::ItemType lang_item_type,
			     HIR::OperatorExprMeta expr, tree lhs, tree rhs,
			     HIR::Expr *lhs_expr, HIR::Expr *rhs_expr);

  tree compile_bool_literal (const HIR::LiteralExpr &expr,
			     const TyTy::BaseType *tyty);

  tree compile_integer_literal (const HIR::LiteralExpr &expr,
				const TyTy::BaseType *tyty);

  tree compile_float_literal (const HIR::LiteralExpr &expr,
			      const TyTy::BaseType *tyty);

  tree compile_char_literal (const HIR::LiteralExpr &expr,
			     const TyTy::BaseType *tyty);

  tree compile_byte_literal (const HIR::LiteralExpr &expr,
			     const TyTy::BaseType *tyty);

  tree compile_string_literal (const HIR::LiteralExpr &expr,
			       const TyTy::BaseType *tyty);

  tree compile_byte_string_literal (const HIR::LiteralExpr &expr,
				    const TyTy::BaseType *tyty);

  tree type_cast_expression (tree type_to_cast_to, tree expr, Location locus);

  tree array_value_expr (Location expr_locus, const TyTy::ArrayType &array_tyty,
			 tree array_type, HIR::ArrayElemsValues &elems);

  tree array_copied_expr (Location expr_locus,
			  const TyTy::ArrayType &array_tyty, tree array_type,
			  HIR::ArrayElemsCopied &elems);

private:
  CompileExpr (Context *ctx);

  tree translated;
};

} // namespace Compile
} // namespace Rust

#endif // RUST_COMPILE_EXPR