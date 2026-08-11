/* Ghidra address: 01aa0060 */
/* Ghidra symbol: FUN_01aa0060 */


void FUN_01aa0060(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_01a9fe00(&local_30,param_1,param_2);
  iVar1 = FUN_004170c0(&DAT_01aa0268,local_30,1);
  if (iVar1 == 1) {
    iVar1 = 0x1b;
    local_68 = &PTR_u_COL_Bckgrnd_01fcd578;
    puVar3 = &DAT_01fcd50c;
    do {
      FUN_00416ba0(&local_40,local_30,*local_68);
      FUN_005fbf40(&local_48,*(undefined4 *)puVar3);
      (**(code **)(*param_1 + 0x10))
                (param_1,&local_38,L"Schematic Editor Color Sets",local_40,local_48);
      uVar2 = FUN_005fbf60(local_38);
      *param_3 = uVar2;
      param_3 = param_3 + 1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
      local_68 = local_68 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x10;
    puVar3 = &DAT_01fcd650;
    puVar4 = (undefined4 *)(param_4 + 4);
    do {
      FUN_005fbf40(&local_58,*(undefined4 *)puVar3);
      FUN_00416ba0(&local_50,local_30,local_58);
      FUN_005fbf40(&local_60,*(undefined4 *)puVar3);
      (**(code **)(*param_1 + 0x10))
                (param_1,&local_38,L"Schematic Editor Color Sets",local_50,local_60);
      uVar2 = FUN_005fbf60(local_38);
      *puVar4 = uVar2;
      puVar4 = puVar4 + 2;
      puVar3 = puVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_01a90f10(param_4);
  }
  FUN_00414560(&local_60,7);
  return;
}

