/* Ghidra address: 0161a090 */
/* Ghidra symbol: FUN_0161a090 */


void FUN_0161a090(longlong param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 100;
  FUN_00419260(param_1 + 0x20,&DAT_01618238,1,(longlong)*(int *)(param_1 + 0x18));
  return;
}

