/* Ghidra address: 00d3ce70 */
/* Ghidra symbol: FUN_00d3ce70 */


ulonglong FUN_00d3ce70(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_var;
  ulonglong uVar3;
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  FUN_00d3cb70(param_1,local_34);
  FUN_00d3c920(param_1,local_44);
  uVar1 = FUN_004230c0(local_44);
  uVar2 = thunk_FUN_03f3ed25(local_24,uVar1,local_28 - local_2c);
  uVar3 = (ulonglong)uVar2;
  FUN_00d3c3b0(param_1);
  if ((int)uVar2 < extraout_var) {
    uVar3 = FUN_00d3c3b0(param_1);
    uVar3 = uVar3 >> 0x20;
  }
  return uVar3;
}

