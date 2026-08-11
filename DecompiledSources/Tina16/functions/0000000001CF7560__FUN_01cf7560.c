/* Ghidra address: 01cf7560 */
/* Ghidra symbol: FUN_01cf7560 */


undefined8 * FUN_01cf7560(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00441920(&local_10,local_res10);
  FUN_00441640(local_20,local_res18);
  FUN_00416ba0(param_1,local_20[0],local_10);
  cVar1 = FUN_00440a20(*param_1,1);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_1,local_res10);
    cVar1 = FUN_00440a20(*param_1,1);
    if (cVar1 == '\0') {
      FUN_00416cd0(param_1,3,*(undefined8 *)PTR_DAT_02005010,L"\\MacroLib\\",local_10);
      cVar1 = FUN_00440a20(*param_1,1);
      if (cVar1 == '\0') {
        FUN_00416cd0(param_1,3,*(undefined8 *)PTR_DAT_020049a0,L"\\MacroLib\\",local_10);
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return param_1;
}

