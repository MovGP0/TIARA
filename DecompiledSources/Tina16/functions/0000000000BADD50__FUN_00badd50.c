/* Ghidra address: 00badd50 */
/* Ghidra symbol: FUN_00badd50 */


undefined8 FUN_00badd50(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_0041b800(&local_10);
  local_18 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(local_18 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_0041b840(&local_10,*(undefined8 *)(*(longlong *)(local_18 + 8) + (longlong)(int)param_3 * 8));
  FUN_0041b840(param_2,local_10);
  FUN_0041b800(&local_10);
  FUN_0041b800(&local_10);
  return param_2;
}

