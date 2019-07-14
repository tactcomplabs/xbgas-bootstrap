/*
 * _XBGAS-BOOTSTRAP_C_
 *
 * Copyright (C) 2017-2018 Tactical Computing Laboratories, LLC
 * All Rights Reserved
 * contact@tactcomplabs.com
 *
 * This file is a part of the XBGAS-RUNTIME package.  For license
 * information, see the LICENSE file in the top level directory
 * of the distribution.
 *
 */

__attribute__ ((constructor(0))) __attribute((__section__(".init.text"))) static void __xbgas_ctor();
__attribute__ ((destructor(0))) __attribute((__section__(".exit.text"))) static void __xbgas_dtor();

#ifdef XBGAS_RV32
void __rv32_bootstrap(){
  /* rv32 bootstrap code goes here */
}

void __rv32_dtor(){
  /* rv32 destructor code goes here */
}
#else
void __rv64_bootstrap(){
  /* rv64 bootstrap code goes here */
}

void __rv64_dtor(){
  /* rv64 destructor code goes here */
}
#endif

static void __xbgas_ctor(){
#ifdef XBGAS_RV32
  /* execute rv32 bootstrap code */
  __rv32_bootstrap();
#else
  /* execute rv64 bootstrap code */
  __rv64_bootstrap();
#endif
}

static void __xbgas_dtor(){
#ifdef XBGAS_RV32
  /* execute rv32 destructor code */
  __rv32_dtor();
#else
  /* execute rv64 destructor code */
  __rv64_dtor();
#endif
}

/* EOF */
