/* Ghidra address: 00d9b5f0 */
/* Ghidra symbol: FUN_00d9b5f0 */


ulonglong FUN_00d9b5f0(undefined8 param_1,longlong param_2,undefined8 param_3,byte param_4,
                      byte param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_4 < 7) {
    if (param_4 == 6) {
      if (param_5 == 0) {
        uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000014);
        *param_6 = uVar1;
      }
      else if (param_5 == 2) {
        lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x43);
        *param_6 = *(undefined4 *)(lVar3 + 0x28);
      }
      else {
        uVar2 = FUN_007849c0();
        uVar4 = (ulonglong)uVar2;
      }
      goto LAB_00d9bad8;
    }
    if (param_4 == 2) {
      if (param_5 == 1) {
        uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),1);
        *param_6 = uVar1;
      }
      else {
        uVar2 = FUN_007849c0();
        uVar4 = (ulonglong)uVar2;
      }
      goto LAB_00d9bad8;
    }
    if (param_4 == 3) {
      if (param_5 < 6) {
        if (param_5 == 5) {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x19);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
        if (param_5 == 0) {
          uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000014);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
        if (param_5 == 2) {
          lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x45);
          *param_6 = *(undefined4 *)(lVar3 + 0x28);
          goto LAB_00d9bad8;
        }
      }
      else {
        if (param_5 == 9) {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x18);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
        if (param_5 == 10) {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x19);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
      }
      uVar2 = FUN_007849c0();
      uVar4 = (ulonglong)uVar2;
      goto LAB_00d9bad8;
    }
    if (param_4 == 4) {
      if (param_5 < 6) {
        if (param_5 == 5) {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
        if (param_5 == 0) {
          uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000014);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
        if (param_5 == 2) {
          lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x46);
          *param_6 = *(undefined4 *)(lVar3 + 0x28);
          goto LAB_00d9bad8;
        }
      }
      else {
        if (param_5 == 9) {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
        if (param_5 == 10) {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
          *param_6 = uVar1;
          goto LAB_00d9bad8;
        }
      }
      uVar2 = FUN_007849c0();
      uVar4 = (ulonglong)uVar2;
      goto LAB_00d9bad8;
    }
    if (param_4 == 5) {
      if (param_5 == 0) {
        uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000014);
        *param_6 = uVar1;
      }
      else if (param_5 == 2) {
        lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x42);
        *param_6 = *(undefined4 *)(lVar3 + 0x28);
      }
      else {
        uVar2 = FUN_007849c0();
        uVar4 = (ulonglong)uVar2;
      }
      goto LAB_00d9bad8;
    }
  }
  else {
    if (param_4 == 7) {
      if (param_5 == 0) {
        uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000014);
        *param_6 = uVar1;
      }
      else if (param_5 == 2) {
        lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x44);
        *param_6 = *(undefined4 *)(lVar3 + 0x28);
      }
      else {
        uVar2 = FUN_007849c0();
        uVar4 = (ulonglong)uVar2;
      }
      goto LAB_00d9bad8;
    }
    if (param_4 == 10) {
      if (param_5 == 1) {
        lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x42);
        *param_6 = *(undefined4 *)(lVar3 + 0x28);
      }
      else {
        uVar2 = FUN_007849c0();
        uVar4 = (ulonglong)uVar2;
      }
      goto LAB_00d9bad8;
    }
    if (param_4 == 0xb) {
      if (param_5 == 1) {
        lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x42);
        *param_6 = *(undefined4 *)(lVar3 + 0x28);
      }
      else {
        uVar2 = FUN_007849c0();
        uVar4 = (ulonglong)uVar2;
      }
      goto LAB_00d9bad8;
    }
  }
  uVar2 = FUN_007849c0();
  uVar4 = (ulonglong)uVar2;
LAB_00d9bad8:
  return uVar4 & 0xffffffff;
}

