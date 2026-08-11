/* Ghidra address: 015fe5d0 */
/* Ghidra symbol: FUN_015fe5d0 */


undefined8 FUN_015fe5d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_00414480(param_1);
  local_10 = FUN_0154ba10(&DAT_01546b78,1);
  FUN_015fe500(param_2,local_10);
  if (param_3 == 0) {
    FUN_00416880(param_1,*(undefined8 *)(local_10 + 0x10));
  }
  else if (param_3 == 1) {
    FUN_00416880(param_1,*(undefined8 *)(local_10 + 0x18));
  }
  FUN_00410f20(local_10);
  return param_1;
}

