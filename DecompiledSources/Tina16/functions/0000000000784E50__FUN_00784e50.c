/* Ghidra address: 00784e50 */
/* Ghidra symbol: FUN_00784e50 */


ulonglong FUN_00784e50(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                      char param_5,longlong param_6,undefined8 param_7,undefined4 param_8,
                      undefined8 *param_9,undefined4 param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar6;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_48 = *param_9;
  uStack_40 = param_9[1];
  uStack_38 = param_9[2];
  uStack_30 = param_9[3];
  uVar5 = CONCAT71((int7)((ulonglong)(param_9 + 4) >> 8),1);
  if (param_5 == '\x03') {
    uVar4 = 0;
    if (param_6 != 0) {
      uVar4 = *(undefined4 *)(param_6 + -4);
    }
    uVar1 = FUN_0060f550(param_8);
    uVar1 = FUN_0060f500(uVar1);
    uVar3 = FUN_00416740(param_6);
    thunk_FUN_041a24be(param_3,uVar3,uVar4,param_7,CONCAT44(uVar6,uVar1));
  }
  else if (param_5 == '\x04') {
    (**(code **)(*param_2 + 0x120))(param_2,local_58,0x18);
    uVar2 = FUN_00779040(param_2,param_3,local_58,param_6,param_7,param_8,&local_48,param_10);
    uVar5 = (ulonglong)uVar2;
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}

