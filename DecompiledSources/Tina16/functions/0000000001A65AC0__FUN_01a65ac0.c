/* Ghidra address: 01a65ac0 */
/* Ghidra symbol: FUN_01a65ac0 */


void FUN_01a65ac0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = FUN_0069e8a0();
  uVar2 = FUN_0069dc70(uVar2);
  iVar1 = thunk_FUN_03e5bd07(uVar2,6);
  if (*PTR_DAT_020033c0 == '\x03') {
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
    FUN_013d1d20(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 200),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),dVar3 / (double)iVar1);
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
    FUN_01ae7390(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),L"TopMargin",
                 dVar3 / (double)iVar1);
  }
  else {
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
    FUN_013d1d20(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 200),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 dVar3 / ((double)iVar1 / 25.4));
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
    FUN_01ae7390(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),L"TopMargin",
                 dVar3 / ((double)iVar1 / 25.4));
  }
  FUN_01a65d80(param_1);
  return;
}

