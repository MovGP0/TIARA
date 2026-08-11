/* Ghidra address: 014c2800 */
/* Ghidra symbol: FUN_014c2800 */


undefined8 FUN_014c2800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_0044f900(L"<body onLoad=\"",local_res18[0]);
  iVar2 = FUN_0044f900(L"\"></body>",local_res18[0]);
  iVar3 = FUN_0044f900(L"<body onLoad=\"",local_res18[0]);
  FUN_005b8960(param_2,local_res18[0],iVar1 + 0xe,(iVar2 - iVar3) + -0xe);
  FUN_00414480(local_res18);
  return param_2;
}

