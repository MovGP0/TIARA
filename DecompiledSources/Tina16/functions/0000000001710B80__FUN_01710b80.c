/* Ghidra address: 01710b80 */
/* Ghidra symbol: FUN_01710b80 */


undefined8 FUN_01710b80(undefined8 param_1)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_18 = 0;
  cVar1 = FUN_00440a20(local_res8[0],1);
  if (cVar1 != '\0') {
    local_10 = FUN_00440210(local_res8[0],0x20);
    local_1c = FUN_004406f0(local_10,0,2);
    local_18 = FUN_004095c0((longlong)local_1c);
    FUN_004406f0(local_10,0,0);
    FUN_00440610(local_10,local_18,local_1c);
    thunk_FUN_041d2921(local_10);
  }
  FUN_00414480(local_res8);
  return local_18;
}

