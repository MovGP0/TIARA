/* Ghidra address: 0152fdf0 */
/* Ghidra symbol: FUN_0152fdf0 */


void FUN_0152fdf0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_78;
  uVar1 = FUN_0065b870(param_1);
  local_10 = FUN_007f94c0(uVar1);
  local_40 = FUN_01530b80(param_1);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = param_1 + 0x1c49;
  FUN_00ee3b90(1,*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),
               *(undefined8 *)(param_1 + 0x1c28),param_2);
  FUN_007f95c0(local_10);
  return;
}

