/* Ghidra address: 00bb1d00 */
/* Ghidra symbol: FUN_00bb1d00 */


undefined4 FUN_00bb1d00(longlong *param_1)

{
  undefined4 uVar1;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00414480(local_20);
  return uVar1;
}

