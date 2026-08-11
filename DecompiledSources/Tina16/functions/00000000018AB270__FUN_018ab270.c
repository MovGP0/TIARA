/* Ghidra address: 018ab270 */
/* Ghidra symbol: FUN_018ab270 */


void FUN_018ab270(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined1 *)((longlong)param_1 + 0x571) = 1;
  lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    FUN_01977650(uVar3,0);
    iVar1 = FUN_004b2060(param_1[0xaf]);
    if (0 < iVar1) {
      lVar2 = FUN_018b0ad0(param_1[0xaf],0);
      lVar4 = FUN_018b0ad0(param_1[0xaf],0);
      FUN_01977ff0(*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar4 + 0x38));
      lVar2 = FUN_018b0ad0(param_1[0xaf],0);
      FUN_01977650(*(undefined8 *)(lVar2 + 0x30),0);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x571) = 0;
  FUN_018b0a90(param_1[0xaf]);
  return;
}

