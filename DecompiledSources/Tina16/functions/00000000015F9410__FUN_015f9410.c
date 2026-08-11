/* Ghidra address: 015f9410 */
/* Ghidra symbol: FUN_015f9410 */


undefined8 FUN_015f9410(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (param_2 == 1) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(local_20,PTR_PTR_02004d80);
    FUN_00b8e650(uVar1,param_1,L"HDLStrings.Msg_FatalError",local_20[0]);
  }
  else if (param_2 == 2) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02004a40);
    FUN_00b8e650(uVar1,param_1,L"HDLStrings.Msg_CannotEvaluate",local_28);
  }
  else if (param_2 == 3) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_30,PTR_PTR_020032b0);
    FUN_00b8e650(uVar1,param_1,L"HDLStrings.Msg_DivByZero",local_30);
  }
  else if (param_2 == 4) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_38,PTR_PTR_02002b70);
    FUN_00b8e650(uVar1,param_1,L"HDLStrings.Msg_FloatError",local_38);
  }
  else {
    FUN_00414480(param_1);
  }
  FUN_00414560(&local_38,4);
  return param_1;
}

