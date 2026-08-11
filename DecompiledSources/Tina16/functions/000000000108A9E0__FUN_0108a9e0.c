/* Ghidra address: 0108a9e0 */
/* Ghidra symbol: FUN_0108a9e0 */


void FUN_0108a9e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_007fc180(&PTR_FUN_00f868d8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001668 = uVar2;
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x6f8) = *(undefined4 *)(param_1 + 0x4c14);
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x6fc) = *(undefined4 *)(param_1 + 0x4c1c);
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x704) = *(undefined4 *)(param_1 + 0x4c24);
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x700) = *(undefined4 *)(param_1 + 0x4c20);
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02001668 + 0x2d0))(*(longlong **)PTR_DAT_02001668);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x4c24) = *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x704);
    *(undefined4 *)(param_1 + 0x4c20) = *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x700);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02001668);
  FUN_010892f0(param_1);
  return;
}

