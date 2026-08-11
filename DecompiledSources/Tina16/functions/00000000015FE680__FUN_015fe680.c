/* Ghidra address: 015fe680 */
/* Ghidra symbol: FUN_015fe680 */


undefined4 FUN_015fe680(undefined8 param_1,int param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_14;
  longlong local_10;
  
  local_20 = auStack_48;
  local_14 = 0;
  local_10 = FUN_0154ba10(&DAT_01546b78,1);
  FUN_015fe500(param_1,local_10);
  if (param_2 == 2) {
    local_14 = *(undefined4 *)(local_10 + 0xc);
  }
  FUN_00410f20(local_10);
  return local_14;
}

