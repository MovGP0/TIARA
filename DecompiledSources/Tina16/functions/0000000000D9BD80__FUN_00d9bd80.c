/* Ghidra address: 00d9bd80 */
/* Ghidra symbol: FUN_00d9bd80 */


ulonglong FUN_00d9bd80(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4,
                      char param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_4 == '\x02') {
    if (param_5 == '\x02') {
      lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),4);
      *param_6 = *(undefined4 *)(lVar3 + 0x28);
    }
    else {
      uVar2 = FUN_00784750();
      uVar4 = (ulonglong)uVar2;
    }
  }
  else if (param_4 == '\x03') {
    if (param_5 == '\x02') {
      lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),7);
      *param_6 = *(undefined4 *)(lVar3 + 0x28);
    }
    else if (param_5 == '\x0e') {
      lVar3 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),7);
      uVar1 = FUN_00635930(*(undefined4 *)(lVar3 + 0x28),0xffffffce);
      *param_6 = uVar1;
    }
    else {
      uVar2 = FUN_00784750();
      uVar4 = (ulonglong)uVar2;
    }
  }
  else {
    uVar2 = FUN_00784750();
    uVar4 = (ulonglong)uVar2;
  }
  return uVar4 & 0xffffffff;
}

