/* Ghidra address: 00f03760 */
/* Ghidra symbol: FUN_00f03760 */


void FUN_00f03760(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x4f) & 2) == 0) {
    iVar1 = FUN_00f02fb0(param_1);
    if (param_2 == iVar1) goto LAB_00f0378e;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 2;
LAB_00f0378e:
  FUN_004b1830(param_1,0);
  return;
}

