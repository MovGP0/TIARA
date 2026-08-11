/* Ghidra address: 01647680 */
/* Ghidra symbol: FUN_01647680 */


undefined8 FUN_01647680(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28));
  if (iVar1 <= param_3) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02002be8);
    FUN_00b8e650(uVar2,local_20,L"HDLStrings.Msg_InternalError",local_28);
    FUN_00416ad0(local_20,L"TAMSFunction.GetParamName");
    FUN_01613110(local_20[0]);
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
            (*(longlong **)(param_1 + 0x28),param_2,param_3);
  FUN_00414560(&local_28,2);
  return param_2;
}

