/* Ghidra address: 007d5550 */
/* Ghidra symbol: FUN_007d5550 */


void FUN_007d5550(longlong param_1,undefined8 param_2)

{
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_20 = *(undefined4 *)(param_1 + 0x94);
  local_1c[0] = *(undefined4 *)(param_1 + 0x90);
  thunk_FUN_0400423a(param_2,&local_20,local_1c);
  *(undefined4 *)(param_1 + 0x94) = local_20;
  *(undefined4 *)(param_1 + 0x90) = local_1c[0];
  FUN_007d53e0(param_1);
  return;
}

