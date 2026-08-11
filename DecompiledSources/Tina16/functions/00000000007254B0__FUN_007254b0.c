/* Ghidra address: 007254b0 */
/* Ghidra symbol: FUN_007254b0 */


void FUN_007254b0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined1 *local_80;
  undefined1 local_78 [92];
  int local_1c;
  
  local_80 = auStack_b8;
  local_98 = local_98 & 0xffffffffffffff00;
  FUN_004701b0(param_2,0x401,0,local_78);
  FUN_00725920(param_1,local_78);
  local_98 = 0;
  local_1c = thunk_FUN_03de0ef4(param_2,0x473,0x147,0);
  if (local_1c != -1) {
    local_98 = 0;
    uVar2 = thunk_FUN_03de0ef4(param_2,0x473,0x150,(longlong)local_1c);
    FUN_005fc860(*(undefined8 *)(param_1 + 0xd0),uVar2);
  }
  pcVar1 = (code *)FUN_00411550(param_1,0xffed);
  (*pcVar1)(param_1,param_2);
  return;
}

