/* Ghidra address: 0149bdc0 */
/* Ghidra symbol: FUN_0149bdc0 */


undefined1
FUN_0149bdc0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  char local_80;
  undefined1 *local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined1 local_29;
  longlong local_28;
  longlong local_20;
  
  local_70 = auStack_a8;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_28 = 0;
  local_20 = 0;
  local_29 = 1;
  (**(code **)(*param_4 + 0x90))(param_4);
  lVar3 = FUN_019a4600();
  plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x208) + 8);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar2 == 0) {
    local_29 = 0;
    FUN_0149c020(0,local_70);
  }
  else {
    local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    uVar4 = FUN_019a4600();
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_20 = FUN_01477fa0(&DAT_01476b38,1,uVar4,0);
    iVar2 = (**(code **)(*param_2 + 0x28))();
    local_30 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2,&local_40,local_30);
        (**(code **)(*param_3 + 0x18))(param_3,&local_48,local_30);
        FUN_0147c660(&local_48,&local_50);
        local_88 = &local_58;
        local_80 = param_5;
        FUN_01479570(param_1,local_40,local_48,local_50);
        (**(code **)(*param_4 + 0x78))(param_4,local_58);
        local_30 = local_30 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_5 == '\0') {
      local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_01478670(local_20,0,local_28,&local_38);
    }
    if (local_20 != 0) {
      FUN_00410f20(local_20);
    }
    if (local_28 != 0) {
      FUN_00410f20(local_28);
    }
    if (param_5 == '\0') {
      FUN_01c76fd0(*(undefined8 *)PTR_DAT_02004e40,0);
    }
  }
  FUN_00414560(&local_58,5);
  return local_29;
}

