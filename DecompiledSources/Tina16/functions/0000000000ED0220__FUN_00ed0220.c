/* Ghidra address: 00ed0220 */
/* Ghidra symbol: FUN_00ed0220 */


undefined1 FUN_00ed0220(byte param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_31;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (DAT_01ef72c4 == '\0') {
    FUN_00ecbb60();
  }
  if (param_1 < 4) {
    if (param_1 == 3) {
      FUN_00414b50(local_20,L"Diode");
    }
    else if (param_1 == 0) {
      FUN_00414b50(local_20,L"Spice");
    }
    else if (param_1 == 1) {
      FUN_00414b50(local_20,&DAT_00ed03e8);
    }
    else if (param_1 == 2) {
      FUN_00414b50(local_20,&DAT_00ed03fc);
    }
  }
  else if (param_1 == 4) {
    FUN_00414b50(local_20,L"Mixed");
  }
  else if (param_1 == 5) {
    FUN_00414b50(local_20,L"OtherSC");
  }
  plVar1 = (longlong *)FUN_00eae5f0(L"tina",local_res18);
  if (plVar1 == (longlong *)0x0) {
    local_31 = 0;
  }
  else {
    FUN_00ea9ca0(local_30,local_res10);
    local_31 = (**(code **)(*plVar1 + 0xd0))(plVar1,local_20[0],local_30[0]);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414560(&local_res10,2);
  return local_31;
}

