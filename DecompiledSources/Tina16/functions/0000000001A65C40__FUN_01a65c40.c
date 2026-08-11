/* Ghidra address: 01a65c40 */
/* Ghidra symbol: FUN_01a65c40 */


void FUN_01a65c40(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  
  lVar3 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
  uVar6 = FUN_0069e8a0();
  uVar6 = FUN_0069dc70(uVar6);
  iVar4 = thunk_FUN_03e5bd07(uVar6,4);
  uVar6 = FUN_0069e8a0();
  uVar6 = FUN_0069dc70(uVar6);
  iVar5 = thunk_FUN_03e5bd07(uVar6,6);
  dVar1 = *(double *)(*(longlong *)(lVar3 + 0xc0) + 0x50);
  dVar2 = *(double *)(*(longlong *)(lVar3 + 0xb8) + 0x50);
  dVar7 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
  dVar7 = ((dVar1 - dVar2) * (double)iVar4) / dVar7;
  FUN_013d1d20(*(undefined8 *)(lVar3 + 0xd0),*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               dVar7 / (double)iVar5 + *(double *)(*(longlong *)(lVar3 + 200) + 0x50));
  FUN_01ae7390(lVar3,L"BottomMargin",
               dVar7 / (double)iVar5 + *(double *)(*(longlong *)(lVar3 + 200) + 0x50));
  FUN_01a65d80(param_1);
  return;
}

