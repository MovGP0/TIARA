/* Ghidra address: 00a84028 */
/* Ghidra symbol: FUN_00a84028 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a84028(char param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

