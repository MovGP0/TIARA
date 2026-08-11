/* Ghidra address: 00d9ce70 */
/* Ghidra symbol: FUN_00d9ce70 */


ulonglong FUN_00d9ce70(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                      char param_5,undefined4 *param_6)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  lVar1 = *(longlong *)(param_2 + 0x180);
  if (param_5 != '\x02') {
    uVar2 = 0;
    goto LAB_00d9cf7c;
  }
  param_4 = param_4 & 0xff;
  if (param_4 < 0xb) {
    if (param_4 != 10) {
      if (4 < param_4) {
        if (param_4 == 5) {
LAB_00d9cf4c:
          lVar1 = FUN_00d7efc0(*(undefined8 *)(lVar1 + 0x10),0x29);
          *param_6 = *(undefined4 *)(lVar1 + 0x28);
          goto LAB_00d9cf7c;
        }
        param_4 = param_4 - 6;
joined_r0x00d9cf03:
        if (1 < param_4) {
LAB_00d9cf63:
          lVar1 = FUN_00d7efc0(*(undefined8 *)(lVar1 + 0x10),0x26);
          *param_6 = *(undefined4 *)(lVar1 + 0x28);
          goto LAB_00d9cf7c;
        }
        goto LAB_00d9cf35;
      }
      if (param_4 == 4) goto LAB_00d9cf35;
      if (param_4 != 2) {
        if (param_4 == 3) goto LAB_00d9cf1e;
        goto LAB_00d9cf63;
      }
    }
    lVar1 = FUN_00d7efc0(*(undefined8 *)(lVar1 + 0x10),0x26);
    *param_6 = *(undefined4 *)(lVar1 + 0x28);
  }
  else {
    if (param_4 == 0xb) {
LAB_00d9cf1e:
      lVar1 = FUN_00d7efc0(*(undefined8 *)(lVar1 + 0x10),0x28);
      *param_6 = *(undefined4 *)(lVar1 + 0x28);
      goto LAB_00d9cf7c;
    }
    if (param_4 != 0xc) {
      if (param_4 == 0xd) goto LAB_00d9cf4c;
      param_4 = param_4 - 0xe;
      goto joined_r0x00d9cf03;
    }
LAB_00d9cf35:
    lVar1 = FUN_00d7efc0(*(undefined8 *)(lVar1 + 0x10),0x27);
    *param_6 = *(undefined4 *)(lVar1 + 0x28);
  }
LAB_00d9cf7c:
  return uVar2 & 0xffffffff;
}

