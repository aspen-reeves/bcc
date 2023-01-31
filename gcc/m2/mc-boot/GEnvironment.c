/* do not edit automatically generated by mc from Environment.  */
/* Environment.mod provides access to the environment settings of a process.

Copyright (C) 2001-2023 Free Software Foundation, Inc.
Contributed by Gaius Mulley <gaius.mulley@southwales.ac.uk>.

This file is part of GNU Modula-2.

GNU Modula-2 is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GNU Modula-2 is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#   if !defined (PROC_D)
#      define PROC_D
       typedef void (*PROC_t) (void);
       typedef struct { PROC_t proc; } PROC;
#   endif

#if defined(__cplusplus)
#   undef NULL
#   define NULL 0
#endif
#define _Environment_H
#define _Environment_C

#   include "GSYSTEM.h"
#   include "Glibc.h"
#   include "GASCII.h"
#   include "GStrLib.h"


/*
   GetEnvironment - gets the environment variable Env and places
      	       	    a copy of its value into string, dest.
                    It returns TRUE if the string Env was found in
                    the processes environment.
*/

extern "C" unsigned int Environment_GetEnvironment (const char *Env_, unsigned int _Env_high, char *dest, unsigned int _dest_high);

/*
   PutEnvironment - change or add an environment variable definition EnvDef.
                    TRUE is returned if the environment variable was
                    set or changed successfully.
*/

extern "C" unsigned int Environment_PutEnvironment (const char *EnvDef_, unsigned int _EnvDef_high);


/*
   GetEnvironment - gets the environment variable Env and places
      	       	    a copy of its value into string, dest.
                    It returns TRUE if the string Env was found in
                    the processes environment.
*/

extern "C" unsigned int Environment_GetEnvironment (const char *Env_, unsigned int _Env_high, char *dest, unsigned int _dest_high)
{
  typedef char *GetEnvironment__T1;

  unsigned int High;
  unsigned int i;
  GetEnvironment__T1 Addr;
  char Env[_Env_high+1];

  /* make a local copy of each unbounded array.  */
  memcpy (Env, Env_, _Env_high+1);

  i = 0;
  High = _dest_high;
  Addr = static_cast<GetEnvironment__T1> (libc_getenv (&Env));
  while (((i < High) && (Addr != NULL)) && ((*Addr) != ASCII_nul))
    {
      dest[i] = (*Addr);
      Addr += 1;
      i += 1;
    }
  if (i < High)
    {
      dest[i] = ASCII_nul;
    }
  return Addr != NULL;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   PutEnvironment - change or add an environment variable definition EnvDef.
                    TRUE is returned if the environment variable was
                    set or changed successfully.
*/

extern "C" unsigned int Environment_PutEnvironment (const char *EnvDef_, unsigned int _EnvDef_high)
{
  char EnvDef[_EnvDef_high+1];

  /* make a local copy of each unbounded array.  */
  memcpy (EnvDef, EnvDef_, _EnvDef_high+1);

  return (libc_putenv (&EnvDef)) == 0;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}

extern "C" void _M2_Environment_init (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
}

extern "C" void _M2_Environment_finish (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
}