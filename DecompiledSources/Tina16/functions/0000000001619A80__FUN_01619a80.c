/* Ghidra address: 01619a80 */
/* Ghidra symbol: FUN_01619a80 */


void FUN_01619a80(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00409570((longlong)((param_2 + param_3 + 1) * 8));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(int *)(param_1 + 0xc) = param_2 + 1;
  *(int *)(param_1 + 0x10) = param_3;
  return;
}

