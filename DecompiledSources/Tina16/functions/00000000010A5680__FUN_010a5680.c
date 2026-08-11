/* Ghidra address: 010a5680 */
/* Ghidra symbol: FUN_010a5680 */


void FUN_010a5680(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_010a66b0(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xa2b) = 0;
    *(undefined1 *)(param_1 + 0xa29) = 1;
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x13a19) = 0;
    FUN_010a66c0(param_1,0);
  }
  return;
}

