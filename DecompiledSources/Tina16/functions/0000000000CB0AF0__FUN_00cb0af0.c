/* Ghidra address: 00cb0af0 */
/* Ghidra symbol: FUN_00cb0af0 */


void FUN_00cb0af0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  code *local_18;
  longlong local_10;
  
  local_20 = 0;
  FUN_00c8d5d0(param_1);
  *(undefined4 *)(param_1 + 0x134) = 0x8000;
  *(undefined4 *)(param_1 + 0x138) = 0x8000;
  *(undefined4 *)(param_1 + 0x120) = 0x4000;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  local_18 = FUN_00cac640;
  local_10 = param_1;
  uVar1 = FUN_00c8ad20(&DAT_00c89a18,1,&local_18);
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  FUN_008745f0(&local_20);
  FUN_0041b840(param_1 + 0x150,local_20);
  FUN_0041b800(&local_20);
  return;
}

