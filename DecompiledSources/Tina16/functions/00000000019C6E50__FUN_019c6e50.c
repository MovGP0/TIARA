/* Ghidra address: 019c6e50 */
/* Ghidra symbol: FUN_019c6e50 */


void FUN_019c6e50(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
            (*(longlong **)(param_1 + 0x70),local_res10[0]);
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_02005010,L"\\VhdlSession0\\autoroute.txt");
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x100))(*(longlong **)(param_1 + 0x70),local_20[0])
  ;
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

