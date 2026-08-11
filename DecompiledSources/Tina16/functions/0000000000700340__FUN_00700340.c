/* Ghidra address: 00700340 */
/* Ghidra symbol: FUN_00700340 */


void FUN_00700340(longlong *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined4 local_48;
  longlong local_28;
  longlong local_20;
  
  local_60 = auStack_98;
  puVar1 = auStack_98;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    iVar3 = *param_2;
    if (iVar3 == 0x200) {
      cVar2 = FUN_007001d0(auStack_98,param_2);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + -0x38))(param_1,param_2);
        puVar1 = local_60;
      }
      else {
        cVar2 = FUN_0064c470(local_28);
        puVar1 = local_60;
        if (cVar2 != '\x01') {
          (**(code **)(*param_1 + -0x38))(param_1,param_2);
          puVar1 = local_60;
        }
      }
    }
    else {
      if (iVar3 != 0x201) {
        if (iVar3 == 0x202) {
          local_60 = auStack_98;
          cVar2 = FUN_007001d0(auStack_98,param_2);
          puVar1 = local_60;
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + -0x38))(param_1,param_2);
            if ((local_20 == local_28) ||
               (cVar2 = FUN_004113d0(local_28,&PTR_FUN_006cb0d0), cVar2 != '\0')) {
              if ((*(char *)(local_28 + 0x31a) != '\0') &&
                 (((*(char *)(local_28 + 0x31b) != '\0' && (*(char *)(local_28 + 0x318) != '\0')) &&
                  (*(char *)(local_28 + 0x33a) == '\x01')))) {
                FUN_006fa3b0(local_28,0);
              }
              FUN_006fc900(param_1);
              puVar1 = local_60;
            }
            else {
              cVar2 = FUN_004113d0(local_20,&PTR_FUN_006cb0d0);
              if (cVar2 != '\0') {
                return;
              }
              puVar1 = local_60;
              if (*(char *)(local_28 + 0x33a) == '\x02') {
                return;
              }
            }
          }
          goto LAB_00700636;
        }
        puVar1 = auStack_98;
        if (iVar3 != 0x203) goto LAB_00700636;
      }
      local_60 = auStack_98;
      cVar2 = FUN_007001d0(auStack_98,param_2);
      puVar1 = local_60;
      if (cVar2 != '\0') {
        if ((*(char *)((longlong)param_1 + 0x601) != '\0') &&
           (cVar2 = FUN_0064e170(param_1), cVar2 != '\0')) {
          FUN_0064e190(local_28,1);
        }
        if ((*(char *)(local_28 + 0x33a) != '\x02') ||
           ((iVar3 = FUN_006d3e90(), 0x40046 < iVar3 &&
            ((int)(short)param_2[4] < *(int *)(local_28 + 0x90) + *(int *)(local_28 + 0x98) + -0xe))
           )) {
          FUN_00656570(param_1,param_2);
        }
        cVar2 = FUN_0064eb50(local_28);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + -0x38))(param_1,param_2);
        }
        if (*(char *)(local_28 + 0x33a) == '\x02') {
          return;
        }
        if ((*(longlong *)(local_28 + 0x330) == 0) && (*(longlong *)(local_28 + 0x328) == 0)) {
          return;
        }
        FUN_007002b0(auStack_98,local_28);
        local_50 = 0;
        uVar4 = FUN_0065b870(param_1);
        local_78 = 1;
        iVar3 = thunk_FUN_04166556(local_58,uVar4,0x201,0x201);
        if ((iVar3 != 0) && (local_50 == 0x12)) {
          thunk_FUN_03fcecfa(local_48);
          return;
        }
        *param_2 = 0x202;
        (**(code **)(*param_1 + -0x40))(param_1,param_2);
        return;
      }
    }
  }
LAB_00700636:
  local_60 = puVar1;
  FUN_00656570(param_1,param_2);
  return;
}

