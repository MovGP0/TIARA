/* Ghidra address: 00d9b000 */
/* Ghidra symbol: FUN_00d9b000 */


ulonglong FUN_00d9b000(undefined8 param_1,longlong param_2,undefined8 param_3,byte param_4,
                      byte param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  uVar3 = (ulonglong)param_4;
  if (uVar3 < 6) {
    if (uVar3 == 5) {
LAB_00d9b1fb:
      if (param_5 == 0) {
        uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000006);
        *param_6 = uVar1;
      }
      else if (param_5 == 1) {
        uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x13);
        uVar1 = FUN_00635840(uVar1,0x32);
        *param_6 = uVar1;
      }
      else if (param_5 == 2) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),8);
        *param_6 = *(undefined4 *)(lVar4 + 0x28);
      }
      else {
        uVar2 = FUN_00785280();
        uVar5 = (ulonglong)uVar2;
      }
      goto LAB_00d9b3b7;
    }
    if (uVar3 == 2) {
      if (param_5 == 1) {
        uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x13);
        *param_6 = uVar1;
      }
      else if (param_5 == 2) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),8);
        *param_6 = *(undefined4 *)(lVar4 + 0x28);
      }
      else {
        uVar2 = FUN_00785280();
        uVar5 = (ulonglong)uVar2;
      }
      goto LAB_00d9b3b7;
    }
    if (uVar3 == 3) {
      if (param_5 == 4) {
        uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000014);
        *param_6 = uVar1;
      }
      else if (param_5 == 5) {
        uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
        *param_6 = uVar1;
      }
      else {
        uVar2 = FUN_00785280();
        uVar5 = (ulonglong)uVar2;
      }
      goto LAB_00d9b3b7;
    }
    if (uVar3 != 4) goto LAB_00d9b39c;
  }
  else if (uVar3 != 6) {
    if (uVar3 != 7) {
      if (uVar3 - 8 < 2) {
        if (param_5 < 6) {
          if (param_5 == 5) {
            uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
            *param_6 = uVar1;
            goto LAB_00d9b3b7;
          }
          if (param_5 == 1) {
            uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x16);
            *param_6 = uVar1;
            goto LAB_00d9b3b7;
          }
          if (param_5 == 4) {
            uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000016);
            *param_6 = uVar1;
            goto LAB_00d9b3b7;
          }
        }
        else {
          if (param_5 == 6) {
            uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000014);
            *param_6 = uVar1;
            goto LAB_00d9b3b7;
          }
          if (param_5 == 7) {
            lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0xe);
            *param_6 = *(undefined4 *)(lVar4 + 0x28);
            goto LAB_00d9b3b7;
          }
        }
        uVar2 = FUN_00785280();
        uVar5 = (ulonglong)uVar2;
        goto LAB_00d9b3b7;
      }
LAB_00d9b39c:
      uVar2 = FUN_00785280();
      uVar5 = (ulonglong)uVar2;
      goto LAB_00d9b3b7;
    }
    goto LAB_00d9b1fb;
  }
  if (param_5 == 0) {
    uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000006);
    *param_6 = uVar1;
  }
  else if (param_5 == 1) {
    uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
    *param_6 = uVar1;
  }
  else if (param_5 == 2) {
    lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),8);
    *param_6 = *(undefined4 *)(lVar4 + 0x28);
  }
  else {
    uVar2 = FUN_00785280();
    uVar5 = (ulonglong)uVar2;
  }
LAB_00d9b3b7:
  return uVar5 & 0xffffffff;
}

