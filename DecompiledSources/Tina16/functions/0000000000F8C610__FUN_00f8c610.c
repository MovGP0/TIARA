/* Ghidra address: 00f8c610 */
/* Ghidra symbol: FUN_00f8c610 */


undefined8 FUN_00f8c610(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00f8b940(param_1,&local_18,*(undefined8 *)(param_1 + 0x3440),&local_10);
  lVar2 = FUN_019a03d0(*(undefined8 *)(param_1 + 0x33e8),local_10);
  *param_2 = lVar2;
  if (*param_2 == 0) {
    FUN_00416cd0(&local_20,3,L"TVHDLDebugObj.GetSubCkt: ",*(undefined8 *)(param_1 + 0x3440),
                 L" not found!");
    FUN_015fcf20(local_20,0,0,0);
  }
  cVar1 = FUN_01d04d40(*param_2);
  if (cVar1 == '\0') {
    local_28 = 0;
  }
  else {
    local_28 = FUN_004113f0(*(undefined8 *)(*param_2 + 0x1a8),&PTR_FUN_01763148);
  }
  FUN_00414560(&local_20,3);
  return local_28;
}

