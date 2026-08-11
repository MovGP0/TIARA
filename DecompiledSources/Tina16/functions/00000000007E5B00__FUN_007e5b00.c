/* Ghidra address: 007e5b00 */
/* Ghidra symbol: FUN_007e5b00 */


undefined8 FUN_007e5b00(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = auStack_58;
  local_28 = FUN_00410e60(&DAT_007e5940,1);
  *(undefined8 *)(local_28 + 8) = param_2;
  *(undefined1 *)(local_28 + 0x10) = param_3;
  local_30 = FUN_007e5a40;
  local_10 = local_28;
  FUN_007dcc20(&local_30,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xd0),
               *(longlong *)(param_1 + 0x80));
  local_18 = *(undefined8 *)(local_10 + 0x18);
  FUN_00410f20(local_10);
  return local_18;
}

