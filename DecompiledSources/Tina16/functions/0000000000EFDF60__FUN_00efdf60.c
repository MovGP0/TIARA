/* Ghidra address: 00efdf60 */
/* Ghidra symbol: FUN_00efdf60 */


void FUN_00efdf60(double param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00efa3b0(param_2 + 0x18);
  FUN_00efa3b0(param_2 + 0x20);
  FUN_00ef8bd0(param_2 + 0x30,param_2 + 0x38,param_1 * 0.4,param_2);
  iVar1 = FUN_00ef7f30(*(undefined8 *)(param_2 + 0x30),param_2);
  iVar2 = FUN_00ef7f30(*(undefined8 *)(param_2 + 0x38),param_2);
  if ((0 < iVar1) && (0 < iVar2)) {
    FUN_00ef94a0(param_2 + 0x30,(param_1 * 0.57 * (double)iVar1) / (double)(iVar1 + iVar2),param_2);
    FUN_00ef94a0(param_2 + 0x38,(param_1 * 0.57 * (double)iVar2) / (double)(iVar1 + iVar2),param_2);
  }
  FUN_00ef9b40(param_2 + 0x30,param_2 + 0x38,param_2);
  FUN_00efc940(param_2 + 0x30,param_2 + 0x38,param_2 + 0xb8,param_1 * 0.03,param_2);
  FUN_00ef83a0(param_2);
  return;
}

