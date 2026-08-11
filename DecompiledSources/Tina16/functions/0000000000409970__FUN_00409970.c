/* Ghidra address: 00409970 */
/* Ghidra symbol: FUN_00409970 */


void FUN_00409970(byte param_1,undefined8 param_2)

{
  undefined1 local_434 [522];
  undefined1 local_22a [522];
  short local_20 [4];
  
  if (param_1 != 0) {
    local_20[0] = param_1 + 0x40;
    local_20[1] = 0x3a;
    local_20[2] = 0;
    thunk_FUN_04148c14(0x105,local_434);
    thunk_FUN_04132178(local_20);
  }
  thunk_FUN_04148c14(0x105,local_22a);
  if (param_1 != 0) {
    thunk_FUN_04132178(local_434);
  }
  FUN_00416830(param_2,local_22a,0x105);
  return;
}

