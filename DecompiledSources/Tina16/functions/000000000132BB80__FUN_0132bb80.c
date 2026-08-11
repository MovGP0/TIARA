/* Ghidra address: 0132bb80 */
/* Ghidra symbol: FUN_0132bb80 */


void FUN_0132bb80(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0xb8),param_3);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),param_2);
  uVar4 = FUN_007ffbe0(param_1);
  iVar2 = FUN_005fdfd0(uVar4,param_2);
  FUN_007fdf10(param_1,*(undefined4 *)(param_1 + 0x718));
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x714));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4d8);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (1 < iVar3) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4d8);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    iVar3 = iVar2 * (iVar3 + -1) + 2;
    iVar2 = FUN_0064d120(param_1);
    FUN_007fdf10(param_1,iVar2 + iVar3);
    FUN_0064cc50(*(longlong *)(param_1 + 0x6f8),
                 *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x9c) + iVar3);
  }
  if (param_3 == 0) {
    FUN_00416cd0(local_20,3,L"Message(",param_2,&DAT_0132bdd4);
    FUN_00415dd0(&local_28,local_20[0],0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_28,0,1);
  }
  else {
    FUN_00416cd0(&local_30,3,L"ErrorMessage(",param_2,&DAT_0132bdd4);
    FUN_00415dd0(&local_38,local_30,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_38,0,1);
  }
  FUN_004144d0(&local_38);
  FUN_00414480(&local_30);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  return;
}

