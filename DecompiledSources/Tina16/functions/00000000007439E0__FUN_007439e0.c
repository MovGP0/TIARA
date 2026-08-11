/* Ghidra address: 007439e0 */
/* Ghidra symbol: FUN_007439e0 */


void FUN_007439e0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  int local_68;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = auStack_88;
  if (*(char *)((longlong)param_1 + 0xae) == '\0') {
    FUN_00659490(param_1,param_2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x499) = 1;
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x60);
    uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x68);
    cVar3 = *(char *)((longlong)param_1 + 0xad);
    local_30._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    local_38._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_38 = uVar1;
    local_30 = uVar2;
    if (cVar3 == '\x01') {
      local_50 = auStack_88;
      if (*(int *)((longlong)param_1 + 0x9c) == 0) {
        iVar4 = local_30._4_4_ - local_38._4_4_;
        local_50 = auStack_88;
        FUN_0064cc50(param_1,iVar4);
        uVar1 = local_38;
        uVar2 = local_30;
      }
    }
    else if (cVar3 == '\x02') {
      local_50 = auStack_88;
      if (*(int *)((longlong)param_1 + 0x9c) == 0) {
        local_68 = local_30._4_4_ - local_38._4_4_;
        local_50 = auStack_88;
        local_3c = local_68;
        (**(code **)(*param_1 + 400))
                  (param_1,(int)param_1[0x12],*(int *)((longlong)param_1 + 0x94) - local_68,
                   (int)param_1[0x13]);
        uVar1 = local_38;
        uVar2 = local_30;
      }
    }
    else {
      local_30._0_4_ = (int)uVar2;
      local_38._0_4_ = (int)uVar1;
      if (cVar3 == '\x03') {
        local_50 = auStack_88;
        if ((int)param_1[0x13] == 0) {
          iVar4 = (int)local_30 - (int)local_38;
          local_50 = auStack_88;
          FUN_0064cbf0(param_1,iVar4);
          uVar1 = local_38;
          uVar2 = local_30;
        }
      }
      else {
        local_50 = auStack_88;
        if ((cVar3 == '\x04') && (local_50 = auStack_88, (int)param_1[0x13] == 0)) {
          local_3c = (int)local_30 - (int)local_38;
          local_68 = *(int *)((longlong)param_1 + 0x9c);
          local_50 = auStack_88;
          (**(code **)(*param_1 + 400))
                    (param_1,(int)param_1[0x12] - local_3c,*(undefined4 *)((longlong)param_1 + 0x94)
                     ,local_3c);
          uVar1 = local_38;
          uVar2 = local_30;
        }
      }
    }
    local_30 = uVar2;
    local_38 = uVar1;
    FUN_00659490(param_1,param_2);
    FUN_00743be0(0,local_50);
  }
  return;
}

