/* Ghidra address: 01636830 */
/* Ghidra symbol: FUN_01636830 */


void FUN_01636830(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  int local_1c;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_1c = *(int *)(param_3 + 0x18);
  local_30 = 0;
  if ((((local_1c == 0x84) || (local_1c == 0x85)) || (local_1c == 0x36)) || (local_1c == 0x37)) {
    local_30 = FUN_016369a0(param_1,param_3,param_2);
  }
  else {
    FUN_01613110(L"Component can\'t converted");
  }
  cVar1 = FUN_016270e0(local_1c);
  if (cVar1 == '\0') {
    FUN_01613110(L"THDLProcess.InsertComponent");
  }
  else {
    FUN_01626660(local_30,param_3);
  }
  FUN_00410f20(local_10);
  return;
}

