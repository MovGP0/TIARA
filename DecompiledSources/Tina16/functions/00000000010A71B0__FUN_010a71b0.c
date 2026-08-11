/* Ghidra address: 010a71b0 */
/* Ghidra symbol: FUN_010a71b0 */


undefined8 FUN_010a71b0(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_24 = FUN_005fbf20(param_2);
  local_18 = 0;
  FUN_0043f750(&local_48,(undefined1)local_24);
  local_68 = L"\\green";
  FUN_00416cd0(&local_18,3,L"\\red",local_48);
  local_28 = FUN_005fbf20(param_2);
  local_10 = 0;
  FUN_0043f750(&local_50,(char)((uint)local_28 >> 8));
  local_68 = L"\\blue";
  FUN_00416cd0(&local_10,3,local_18,local_50);
  local_2c = FUN_005fbf20(param_2);
  FUN_0043f750(&local_58,(char)((uint)local_2c >> 0x10));
  local_68 = L";";
  FUN_00416cd0(&local_20,3,local_10,local_58);
  FUN_00414480(&local_10);
  FUN_00414480(&local_18);
  FUN_00414ad0(param_1,local_20);
  FUN_00414560(&local_58,3);
  FUN_00414480(&local_20);
  return param_1;
}

