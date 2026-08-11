/* Ghidra address: 00d479b0 */
/* Ghidra symbol: FUN_00d479b0 */


undefined8 FUN_00d479b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 local_24e [510];
  undefined4 local_50 [4];
  undefined1 *local_40;
  undefined4 local_38;
  
  FUN_0040d200(local_50,0x28,0);
  local_50[0] = 1;
  local_40 = local_24e;
  local_38 = 0x1fe;
  lVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x133c,(longlong)param_3,local_50);
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004167d0(param_2,local_40);
  }
  return param_2;
}

