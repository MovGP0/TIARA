/* Ghidra address: 00f8f8a0 */
/* Ghidra symbol: FUN_00f8f8a0 */


void FUN_00f8f8a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00f8b910(param_1,*(undefined4 *)(param_1 + 0x345c));
  uVar3 = FUN_007fc180(&PTR_FUN_00f868d8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001668 = uVar3;
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x6f8) = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x6fc) = *(undefined4 *)(lVar2 + 0x28);
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x704) = *(undefined4 *)(lVar2 + 0x30);
  *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x700) = *(undefined4 *)(lVar2 + 0x2c);
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02001668 + 0x2d0))(*(longlong **)PTR_DAT_02001668);
  if (iVar1 == 1) {
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x704);
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(*(longlong *)PTR_DAT_02001668 + 0x700);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02001668);
  return;
}

