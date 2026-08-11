/* Ghidra address: 00d232b0 */
/* Ghidra symbol: FUN_00d232b0 */


longlong * FUN_00d232b0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(byte *)(param_1 + 5) < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 5) & 0x1f) &
            0x18U) != 0;
  }
  else {
    bVar5 = false;
  }
  puVar1 = auStack_88;
  if (bVar5) {
    FUN_0041ddd0(&local_38,PTR_PTR_02004c70);
    FUN_00415dd0(&local_40,local_38,0);
    FUN_00d20b50(4,local_40);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)(*param_1 + 0x70))(param_1);
  local_20[0] = FUN_00409570((longlong)*(int *)((longlong)param_1 + 0x44));
  FUN_00409a70(param_1[10],local_20[0],(longlong)*(int *)((longlong)param_1 + 0x44));
  FUN_00d222a0(param_1,local_20[0],local_20[0],*(undefined4 *)((longlong)param_1 + 0x44));
  FUN_00415d10(param_2,*(undefined4 *)((longlong)param_1 + 0x44),0);
  uVar2 = FUN_00415ab0(*param_2);
  FUN_00409a70(param_1[0xc],uVar2,(longlong)*(int *)((longlong)param_1 + 0x44));
  lVar3 = FUN_00cd55d0(param_1);
  if (lVar3 == 0) {
    local_24 = 0;
    if (*param_2 != 0) {
      local_24 = *(undefined4 *)(*param_2 + -4);
    }
    uVar2 = FUN_00415ab0(*param_2);
    FUN_00cd7480(&local_50,uVar2,local_24,param_3);
    FUN_00414bf0(param_2,local_50);
  }
  else {
    plVar4 = (longlong *)FUN_00cd55d0(param_1);
    local_68 = param_3;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_48,*param_2,2);
    FUN_00414bf0(param_2,local_48);
  }
  FUN_00409620(local_20,0);
  (**(code **)(*param_1 + 0x70))(param_1);
  FUN_00414590(&local_50,3);
  FUN_00414480(&local_38);
  return param_2;
}

