/* Ghidra address: 01b3c850 */
/* Ghidra symbol: FUN_01b3c850 */


undefined8 FUN_01b3c850(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = FUN_00416db0(local_res18[0],L"Noname");
  if (iVar2 == 0) {
    sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar1 == 0x28) {
      FUN_00414ad0(param_1,L"2N2573");
    }
    else if (sVar1 == 0x29) {
      FUN_00414ad0(param_1,L"2N6342");
    }
  }
  else {
    FUN_00414ad0(param_1,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return param_1;
}

