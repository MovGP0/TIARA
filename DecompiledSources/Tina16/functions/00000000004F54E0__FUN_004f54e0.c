/* Ghidra address: 004f54e0 */
/* Ghidra symbol: FUN_004f54e0 */


void FUN_004f54e0(longlong param_1,byte param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00411a80(param_1,param_2);
  FUN_004f57c0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410ef0(param_1,param_2 & 0xfc);
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

