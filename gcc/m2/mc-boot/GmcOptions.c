/* do not edit automatically generated by mc from mcOptions.  */
/* This file is part of GNU Modula-2.

GNU Modula-2 is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GNU Modula-2 is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License along
with gm2; see the file COPYING.  If not, write to the Free Software
Foundation, 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.  */

#include "config.h"
#include "system.h"
#   if !defined (PROC_D)
#      define PROC_D
       typedef void (*PROC_t) (void);
       typedef struct { PROC_t proc; } PROC;
#   endif

#   if !defined (TRUE)
#      define TRUE (1==1)
#   endif

#   if !defined (FALSE)
#      define FALSE (1==0)
#   endif

#if defined(__cplusplus)
#   undef NULL
#   define NULL 0
#endif
#define _mcOptions_H
#define _mcOptions_C

#   include "GSArgs.h"
#   include "GmcSearch.h"
#   include "Glibc.h"
#   include "GmcPrintf.h"
#   include "GDebug.h"
#   include "GStrLib.h"
#   include "Gdecl.h"
#   include "GDynamicStrings.h"
#   include "GFIO.h"
#   include "GSFIO.h"

static unsigned int langC;
static unsigned int langCPP;
static unsigned int langM2;
static unsigned int gplHeader;
static unsigned int glplHeader;
static unsigned int summary;
static unsigned int contributed;
static unsigned int scaffoldMain;
static unsigned int scaffoldDynamic;
static unsigned int caseRuntime;
static unsigned int arrayRuntime;
static unsigned int returnRuntime;
static unsigned int gccConfigSystem;
static unsigned int ignoreFQ;
static unsigned int debugTopological;
static unsigned int extendedOpaque;
static unsigned int internalDebugging;
static unsigned int verbose;
static unsigned int quiet;
static DynamicStrings_String projectContents;
static DynamicStrings_String summaryContents;
static DynamicStrings_String contributedContents;
static DynamicStrings_String hPrefix;
static DynamicStrings_String outputFile;
static DynamicStrings_String cppArgs;
static DynamicStrings_String cppProgram;

/*
   handleOptions - iterates over all options setting appropriate
                   values and returns the single source file
                   if found at the end of the arguments.
*/

extern "C" DynamicStrings_String mcOptions_handleOptions (void);

/*
   getQuiet - return the value of quiet.
*/

extern "C" unsigned int mcOptions_getQuiet (void);

/*
   getVerbose - return the value of verbose.
*/

extern "C" unsigned int mcOptions_getVerbose (void);

/*
   getInternalDebugging - return the value of internalDebugging.
*/

extern "C" unsigned int mcOptions_getInternalDebugging (void);

/*
   getCppCommandLine - returns the Cpp command line and all arguments.
*/

extern "C" DynamicStrings_String mcOptions_getCppCommandLine (void);

/*
   getOutputFile - sets the output filename to output.
*/

extern "C" DynamicStrings_String mcOptions_getOutputFile (void);

/*
   getExtendedOpaque - return the extendedOpaque value.
*/

extern "C" unsigned int mcOptions_getExtendedOpaque (void);

/*
   setDebugTopological - sets the flag debugTopological to value.
*/

extern "C" void mcOptions_setDebugTopological (unsigned int value);

/*
   getDebugTopological - returns the flag value of the command
                         line option --debug-top.
*/

extern "C" unsigned int mcOptions_getDebugTopological (void);

/*
   getHPrefix - saves the H file prefix.
*/

extern "C" DynamicStrings_String mcOptions_getHPrefix (void);

/*
   getIgnoreFQ - returns the ignorefq flag.
*/

extern "C" unsigned int mcOptions_getIgnoreFQ (void);

/*
   getGccConfigSystem - return the value of the gccConfigSystem flag.
*/

extern "C" unsigned int mcOptions_getGccConfigSystem (void);

/*
   getScaffoldDynamic - return true if the --scaffold-dynamic option was present.
*/

extern "C" unsigned int mcOptions_getScaffoldDynamic (void);

/*
   getScaffoldMain - return true if the --scaffold-main option was present.
*/

extern "C" unsigned int mcOptions_getScaffoldMain (void);

/*
   writeGPLheader - writes out the GPL or the LGPL as a comment.
*/

extern "C" void mcOptions_writeGPLheader (FIO_File f);

/*
   getYear - return the year.
*/

static unsigned int getYear (void);

/*
   displayVersion - displays the version of the compiler.
*/

static void displayVersion (unsigned int mustExit);

/*
   displayHelp - display the mc help summary.
*/

static void displayHelp (void);

/*
   commentBegin - issue a start of comment for the appropriate language.
*/

static void commentBegin (FIO_File f);

/*
   commentEnd - issue an end of comment for the appropriate language.
*/

static void commentEnd (FIO_File f);

/*
   comment - write a comment to file, f, and also a newline.
*/

static void comment (FIO_File f, const char *a_, unsigned int _a_high);

/*
   commentS - write a comment to file, f, and also a newline.
*/

static void commentS (FIO_File f, DynamicStrings_String s);

/*
   gplBody -
*/

static void gplBody (FIO_File f);

/*
   glplBody -
*/

static void glplBody (FIO_File f);

/*
   issueGPL - writes out the summary, GPL/LGPL and/or contributed as a single comment.
*/

static void issueGPL (FIO_File f);

/*
   setOutputFile - sets the output filename to output.
*/

static void setOutputFile (DynamicStrings_String output);

/*
   setQuiet - sets the quiet flag to, value.
*/

static void setQuiet (unsigned int value);

/*
   setVerbose - sets the verbose flag to, value.
*/

static void setVerbose (unsigned int value);

/*
   setExtendedOpaque - set extendedOpaque to value.
*/

static void setExtendedOpaque (unsigned int value);

/*
   setSearchPath - set the search path for the module sources.
*/

static void setSearchPath (DynamicStrings_String arg);

/*
   setInternalDebugging - turn on/off internal debugging.
*/

static void setInternalDebugging (unsigned int value);

/*
   setHPrefix - saves the H file prefix.
*/

static void setHPrefix (DynamicStrings_String s);

/*
   setIgnoreFQ - sets the ignorefq flag.
*/

static void setIgnoreFQ (unsigned int value);

/*
   optionIs - returns TRUE if the first len (right) characters
              match left.
*/

static unsigned int optionIs (const char *left_, unsigned int _left_high, DynamicStrings_String right);

/*
   setLang - set the appropriate output language.
*/

static void setLang (DynamicStrings_String arg);

/*
   handleOption -
*/

static void handleOption (DynamicStrings_String arg);


/*
   getYear - return the year.
*/

static unsigned int getYear (void)
{
  libc_time_t epoch;
  libc_ptrToTM localTime;

  epoch = libc_time (NULL);
  localTime = static_cast<libc_ptrToTM> (libc_localtime (&epoch));
  return localTime->tm_year+1900;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   displayVersion - displays the version of the compiler.
*/

static void displayVersion (unsigned int mustExit)
{
  unsigned int year;

  year = getYear ();
  /* These first three calls to printf hide the first line of text away from the year change script.  */
  mcPrintf_printf0 ((const char *) "Copyright ", 10);
  mcPrintf_printf0 ((const char *) "(C)", 3);  /* A unicode char here would be good.  */
  mcPrintf_printf1 ((const char *) " %d Free Software Foundation, Inc.\\n", 36, (const unsigned char *) &year, (sizeof (year)-1));  /* A unicode char here would be good.  */
  mcPrintf_printf0 ((const char *) "License GPLv3: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\\n", 78);
  mcPrintf_printf0 ((const char *) "This is free software: you are free to change and redistribute it.\\n", 68);
  mcPrintf_printf0 ((const char *) "There is NO WARRANTY, to the extent permitted by law.\\n", 55);
  if (mustExit)
    {
      libc_exit (0);
    }
}


/*
   displayHelp - display the mc help summary.
*/

static void displayHelp (void)
{
  mcPrintf_printf0 ((const char *) "usage: mc [--cpp] [-g] [--quiet] [--extended-opaque] [-q] [-v]", 62);
  mcPrintf_printf0 ((const char *) " [--verbose] [--version] [--help] [-h] [-Ipath] [--olang=c]", 59);
  mcPrintf_printf0 ((const char *) " [--olang=c++] [--olang=m2] [--debug-top]", 41);
  mcPrintf_printf0 ((const char *) " [--gpl-header] [--glpl-header] [--summary=\"foo\"]", 49);
  mcPrintf_printf0 ((const char *) " [--contributed=\"foo\"] [--project=\"foo\"]", 40);
  mcPrintf_printf0 ((const char *) " [--h-file-prefix=foo] [--automatic] [-o=foo] filename\\n", 56);
  mcPrintf_printf0 ((const char *) "  --cpp               preprocess through the C preprocessor\\n", 61);
  mcPrintf_printf0 ((const char *) "  -g                  emit debugging directives in the output language", 70);
  mcPrintf_printf0 ((const char *) "                      so that the debugger will refer to the source\\n", 69);
  mcPrintf_printf0 ((const char *) "  -q --quiet          no output unless an error occurs\\n", 56);
  mcPrintf_printf0 ((const char *) "  -v --verbose        display preprocessor if invoked\\n", 55);
  mcPrintf_printf0 ((const char *) "  --version           display version and exit\\n", 48);
  mcPrintf_printf0 ((const char *) "  -h --help           display this help message\\n", 49);
  mcPrintf_printf0 ((const char *) "  -Ipath              set the module search path\\n", 50);
  mcPrintf_printf0 ((const char *) "  --olang=c           generate ansi C output\\n", 46);
  mcPrintf_printf0 ((const char *) "  --olang=c++         generate ansi C++ output\\n", 48);
  mcPrintf_printf0 ((const char *) "  --olang=m2          generate PIM4 output\\n", 44);
  mcPrintf_printf0 ((const char *) "  --extended-opaque   parse definition and implementation modules to\\n", 70);
  mcPrintf_printf0 ((const char *) "                      generate full type debugging of opaque types\\n", 68);
  mcPrintf_printf0 ((const char *) "  --debug-top         debug topological data structure resolving (internal)\\n", 77);
  mcPrintf_printf0 ((const char *) "  --h-file-prefix=foo set the h file prefix to foo\\n", 52);
  mcPrintf_printf0 ((const char *) "  -o=foo              set the output file to foo\\n", 50);
  mcPrintf_printf0 ((const char *) "  --ignore-fq         do not generate fully qualified idents\\n", 62);
  mcPrintf_printf0 ((const char *) "  --gcc-config-system do not use standard host include files, use gcc config and system instead\\n", 97);
  mcPrintf_printf0 ((const char *) "  --gpl-header        generate a GPL3 header comment at the top of the file\\n", 77);
  mcPrintf_printf0 ((const char *) "  --glpl-header       generate a GLPL3 header comment at the top of the file\\n", 78);
  mcPrintf_printf0 ((const char *) "  --summary=\"foo\"     generate a one line summary comment at the top of the file\\n", 82);
  mcPrintf_printf0 ((const char *) "  --contributed=\"foo\" generate a one line contribution comment near the top of the file\\n", 89);
  mcPrintf_printf0 ((const char *) "  --project=\"foo\"     include the project name within the GPL3 or GLPL3 header\\n", 80);
  mcPrintf_printf0 ((const char *) "  --automatic         generate a comment at the start of the file warning not to edit as it was automatically generated\\n", 121);
  mcPrintf_printf0 ((const char *) "  --scaffold-dynamic  generate dynamic module initialization code for C++\\n", 75);
  mcPrintf_printf0 ((const char *) "  --scaffold-main     generate main function which calls upon the dynamic initialization support in M2RTS\\n", 107);
  mcPrintf_printf0 ((const char *) "  filename            the source file must be the last option\\n", 63);
  libc_exit (0);
}


/*
   commentBegin - issue a start of comment for the appropriate language.
*/

static void commentBegin (FIO_File f)
{
  if (langC || langCPP)
    {
      FIO_WriteString (f, (const char *) "/* ", 3);
    }
  else if (langM2)
    {
      /* avoid dangling else.  */
      FIO_WriteString (f, (const char *) "(* ", 3);
    }
}


/*
   commentEnd - issue an end of comment for the appropriate language.
*/

static void commentEnd (FIO_File f)
{
  if (langC || langCPP)
    {
      FIO_WriteString (f, (const char *) " */", 3);
      FIO_WriteLine (f);
    }
  else if (langM2)
    {
      /* avoid dangling else.  */
      FIO_WriteString (f, (const char *) " *)", 3);
      FIO_WriteLine (f);
    }
}


/*
   comment - write a comment to file, f, and also a newline.
*/

static void comment (FIO_File f, const char *a_, unsigned int _a_high)
{
  char a[_a_high+1];

  /* make a local copy of each unbounded array.  */
  memcpy (a, a_, _a_high+1);

  FIO_WriteString (f, (const char *) a, _a_high);
  FIO_WriteLine (f);
}


/*
   commentS - write a comment to file, f, and also a newline.
*/

static void commentS (FIO_File f, DynamicStrings_String s)
{
  s = SFIO_WriteS (f, s);
  FIO_WriteLine (f);
}


/*
   gplBody -
*/

static void gplBody (FIO_File f)
{
  unsigned int year;

  year = getYear ();
  mcPrintf_printf1 ((const char *) "Copyright (C) %d Free Software Foundation, Inc.\\n", 49, (const unsigned char *) &year, (sizeof (year)-1));
  if (contributed)
    {
      FIO_WriteString (f, (const char *) "Contributed by ", 15);
      contributedContents = SFIO_WriteS (f, contributedContents);
      FIO_WriteString (f, (const char *) ".", 1);
      FIO_WriteLine (f);
    }
  FIO_WriteLine (f);
  FIO_WriteString (f, (const char *) "This file is part of ", 21);
  projectContents = SFIO_WriteS (f, projectContents);
  FIO_WriteString (f, (const char *) ".", 1);
  FIO_WriteLine (f);
  FIO_WriteLine (f);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) " is software; you can redistribute it and/or modify", 51);
  comment (f, (const char *) "it under the terms of the GNU General Public License as published by", 68);
  comment (f, (const char *) "the Free Software Foundation; either version 3, or (at your option)", 67);
  comment (f, (const char *) "any later version.", 18);
  FIO_WriteLine (f);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) " is distributed in the hope that it will be useful, but", 55);
  comment (f, (const char *) "WITHOUT ANY WARRANTY; without even the implied warranty of", 58);
  comment (f, (const char *) "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU", 65);
  comment (f, (const char *) "General Public License for more details.", 40);
  FIO_WriteLine (f);
  comment (f, (const char *) "You should have received a copy of the GNU General Public License", 65);
  FIO_WriteString (f, (const char *) "along with ", 11);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) "; see the file COPYING.  If not,", 32);
  FIO_WriteString (f, (const char *) "see <https://www.gnu.org/licenses/>. ", 37);
}


/*
   glplBody -
*/

static void glplBody (FIO_File f)
{
  unsigned int year;

  year = getYear ();
  mcPrintf_printf1 ((const char *) "Copyright (C) %d Free Software Foundation, Inc.\\n", 49, (const unsigned char *) &year, (sizeof (year)-1));
  if (contributed)
    {
      FIO_WriteString (f, (const char *) "Contributed by ", 15);
      contributedContents = SFIO_WriteS (f, contributedContents);
      FIO_WriteString (f, (const char *) ".", 1);
      FIO_WriteLine (f);
    }
  FIO_WriteLine (f);
  FIO_WriteString (f, (const char *) "This file is part of ", 21);
  projectContents = SFIO_WriteS (f, projectContents);
  FIO_WriteString (f, (const char *) ".", 1);
  FIO_WriteLine (f);
  FIO_WriteLine (f);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) " is free software; you can redistribute it and/or modify", 56);
  comment (f, (const char *) "it under the terms of the GNU General Public License as published by", 68);
  comment (f, (const char *) "the Free Software Foundation; either version 3, or (at your option)", 67);
  comment (f, (const char *) "any later version.", 18);
  FIO_WriteLine (f);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) " is software; you can redistribute it and/or modify", 51);
  comment (f, (const char *) "it under the terms of the GNU Lesser General Public License", 59);
  comment (f, (const char *) "as published by the Free Software Foundation; either version 3,", 63);
  comment (f, (const char *) "or (at your option) any later version.", 38);
  FIO_WriteLine (f);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) " is distributed in the hope that it will be useful, but", 55);
  comment (f, (const char *) "WITHOUT ANY WARRANTY; without even the implied warranty of", 58);
  comment (f, (const char *) "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU", 65);
  comment (f, (const char *) "General Public License for more details.", 40);
  FIO_WriteLine (f);
  comment (f, (const char *) "You should have received a copy of the GNU General Public License", 65);
  FIO_WriteString (f, (const char *) "along with ", 11);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) "; see the file COPYING3.  If not see", 36);
  comment (f, (const char *) "<http://www.gnu.org/licenses/>.", 31);
  FIO_WriteLine (f);
  comment (f, (const char *) "You should have received a copy of the GNU Lesser General Public License", 72);
  FIO_WriteString (f, (const char *) "along with ", 11);
  projectContents = SFIO_WriteS (f, projectContents);
  comment (f, (const char *) "; see the file COPYING.  If not,", 32);
  FIO_WriteString (f, (const char *) "see <https://www.gnu.org/licenses/>. ", 37);
}


/*
   issueGPL - writes out the summary, GPL/LGPL and/or contributed as a single comment.
*/

static void issueGPL (FIO_File f)
{
  if (((summary || contributed) || gplHeader) || glplHeader)
    {
      commentBegin (f);
      if (summary)
        {
          commentS (f, summaryContents);
          FIO_WriteLine (f);
        }
      if (gplHeader)
        {
          gplBody (f);
        }
      if (glplHeader)
        {
          glplBody (f);
        }
      commentEnd (f);
      FIO_WriteLine (f);
    }
}


/*
   setOutputFile - sets the output filename to output.
*/

static void setOutputFile (DynamicStrings_String output)
{
  outputFile = output;
}


/*
   setQuiet - sets the quiet flag to, value.
*/

static void setQuiet (unsigned int value)
{
  quiet = value;
}


/*
   setVerbose - sets the verbose flag to, value.
*/

static void setVerbose (unsigned int value)
{
  verbose = value;
}


/*
   setExtendedOpaque - set extendedOpaque to value.
*/

static void setExtendedOpaque (unsigned int value)
{
  extendedOpaque = value;
}


/*
   setSearchPath - set the search path for the module sources.
*/

static void setSearchPath (DynamicStrings_String arg)
{
  mcSearch_prependSearchPath (arg);
}


/*
   setInternalDebugging - turn on/off internal debugging.
*/

static void setInternalDebugging (unsigned int value)
{
  internalDebugging = value;
}


/*
   setHPrefix - saves the H file prefix.
*/

static void setHPrefix (DynamicStrings_String s)
{
  hPrefix = s;
}


/*
   setIgnoreFQ - sets the ignorefq flag.
*/

static void setIgnoreFQ (unsigned int value)
{
  ignoreFQ = value;
}


/*
   optionIs - returns TRUE if the first len (right) characters
              match left.
*/

static unsigned int optionIs (const char *left_, unsigned int _left_high, DynamicStrings_String right)
{
  DynamicStrings_String s;
  char left[_left_high+1];

  /* make a local copy of each unbounded array.  */
  memcpy (left, left_, _left_high+1);

  if ((DynamicStrings_Length (right)) == (StrLib_StrLen ((const char *) left, _left_high)))
    {
      return DynamicStrings_EqualArray (right, (const char *) left, _left_high);
    }
  else if ((DynamicStrings_Length (right)) > (StrLib_StrLen ((const char *) left, _left_high)))
    {
      /* avoid dangling else.  */
      s = DynamicStrings_Mark (DynamicStrings_Slice (right, 0, static_cast<int> (StrLib_StrLen ((const char *) left, _left_high))));
      return DynamicStrings_EqualArray (s, (const char *) left, _left_high);
    }
  else
    {
      /* avoid dangling else.  */
      return FALSE;
    }
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   setLang - set the appropriate output language.
*/

static void setLang (DynamicStrings_String arg)
{
  /* must check the longest distinctive string first.  */
  if (optionIs ((const char *) "c++", 3, arg))
    {
      decl_setLangCP ();
      langCPP = TRUE;
    }
  else if (optionIs ((const char *) "c", 1, arg))
    {
      /* avoid dangling else.  */
      decl_setLangC ();
      langC = TRUE;
    }
  else if (optionIs ((const char *) "m2", 2, arg))
    {
      /* avoid dangling else.  */
      decl_setLangM2 ();
      langM2 = TRUE;
    }
  else
    {
      /* avoid dangling else.  */
      displayHelp ();
    }
}


/*
   handleOption -
*/

static void handleOption (DynamicStrings_String arg)
{
  if ((optionIs ((const char *) "--quiet", 7, arg)) || (optionIs ((const char *) "-q", 2, arg)))
    {
      setQuiet (TRUE);
    }
  else if ((optionIs ((const char *) "--verbose", 9, arg)) || (optionIs ((const char *) "-v", 2, arg)))
    {
      /* avoid dangling else.  */
      setVerbose (TRUE);
    }
  else if (optionIs ((const char *) "--version", 9, arg))
    {
      /* avoid dangling else.  */
      displayVersion (TRUE);
    }
  else if (optionIs ((const char *) "--olang=", 8, arg))
    {
      /* avoid dangling else.  */
      setLang (DynamicStrings_Slice (arg, 8, 0));
    }
  else if (optionIs ((const char *) "-I", 2, arg))
    {
      /* avoid dangling else.  */
      setSearchPath (DynamicStrings_Slice (arg, 2, 0));
    }
  else if ((optionIs ((const char *) "--help", 6, arg)) || (optionIs ((const char *) "-h", 2, arg)))
    {
      /* avoid dangling else.  */
      displayHelp ();
    }
  else if (optionIs ((const char *) "--cpp", 5, arg))
    {
      /* avoid dangling else.  */
      cppProgram = DynamicStrings_InitString ((const char *) "cpp", 3);
    }
  else if (optionIs ((const char *) "-o=", 3, arg))
    {
      /* avoid dangling else.  */
      setOutputFile (DynamicStrings_Slice (arg, 3, 0));
    }
  else if (optionIs ((const char *) "--extended-opaque", 17, arg))
    {
      /* avoid dangling else.  */
      setExtendedOpaque (TRUE);
    }
  else if (optionIs ((const char *) "--debug-top", 11, arg))
    {
      /* avoid dangling else.  */
      mcOptions_setDebugTopological (TRUE);
    }
  else if (optionIs ((const char *) "--h-file-prefix=", 16, arg))
    {
      /* avoid dangling else.  */
      setHPrefix (DynamicStrings_Slice (arg, 16, 0));
    }
  else if (optionIs ((const char *) "--ignore-fq", 11, arg))
    {
      /* avoid dangling else.  */
      setIgnoreFQ (TRUE);
    }
  else if (optionIs ((const char *) "--gpl-header", 12, arg))
    {
      /* avoid dangling else.  */
      gplHeader = TRUE;
    }
  else if (optionIs ((const char *) "--glpl-header", 13, arg))
    {
      /* avoid dangling else.  */
      glplHeader = TRUE;
    }
  else if (optionIs ((const char *) "--summary=\"", 11, arg))
    {
      /* avoid dangling else.  */
      summary = TRUE;
      summaryContents = DynamicStrings_Slice (arg, 11, -1);
    }
  else if (optionIs ((const char *) "--contributed=\"", 15, arg))
    {
      /* avoid dangling else.  */
      contributed = TRUE;
      contributedContents = DynamicStrings_Slice (arg, 13, -1);
    }
  else if (optionIs ((const char *) "--project=\"", 11, arg))
    {
      /* avoid dangling else.  */
      projectContents = DynamicStrings_Slice (arg, 10, -1);
    }
  else if (optionIs ((const char *) "--gcc-config-system", 19, arg))
    {
      /* avoid dangling else.  */
      gccConfigSystem = TRUE;
    }
  else if (optionIs ((const char *) "--scaffold-main", 15, arg))
    {
      /* avoid dangling else.  */
      scaffoldMain = TRUE;
    }
  else if (optionIs ((const char *) "--scaffold-dynamic", 18, arg))
    {
      /* avoid dangling else.  */
      scaffoldDynamic = TRUE;
    }
}


/*
   handleOptions - iterates over all options setting appropriate
                   values and returns the single source file
                   if found at the end of the arguments.
*/

extern "C" DynamicStrings_String mcOptions_handleOptions (void)
{
  unsigned int i;
  DynamicStrings_String arg;

  i = 1;
  while (SArgs_GetArg (&arg, i))
    {
      if ((DynamicStrings_Length (arg)) > 0)
        {
          /* avoid gcc warning by using compound statement even if not strictly necessary.  */
          if ((DynamicStrings_char (arg, 0)) == '-')
            {
              handleOption (arg);
            }
          else
            {
              if (! summary)
                {
                  summaryContents = DynamicStrings_ConCatChar (DynamicStrings_ConCat (DynamicStrings_InitString ((const char *) "automatically created by mc from ", 33), arg), '.');
                  summary = FALSE;
                }
              return arg;
            }
        }
      i += 1;
    }
  return static_cast<DynamicStrings_String> (NULL);
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getQuiet - return the value of quiet.
*/

extern "C" unsigned int mcOptions_getQuiet (void)
{
  return quiet;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getVerbose - return the value of verbose.
*/

extern "C" unsigned int mcOptions_getVerbose (void)
{
  return verbose;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getInternalDebugging - return the value of internalDebugging.
*/

extern "C" unsigned int mcOptions_getInternalDebugging (void)
{
  return internalDebugging;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getCppCommandLine - returns the Cpp command line and all arguments.
*/

extern "C" DynamicStrings_String mcOptions_getCppCommandLine (void)
{
  DynamicStrings_String s;

  if (DynamicStrings_EqualArray (cppProgram, (const char *) "", 0))
    {
      return static_cast<DynamicStrings_String> (NULL);
    }
  else
    {
      s = DynamicStrings_Dup (cppProgram);
      s = DynamicStrings_ConCat (DynamicStrings_ConCatChar (s, ' '), cppArgs);
      if (mcOptions_getQuiet ())
        {
          s = DynamicStrings_ConCat (DynamicStrings_ConCatChar (s, ' '), DynamicStrings_Mark (DynamicStrings_InitString ((const char *) "-quiet", 6)));
        }
      return s;
    }
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getOutputFile - sets the output filename to output.
*/

extern "C" DynamicStrings_String mcOptions_getOutputFile (void)
{
  return outputFile;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getExtendedOpaque - return the extendedOpaque value.
*/

extern "C" unsigned int mcOptions_getExtendedOpaque (void)
{
  return extendedOpaque;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   setDebugTopological - sets the flag debugTopological to value.
*/

extern "C" void mcOptions_setDebugTopological (unsigned int value)
{
  debugTopological = value;
}


/*
   getDebugTopological - returns the flag value of the command
                         line option --debug-top.
*/

extern "C" unsigned int mcOptions_getDebugTopological (void)
{
  return debugTopological;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getHPrefix - saves the H file prefix.
*/

extern "C" DynamicStrings_String mcOptions_getHPrefix (void)
{
  return hPrefix;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getIgnoreFQ - returns the ignorefq flag.
*/

extern "C" unsigned int mcOptions_getIgnoreFQ (void)
{
  return ignoreFQ;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getGccConfigSystem - return the value of the gccConfigSystem flag.
*/

extern "C" unsigned int mcOptions_getGccConfigSystem (void)
{
  return gccConfigSystem;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getScaffoldDynamic - return true if the --scaffold-dynamic option was present.
*/

extern "C" unsigned int mcOptions_getScaffoldDynamic (void)
{
  return scaffoldDynamic;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   getScaffoldMain - return true if the --scaffold-main option was present.
*/

extern "C" unsigned int mcOptions_getScaffoldMain (void)
{
  return scaffoldMain;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   writeGPLheader - writes out the GPL or the LGPL as a comment.
*/

extern "C" void mcOptions_writeGPLheader (FIO_File f)
{
  issueGPL (f);
}

extern "C" void _M2_mcOptions_init (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
  langC = TRUE;
  langCPP = FALSE;
  langM2 = FALSE;
  gplHeader = FALSE;
  glplHeader = FALSE;
  summary = FALSE;
  contributed = FALSE;
  caseRuntime = FALSE;
  arrayRuntime = FALSE;
  returnRuntime = FALSE;
  internalDebugging = FALSE;
  quiet = FALSE;
  verbose = FALSE;
  extendedOpaque = FALSE;
  debugTopological = FALSE;
  ignoreFQ = FALSE;
  gccConfigSystem = FALSE;
  scaffoldMain = FALSE;
  scaffoldDynamic = FALSE;
  hPrefix = DynamicStrings_InitString ((const char *) "", 0);
  cppArgs = DynamicStrings_InitString ((const char *) "", 0);
  cppProgram = DynamicStrings_InitString ((const char *) "", 0);
  outputFile = DynamicStrings_InitString ((const char *) "-", 1);
  summaryContents = DynamicStrings_InitString ((const char *) "", 0);
  contributedContents = DynamicStrings_InitString ((const char *) "", 0);
  projectContents = DynamicStrings_InitString ((const char *) "GNU Modula-2", 12);
}

extern "C" void _M2_mcOptions_finish (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
}