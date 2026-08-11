/* Ghidra address: 015fc7e0 */
/* Ghidra symbol: FUN_015fc7e0 */


undefined8 FUN_015fc7e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    FUN_00414ad0(param_1,L"VhdlSession0");
  }
  else {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  cVar1 = FUN_015fc7a0(&local_18);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1,local_18);
  }
  FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_28);
  FUN_00441920(&local_20,local_28);
  FUN_0043e1a0(&local_10,local_20);
  iVar2 = FUN_00416db0(local_10,L"tina.exe");
  if (iVar2 != 0) {
    FUN_00414ad0(param_1,L"VhdlSession1");
  }
  FUN_00414560(&local_28,4);
  FUN_00414480(local_res10);
  return param_1;
}

