/* Ghidra address: 004c6a30 */
/* Ghidra symbol: FUN_004c6a30 */


ulonglong FUN_004c6a30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4
                      ,undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_70 = (code *)*param_3;
  local_68 = param_3[1];
  local_58 = *param_5;
  uStack_50 = param_5[1];
  local_38 = 0;
  local_48 = 0;
  local_60 = 0;
  local_40 = 0;
  if (local_70 != (code *)0x0) {
    local_88 = &local_40;
    (*local_70)(local_68,&local_38,&local_48,&local_60);
  }
  local_29 = FUN_004c5a40(local_38,local_48,local_40);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2[1] == 0) goto LAB_004c6c3d;
  if (param_2[2] == 0) {
    if (**(char **)*param_2 != '\a') goto LAB_004c6c3d;
    uVar3 = FUN_0058ada0(param_1,param_2);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00486f38);
    if ((cVar1 == '\0') ||
       (lVar4 = FUN_0058ada0(param_1,param_2), (*(byte *)(lVar4 + 0x58) & 4) == 0))
    goto LAB_004c6c3d;
  }
  uVar5 = (ulonglong)**(byte **)*param_2;
  if (uVar5 < 10) {
    if (uVar5 != 9) {
      if (6 < uVar5) {
        if (uVar5 == 7) {
          uVar2 = FUN_004c6480(auStack_a8);
          uVar6 = (ulonglong)uVar2;
        }
        else if (uVar5 == 8) {
          uVar2 = FUN_004c6810(auStack_a8);
          uVar6 = (ulonglong)uVar2;
        }
        goto LAB_004c6c3d;
      }
      if ((uVar5 != 6) && (2 < uVar5 - 1)) {
        if (uVar5 == 4) {
          uVar2 = FUN_004c5fa0(auStack_a8);
          uVar6 = (ulonglong)uVar2;
          goto LAB_004c6c3d;
        }
        if (uVar5 != 5) goto LAB_004c6c3d;
        goto LAB_004c6bf7;
      }
    }
    uVar2 = FUN_004c5e60(auStack_a8);
    uVar6 = (ulonglong)uVar2;
  }
  else {
    if (uVar5 < 0x10) {
      if (uVar5 == 0xf) {
        uVar2 = FUN_004c6660(auStack_a8);
        uVar6 = (ulonglong)uVar2;
        goto LAB_004c6c3d;
      }
      if (1 < uVar5 - 10) {
        if (uVar5 - 10 == 2) {
          uVar2 = FUN_004c68e0(auStack_a8);
          uVar6 = (ulonglong)uVar2;
        }
        goto LAB_004c6c3d;
      }
    }
    else {
      if (uVar5 == 0x10) {
        uVar2 = FUN_004c6100(auStack_a8);
        uVar6 = (ulonglong)uVar2;
        goto LAB_004c6c3d;
      }
      if (uVar5 != 0x12) goto LAB_004c6c3d;
    }
LAB_004c6bf7:
    uVar2 = FUN_004c6240(auStack_a8);
    uVar6 = (ulonglong)uVar2;
  }
LAB_004c6c3d:
  return uVar6 & 0xffffffff;
}

