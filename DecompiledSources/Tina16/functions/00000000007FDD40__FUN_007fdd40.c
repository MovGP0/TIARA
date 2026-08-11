/* Ghidra address: 007fdd40 */
/* Ghidra symbol: FUN_007fdd40 */


undefined8 FUN_007fdd40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x468) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_03f32902(*(longlong *)(param_1 + 0x468),4);
  }
  return uVar1;
}

