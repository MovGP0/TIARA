/* Ghidra address: 01641e30 */
/* Ghidra symbol: FUN_01641e30 */


undefined8 FUN_01641e30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_01641a00(param_1,param_3);
  if (iVar1 < 0) {
    FUN_00414ad0(param_2,L"<none>");
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
              (*(longlong **)(param_1 + 0x38),local_20,iVar1);
    FUN_01641b00(param_1,param_2,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_2;
}

