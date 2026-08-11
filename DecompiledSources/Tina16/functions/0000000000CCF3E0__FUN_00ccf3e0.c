/* Ghidra address: 00ccf3e0 */
/* Ghidra symbol: FUN_00ccf3e0 */


undefined8 FUN_00ccf3e0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_00414480(param_2);
  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x1b8) != 0) {
    local_10 = FUN_00cc4a90(&LAB_00cc4158,1,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1b8));
    FUN_00414ad0(param_2,*(undefined8 *)(local_10 + 0x30));
    FUN_00410f20(local_10);
  }
  return param_2;
}

