/* Ghidra address: 00d9bf40 */
/* Ghidra symbol: FUN_00d9bf40 */


ulonglong FUN_00d9bf40(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4,
                      char param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_4 == '\x02') {
    if (param_5 == '\x02') {
      uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000008);
      *param_6 = uVar1;
    }
    else if (param_5 == '\t') {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xf);
      *param_6 = uVar1;
    }
    else if (param_5 == '\n') {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x1d);
      *param_6 = uVar1;
    }
    else {
      uVar2 = FUN_007859b0();
      uVar3 = (ulonglong)uVar2;
    }
  }
  else if (param_4 == '\x03') {
    if (param_5 == '\0') {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0);
      *param_6 = uVar1;
    }
    else if (param_5 == '\x02') {
      uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000008);
      *param_6 = uVar1;
    }
    else if (param_5 == '\t') {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xf);
      *param_6 = uVar1;
    }
    else if (param_5 == '\n') {
      uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0x1d);
      *param_6 = uVar1;
    }
    else {
      uVar2 = FUN_007859b0();
      uVar3 = (ulonglong)uVar2;
    }
  }
  else {
    uVar2 = FUN_007859b0();
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3 & 0xffffffff;
}

