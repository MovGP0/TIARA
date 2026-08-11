/* Ghidra address: 00686900 */
/* Ghidra symbol: FUN_00686900 */


undefined1 FUN_00686900(longlong *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  char local_29;
  int local_28;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_60 = auStack_98;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_20[0] = 0;
  local_30 = 0;
  if (param_2 != 0) {
    local_30 = *(int *)(param_2 + -4);
  }
  if (local_30 == 0) {
    local_21 = 0;
    local_60 = auStack_98;
    (**(code **)(*param_1 + 0x268))(param_1,0xffffffff);
    pcVar2 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar2)(param_1);
  }
  else {
    uVar3 = FUN_0065b870(param_1);
    local_28 = FUN_00470120(uVar3,0x14c,0xffffffffffffffff,param_2);
    local_21 = local_28 != -1;
    if ((bool)local_21) {
      iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
      local_29 = local_28 != iVar1;
      if ((char)param_1[0xaf] != '\0') {
        iVar1 = (**(code **)(*(longlong *)param_1[0x9e] + 0xb0))((longlong *)param_1[0x9e],param_2);
        if (iVar1 != -1) {
          uVar3 = FUN_0065b870(param_1);
          thunk_FUN_041b2403(uVar3,0x14f,0,0);
        }
      }
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar3,0x14e,(longlong)local_28,0);
      if (*(byte *)((longlong)param_1 + 0x54a) < 8) {
        bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                 (*(byte *)((longlong)param_1 + 0x54a) & 0x1f) & 3U) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        local_20[0] = 0;
        (**(code **)(*(longlong *)param_1[0x9e] + 0x18))
                  ((longlong *)param_1[0x9e],local_20,local_28);
        local_34 = 0;
        if (param_2 != 0) {
          local_34 = *(int *)(param_2 + -4);
        }
        FUN_00416dc0(&local_70,local_20[0],local_34 + 1,0x7fffffff);
        FUN_00416ba0(&local_68,param_2,local_70);
        FUN_0064de00(param_1,local_68);
        FUN_00414480(local_20);
        local_50 = FUN_0065b870(param_1);
        local_38 = 0;
        if (param_2 != 0) {
          local_38 = *(undefined4 *)(param_2 + -4);
        }
        FUN_0064dd90(param_1,&local_78);
        local_40 = local_78;
        local_44 = 0;
        if (local_78 != 0) {
          local_44 = *(undefined4 *)(local_78 + -4);
        }
        thunk_FUN_041b2403(local_50,0x142,0,CONCAT22((undefined2)local_44,(undefined2)local_38));
      }
      else {
        (**(code **)(*param_1 + 0x268))(param_1,local_28);
        FUN_00414ad0(param_1 + 0xa8,param_2);
      }
      if (local_29 != '\0') {
        pcVar2 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar2)(param_1);
        pcVar2 = (code *)FUN_00411550(param_1,0xffab);
        (*pcVar2)(param_1);
      }
    }
  }
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,2);
  return local_21;
}

