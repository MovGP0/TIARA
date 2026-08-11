/* Ghidra address: 00d3c830 */
/* Ghidra symbol: FUN_00d3c830 */


ulonglong FUN_00d3c830(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_var;
  ulonglong uVar4;
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  FUN_00d3c440(param_1,local_34);
  FUN_00d3c580(param_1,local_44);
  iVar1 = FUN_004230a0(local_44);
  iVar2 = FUN_00d3c3b0(param_1);
  uVar3 = thunk_FUN_03f3ed25(local_24,iVar1 + iVar2 * -2,local_28 - local_2c);
  uVar4 = (ulonglong)uVar3;
  FUN_00d3c3b0(param_1);
  if ((int)uVar3 < extraout_var) {
    uVar4 = FUN_00d3c3b0(param_1);
    uVar4 = uVar4 >> 0x20;
  }
  return uVar4;
}

