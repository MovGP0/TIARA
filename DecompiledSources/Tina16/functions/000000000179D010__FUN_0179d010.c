/* Ghidra address: 0179d010 */
/* Ghidra symbol: FUN_0179d010 */


void FUN_0179d010(longlong param_1,byte param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res18 [2];
  longlong local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0179cf10(param_1,&local_10,local_res18);
  while (local_10 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x70 + (ulonglong)param_2 * 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_10);
    FUN_0179cf10(param_1,&local_10,local_res18);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return;
}

