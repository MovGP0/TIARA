/* Ghidra address: 00c4f7a0 */
/* Ghidra symbol: FUN_00c4f7a0 */


undefined8 FUN_00c4f7a0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 local_res18 [8];
  undefined1 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  ulonglong local_18;
  byte local_9;
  
  local_20 = auStack_48;
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_00409a70(local_res18,&local_9,1);
  local_18 = (ulonglong)local_9;
  FUN_005894c0(param_2,&DAT_00c49448,local_18);
  return param_2;
}

