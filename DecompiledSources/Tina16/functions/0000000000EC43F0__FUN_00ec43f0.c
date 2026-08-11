/* Ghidra address: 00ec43f0 */
/* Ghidra symbol: FUN_00ec43f0 */


undefined1 FUN_00ec43f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  if (DAT_01ef6a40 == '\0') {
    FUN_00ec0240();
  }
  plVar1 = (longlong *)FUN_00eae5f0(L"tina",local_res10);
  if (plVar1 == (longlong *)0x0) {
    local_21 = 0;
  }
  else {
    FUN_00ea9ca0(local_20,local_res8);
    local_21 = (**(code **)(*plVar1 + 0xd0))(plVar1,L"DigitalICs",local_20[0]);
  }
  FUN_00414480(local_20);
  FUN_00414560(&local_res8,2);
  return local_21;
}

