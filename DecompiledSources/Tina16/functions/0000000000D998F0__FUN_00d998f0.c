/* Ghidra address: 00d998f0 */
/* Ghidra symbol: FUN_00d998f0 */


ulonglong FUN_00d998f0(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4,
                      byte param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_4 == '\x02') {
    if (param_5 == 1) {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x16);
      *param_6 = uVar1;
    }
    else {
      uVar2 = FUN_007857e0();
      uVar4 = (ulonglong)uVar2;
    }
    goto LAB_00d99b81;
  }
  if (param_4 != '\x03') {
    if (param_4 != '\x04') {
      uVar2 = FUN_007857e0();
      uVar4 = (ulonglong)uVar2;
      goto LAB_00d99b81;
    }
    if (param_5 < 5) {
      if (param_5 == 4) {
        uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        uVar1 = FUN_00635840(uVar1,0x13);
        *param_6 = uVar1;
        goto LAB_00d99b81;
      }
      if (param_5 == 1) {
        uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        *param_6 = uVar1;
        goto LAB_00d99b81;
      }
      if (param_5 == 2) {
        lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x36);
        *param_6 = *(undefined4 *)(lVar3 + 0x28);
        goto LAB_00d99b81;
      }
    }
    else {
      if (param_5 == 5) {
        uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        *param_6 = uVar1;
        goto LAB_00d99b81;
      }
      if (param_5 == 6) {
        uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
        *param_6 = uVar1;
        goto LAB_00d99b81;
      }
    }
    uVar2 = FUN_007857e0();
    uVar4 = (ulonglong)uVar2;
    goto LAB_00d99b81;
  }
  if (param_5 < 6) {
    if (param_5 == 5) {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
      *param_6 = uVar1;
      goto LAB_00d99b81;
    }
    if (param_5 == 1) {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
      *param_6 = uVar1;
      goto LAB_00d99b81;
    }
    if (param_5 == 2) {
      lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x33);
      *param_6 = *(undefined4 *)(lVar3 + 0x28);
      goto LAB_00d99b81;
    }
  }
  else {
    if (param_5 == 6) {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
      *param_6 = uVar1;
      goto LAB_00d99b81;
    }
    if (param_5 == 7) {
      uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
      *param_6 = uVar1;
      goto LAB_00d99b81;
    }
  }
  uVar2 = FUN_007857e0();
  uVar4 = (ulonglong)uVar2;
LAB_00d99b81:
  return uVar4 & 0xffffffff;
}

