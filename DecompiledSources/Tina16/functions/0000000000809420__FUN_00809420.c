/* Ghidra address: 00809420 */
/* Ghidra symbol: FUN_00809420 */


void FUN_00809420(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_18 [16];
  
  local_20 = auStack_48;
  if (*(short *)(param_1 + 0x128) == 0) {
    FUN_00808d90(param_1);
    thunk_FUN_03e0f7b4(0x30,0,local_18,0);
    FUN_00809380(param_1,param_2,local_18);
    *(uint *)(param_1 + 0x12a) = *(uint *)(param_1 + 0x12a) & 0xffffffef;
    FUN_00808da0(param_1);
  }
  else {
    *(uint *)(param_1 + 0x12a) = *(uint *)(param_1 + 0x12a) | 0x10;
  }
  return;
}

