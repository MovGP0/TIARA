/* Ghidra address: 00d9d9f0 */
/* Ghidra symbol: FUN_00d9d9f0 */


ulonglong FUN_00d9d9f0(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                      char param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  lVar2 = *(longlong *)(param_2 + 0x180);
  param_4 = param_4 & 0xff;
  if (param_4 < 0xf) {
    if (param_4 - 10 < 2) {
      if (param_5 == '\x01') {
        uVar1 = FUN_00d7e9c0(*(undefined8 *)(lVar2 + 0x28),0xff000002);
        *param_6 = uVar1;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
    if (param_4 == 0xc) {
      if (param_5 == '\x02') {
        lVar2 = FUN_00d7efc0(*(undefined8 *)(lVar2 + 0x10),0x22);
        *param_6 = *(undefined4 *)(lVar2 + 0x28);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
    if (param_4 == 0xd) {
      if (param_5 == '\x02') {
        lVar2 = FUN_00d7efc0(*(undefined8 *)(lVar2 + 0x10),0x24);
        *param_6 = *(undefined4 *)(lVar2 + 0x28);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
    if (param_4 == 0xe) {
      if (param_5 == '\x02') {
        lVar2 = FUN_00d7efc0(*(undefined8 *)(lVar2 + 0x10),0x23);
        *param_6 = *(undefined4 *)(lVar2 + 0x28);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
  }
  else if (param_4 < 0x1d) {
    if (param_4 == 0x1c) {
      if (param_5 == '\x02') {
        lVar2 = FUN_00d7efc0(*(undefined8 *)(lVar2 + 0x10),0x3e);
        *param_6 = *(undefined4 *)(lVar2 + 0x28);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
    if (param_4 - 0xf < 3) {
      if (param_5 == '\x02') {
        lVar2 = FUN_00d7efc0(*(undefined8 *)(lVar2 + 0x10),0x25);
        *param_6 = *(undefined4 *)(lVar2 + 0x28);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
    if (param_4 == 0x12) {
      if (param_5 == '\0') {
        uVar1 = FUN_00d7e640(*(undefined8 *)(lVar2 + 8),0);
        *param_6 = uVar1;
      }
      else if (param_5 == '\x01') {
        uVar1 = FUN_00d7e640(*(undefined8 *)(lVar2 + 8),0x16);
        *param_6 = uVar1;
      }
      else if (param_5 == '\x04') {
        uVar1 = FUN_00d7e640(*(undefined8 *)(lVar2 + 8),0x16);
        *param_6 = uVar1;
      }
      else if (param_5 == '\x06') {
        uVar1 = FUN_00d7e640(*(undefined8 *)(lVar2 + 8),0);
        *param_6 = uVar1;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
  }
  else {
    if (param_4 == 0x1d) {
      if (param_5 == '\x02') {
        lVar2 = FUN_00d7efc0(*(undefined8 *)(lVar2 + 0x10),0x3f);
        *param_6 = *(undefined4 *)(lVar2 + 0x28);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
    if (param_4 - 0x1e < 2) {
      if (param_5 == '\x02') {
        lVar2 = FUN_00d7efc0(*(undefined8 *)(lVar2 + 0x10),0x41);
        *param_6 = *(undefined4 *)(lVar2 + 0x28);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_00d9dc6d;
    }
  }
  uVar3 = 0;
LAB_00d9dc6d:
  return uVar3 & 0xffffffff;
}

