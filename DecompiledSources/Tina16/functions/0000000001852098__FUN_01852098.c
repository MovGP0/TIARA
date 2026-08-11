/* Ghidra address: 01852098 */
/* Ghidra symbol: FUN_01852098 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_01852098(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

