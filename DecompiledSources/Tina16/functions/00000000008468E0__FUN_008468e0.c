/* Ghidra address: 008468e0 */
/* Ghidra symbol: FUN_008468e0 */


void FUN_008468e0(longlong *param_1,ushort *param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_60 = auStack_c8;
  local_a0 = 0;
  local_98 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  FUN_00659a30(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x525) != '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,2);
    if (cVar1 != '\0') {
      if (0x1f < *param_2) {
        local_28 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db070(&local_68,local_28);
        cVar1 = (**(code **)(*local_68 + 0x68))(local_68,*param_2);
        if (cVar1 == '\0') {
          thunk_FUN_03f3ed6d(0);
          *param_2 = 0;
        }
      }
      uVar3 = (ulonglong)*param_2;
      if (uVar3 < 0x19) {
        if ((uVar3 != 0x18) && (uVar3 != 8)) {
          if (uVar3 == 0xd) {
            local_50 = (**(code **)(*param_1 + 0x48))(param_1);
            FUN_004db070(&local_90,local_50);
            cVar1 = (**(code **)(*local_90 + 0x88))(local_90);
            if (cVar1 != '\0') {
              local_58 = (**(code **)(*param_1 + 0x48))(param_1);
              FUN_004db070(&local_98,local_58);
              (**(code **)(*local_98 + 0x40))(local_98);
            }
            goto LAB_00846c39;
          }
          if (uVar3 != 0x16) goto LAB_00846c39;
        }
      }
      else {
        if (uVar3 == 0x1b) {
          local_40 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db070(&local_80,local_40);
          cVar1 = (**(code **)(*local_80 + 0x88))(local_80);
          if (cVar1 != '\0') {
            local_48 = (**(code **)(*param_1 + 0x48))(param_1);
            FUN_004db070(&local_88,local_48);
            (**(code **)(*local_88 + 0x50))(local_88);
          }
          *param_2 = 0;
          goto LAB_00846c39;
        }
        if (0xffdf < uVar3 - 0x20) goto LAB_00846c39;
      }
      local_30 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db070(&local_70,local_30);
      cVar1 = (**(code **)(*local_70 + 0x48))(local_70);
      if (cVar1 == '\0') {
        *param_2 = 0;
      }
      else {
        local_38 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db070(&local_78,local_38);
        (**(code **)(*local_78 + 0x58))(local_78);
      }
    }
  }
LAB_00846c39:
  if (((*(uint *)((longlong)param_1 + 0x4d4) & 0x2000) == 0) && (*param_2 == 0xd)) {
    if (*(char *)((longlong)param_1 + 0x525) == '\0') {
      FUN_0083f7b0(param_1);
    }
    else {
      FUN_0083f790(param_1);
    }
    *param_2 = 0;
  }
  FUN_00417840(&local_a0,&DAT_00484e18,8);
  return;
}

