/* Ghidra address: 015d9820 */
/* Ghidra symbol: FUN_015d9820 */


ulonglong FUN_015d9820(longlong param_1,longlong param_2,int param_3,longlong *param_4,
                      longlong param_5,int param_6,longlong *param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  if (*(char *)(param_1 + 0x103) == '\0') {
    iVar2 = (**(code **)(*(longlong *)*param_4 + 0x20))((longlong *)*param_4,param_2,param_3);
    local_28 = (ulonglong)iVar2;
  }
  else {
    local_28 = 0;
    while ((longlong)local_28 < (longlong)param_3) {
      local_30 = FUN_015d9770(param_1,*(undefined8 *)(param_1 + 0x90));
      if (param_7 != (longlong *)0x0) {
        lVar3 = (**(code **)*param_7)(param_7);
        local_30 = local_30 - lVar3;
      }
      lVar3 = FUN_015c1f20(*(undefined8 *)(param_1 + 0x108),param_5);
      lVar4 = (*(code *)**(undefined8 **)*param_4)((undefined8 *)*param_4);
      local_38 = lVar3 - lVar4;
      if (param_7 != (longlong *)0x0) {
        lVar3 = (**(code **)*param_7)(param_7);
        local_38 = local_38 - lVar3;
      }
      lVar3 = FUN_015c1f20(*(undefined8 *)(param_1 + 0x108),param_5);
      if (lVar3 != -1) {
        if ((longlong)local_30 < (longlong)local_38) {
          local_40 = local_30;
        }
        else {
          local_40 = local_38;
        }
        local_30 = local_40;
      }
      if ((longlong)local_30 < 0) break;
      if ((param_6 == -1) ||
         ((longlong)(((longlong)param_3 - local_28) + (longlong)param_6) <= (longlong)local_30)) {
        if ((longlong)((longlong)param_3 - local_28) < (longlong)local_30) {
          local_48 = (longlong)param_3 - local_28;
        }
        else {
          local_48 = local_30;
        }
        if (0 < (longlong)local_48) {
          if (param_7 == (longlong *)0x0) {
            if ((longlong)((longlong)param_3 - local_28) < (longlong)local_30) {
              local_58 = (longlong)param_3 - local_28;
            }
            else {
              local_58 = local_30;
            }
            iVar2 = (**(code **)(*(longlong *)*param_4 + 0x20))
                              ((longlong *)*param_4,param_2 + local_28,local_58 & 0xffffffff);
            local_28 = local_28 + (longlong)iVar2;
          }
          else {
            if ((longlong)((longlong)param_3 - local_28) < (longlong)local_30) {
              local_50 = (longlong)param_3 - local_28;
            }
            else {
              local_50 = local_30;
            }
            iVar2 = (**(code **)(*param_7 + 0x20))(param_7,param_2 + local_28,local_50 & 0xffffffff)
            ;
            local_28 = local_28 + (longlong)iVar2;
          }
        }
      }
      if ((longlong)local_28 < (longlong)param_3) {
        if (param_7 != (longlong *)0x0) {
          FUN_004b8ba0(*param_4,param_7,0);
          FUN_004b6e40(param_7,0);
        }
        cVar1 = FUN_004113d0(*param_4,&PTR_FUN_0047c498);
        if ((cVar1 != '\0') && (*(char *)(param_1 + 0x103) == '\x01')) {
          thunk_FUN_041ad0c1(*(undefined8 *)(*param_4 + 8));
        }
        FUN_015c1bf0(param_5,*(int *)(param_5 + 0xc) + 1);
        FUN_015d9f40(param_1,param_5);
        *param_4 = *(longlong *)(param_1 + 0x250);
      }
    }
  }
  return local_28 & 0xffffffff;
}

