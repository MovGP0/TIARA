/* Ghidra address: 00d2ab20 */
/* Ghidra symbol: FUN_00d2ab20 */


longlong * FUN_00d2ab20(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_004144d0(param_2);
  if (param_3 == 0) {
    plVar3 = (longlong *)FUN_00d20e10();
    uVar4 = FUN_00d2aa20(param_1);
    iVar1 = (**(code **)(*plVar3 + 0xc0))(plVar3,uVar4);
    if (-1 < iVar1) {
      plVar3 = (longlong *)FUN_00d20e10();
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_28,iVar1);
      FUN_0043ea00(local_20,local_28);
      FUN_00415dd0(param_2,local_20[0],0);
      FUN_00416880(&local_30,*param_2);
      uVar2 = FUN_004170c0(&DAT_00d2ace8,local_30,1);
      FUN_00415b50(param_2,1,uVar2);
    }
    iVar1 = 0;
    if (*param_2 != 0) {
      iVar1 = *(int *)(*param_2 + -4);
    }
    if (0 < iVar1) {
      FUN_004155b0(param_2,&DAT_00d2acf8);
    }
    FUN_00416880(&local_40,*param_2);
    uVar4 = FUN_00d2aa20(param_1);
    iVar1 = FUN_00d21560(uVar4);
    FUN_0043f750(&local_48,iVar1 << 3);
    FUN_00416cd0(&local_38,3,local_40,local_48,L"bit Key");
    FUN_00415dd0(param_2,local_38,0);
  }
  FUN_00414560(&local_48,6);
  return param_2;
}

