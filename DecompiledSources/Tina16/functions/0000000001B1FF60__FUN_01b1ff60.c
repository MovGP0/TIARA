/* Ghidra address: 01b1ff60 */
/* Ghidra symbol: FUN_01b1ff60 */


undefined8 FUN_01b1ff60(undefined8 param_1)

{
  undefined1 local_3c [32];
  undefined4 local_1c [3];
  
  local_1c[0] = 0x20;
  thunk_FUN_04179f25(local_3c,local_1c);
  FUN_00416830(param_1,local_3c,0x10);
  return param_1;
}

