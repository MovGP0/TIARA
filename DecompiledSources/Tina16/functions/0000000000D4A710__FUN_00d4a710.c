/* Ghidra address: 00d4a710 */
/* Ghidra symbol: FUN_00d4a710 */


undefined8 FUN_00d4a710(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 local_2a6 [510];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_90;
  undefined4 local_88;
  
  FUN_0040d200(&local_a8,0x80,0);
  local_a8 = FUN_00d4a6d0();
  local_a4 = 4;
  local_90 = local_2a6;
  local_88 = 0xff;
  iVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x41c,(longlong)param_3,&local_a8);
  if (iVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004167d0(param_2,local_90);
  }
  return param_2;
}

