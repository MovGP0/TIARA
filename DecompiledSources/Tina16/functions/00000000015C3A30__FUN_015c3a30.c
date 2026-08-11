/* Ghidra address: 015c3a30 */
/* Ghidra symbol: FUN_015c3a30 */


undefined1 FUN_015c3a30(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  char local_1d [4];
  undefined1 local_19;
  
  *param_3 = -1;
  local_19 = 0;
  FUN_004144d0(param_1 + 0x30);
  FUN_0040d200(param_2,0x16,0);
  local_30 = (ulonglong)param_4;
  FUN_00409a70(&local_30,local_1d,4);
  local_50 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
  local_58 = local_50;
  if (0x10040 < (longlong)local_50) {
    local_58 = 0x10040;
  }
  local_28 = local_58;
  lVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
  if ((longlong)local_28 <= lVar4) {
    local_48 = FUN_00409570(local_28);
    cVar3 = FUN_004113d0(*(undefined8 *)(param_1 + 8),&PTR_FUN_0047d288);
    if (cVar3 == '\0') {
      local_60 = *(longlong **)(param_1 + 8);
      (**(code **)(*local_60 + 0x50))(local_60,-local_28,2);
    }
    else {
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
      FUN_004b6dc0(*(undefined8 *)(param_1 + 8),lVar4 - local_28);
    }
    FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_48,local_28);
    local_40 = -1;
    uVar2 = local_28;
    do {
      do {
        do {
          uVar1 = uVar2;
          local_30 = uVar1 - 1;
          if ((longlong)local_30 < 0) goto code_r0x015c3c9e;
          uVar2 = local_30;
        } while (*(char *)(local_48 + local_30) != local_1d[3]);
        local_38 = 2;
        while (((-1 < local_38 && (-1 < (longlong)((uVar1 - 4) + local_38))) &&
               (*(char *)(local_48 + -3 + local_30 + local_38) == local_1d[local_38]))) {
          local_38 = local_38 + -1;
          if (local_38 < 0) {
            local_40 = uVar1 - 4;
          }
        }
        uVar2 = local_30;
      } while (-1 < local_38);
      lVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
      cVar3 = FUN_015c3810(auStack_88,(lVar4 - local_28) + local_40);
      uVar2 = local_30;
    } while (cVar3 == '\0');
    lVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
    *param_3 = (lVar4 - local_28) + local_40;
code_r0x015c3c9e:
    if (((local_40 < 0) || (*param_3 < 0)) ||
       (lVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8)),
       lVar4 - local_40 < 0x16)) {
      FUN_004095f0(local_48);
    }
    else {
      FUN_00409a70(local_48 + local_40,param_2,0x16);
      FUN_004095f0(local_48);
      if (*(short *)(param_2 + 0x14) != 0) {
        FUN_004b6dc0(*(undefined8 *)(param_1 + 8),*param_3 + 0x16);
        FUN_00415d10(param_1 + 0x30,*(undefined2 *)(param_2 + 0x14),0);
        uVar5 = FUN_00415ab0(*(undefined8 *)(param_1 + 0x30));
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                  (*(longlong **)(param_1 + 8),uVar5,*(undefined2 *)(param_2 + 0x14));
      }
      local_19 = 1;
    }
  }
  return local_19;
}

