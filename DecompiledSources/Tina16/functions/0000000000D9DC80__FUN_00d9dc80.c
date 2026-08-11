/* Ghidra address: 00d9dc80 */
/* Ghidra symbol: FUN_00d9dc80 */


ulonglong FUN_00d9dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      byte param_5,undefined8 param_6,char param_7,undefined8 *param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_R13;
  ulonglong uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  FUN_00785a80(&local_38,0,0,0,0);
  *param_8 = local_38;
  param_8[1] = uStack_30;
  uVar1 = (ulonglong)param_5;
  if (uVar1 < 0x18) {
    if (uVar1 < 0x13) {
      if (uVar1 == 0x12) {
        if (param_7 != '\0') {
          uVar3 = 0;
        }
        goto LAB_00d9e0e7;
      }
      if (uVar1 - 10 < 2) {
        if (param_7 == '\0') {
          FUN_00785a80(&local_38,1,9,1,0xf);
          *param_8 = local_38;
          param_8[1] = uStack_30;
        }
        else {
          uVar3 = 0;
        }
        goto LAB_00d9e0e7;
      }
      if (uVar1 - 0xc < 6) {
        if (param_7 == '\0') {
          lVar2 = FUN_00d8ed60(param_2,L"MenuBar",L"Item");
          FUN_00785a80(&local_38,*(undefined4 *)(lVar2 + 0xe4),*(undefined4 *)(lVar2 + 0xe8),
                       *(undefined4 *)(lVar2 + 0xf0),*(undefined4 *)(lVar2 + 0xec));
          *param_8 = local_38;
          param_8[1] = uStack_30;
        }
        else if (param_7 == '\x01') {
          FUN_00785a80(&local_38,7,3,7,3);
          *param_8 = local_38;
          param_8[1] = uStack_30;
        }
        else {
          uVar3 = 0;
        }
        goto LAB_00d9e0e7;
      }
    }
    else {
      if (uVar1 == 0x13) {
        if (param_7 == '\0') {
          FUN_00785a80(&local_38,1,1,1,1);
          *param_8 = local_38;
          param_8[1] = uStack_30;
        }
        else {
          uVar3 = 0;
        }
        goto LAB_00d9e0e7;
      }
      if (uVar1 - 0x14 < 4) {
        if (param_7 == '\x01') {
          FUN_00785a80(&local_38,3,3,3,3);
          *param_8 = local_38;
          param_8[1] = uStack_30;
        }
        else {
          uVar3 = 0;
        }
        goto LAB_00d9e0e7;
      }
    }
  }
  else if (uVar1 < 0x1c) {
    if (uVar1 - 0x18 < 3) {
      if (param_7 == '\0') {
        FUN_00785a80(&local_38,0,0,0,6);
        *param_8 = local_38;
        param_8[1] = uStack_30;
      }
      else if (param_7 == '\x01') {
        FUN_00785a80(&local_38,3,3,3,3);
        *param_8 = local_38;
        param_8[1] = uStack_30;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9e0e7;
    }
    if (uVar1 - 0x18 == 3) {
      if (param_7 != '\x01') {
        uVar3 = 0;
      }
      goto LAB_00d9e0e7;
    }
  }
  else {
    if (uVar1 - 0x1c < 4) {
      if (param_7 == '\0') {
        lVar2 = FUN_00d8ed60(param_2,L"PopupMenu",L"Item");
        FUN_00785a80(&local_38,*(undefined4 *)(lVar2 + 0xe4),*(undefined4 *)(lVar2 + 0xe8),
                     *(undefined4 *)(lVar2 + 0xf0),*(undefined4 *)(lVar2 + 0xec));
        *param_8 = local_38;
        param_8[1] = uStack_30;
      }
      else if (param_7 == '\x01') {
        FUN_00785a80(&local_38,0,1,0,1);
        *param_8 = local_38;
        param_8[1] = uStack_30;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9e0e7;
    }
    if (uVar1 == 0x20) {
      if (param_7 == '\0') {
        FUN_00785a80(&local_38,0,3,0,1);
        *param_8 = local_38;
        param_8[1] = uStack_30;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9e0e7;
    }
    if (uVar1 - 0x21 < 2) {
      if (param_7 == '\x01') {
        FUN_00785a80(&local_38,2,3,7,3);
        *param_8 = local_38;
        param_8[1] = uStack_30;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9e0e7;
    }
  }
  uVar3 = 0;
LAB_00d9e0e7:
  return uVar3 & 0xffffffff;
}

