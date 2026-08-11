/* Ghidra address: 00a88cf8 */
/* Ghidra symbol: FUN_00a88cf8 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a88cf8(void)

{
  longlong in_RAX;
  int unaff_EBP;
  byte in_CF;
  
  *(int *)(in_RAX * 2) = (*(int *)(in_RAX * 2) - unaff_EBP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

