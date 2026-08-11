/* Ghidra address: 006db2b0 */
/* Ghidra symbol: FUN_006db2b0 */


void FUN_006db2b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_20 = *(longlong *)(param_2 + 0x10);
  local_24 = thunk_FUN_03b57162(*(undefined8 *)(local_20 + 0x20));
  FUN_005fdf10(*(undefined8 *)(param_1 + 0x4a8));
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(local_20 + 0x20));
  FUN_005ff880(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0xb8));
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x4a8) + 0x80),0xff00000f);
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x4a8) + 0x80),0);
  uVar1 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(local_20 + 8));
  pcVar2 = (code *)FUN_00411550(param_1,0xffac);
  (*pcVar2)(param_1,uVar1,local_20 + 0x28,(*(uint *)(local_20 + 0x10) & 1) != 0);
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4a8),0);
  FUN_005fe090(*(undefined8 *)(param_1 + 0x4a8));
  thunk_FUN_0402759f(*(undefined8 *)(local_20 + 0x20),local_24);
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

