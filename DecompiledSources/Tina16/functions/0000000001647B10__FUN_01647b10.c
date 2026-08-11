/* Ghidra address: 01647b10 */
/* Ghidra symbol: FUN_01647b10 */


int FUN_01647b10(longlong param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                    (*(longlong **)(param_1 + 0x38),local_res10[0]);
  if ((param_3 & iVar1 == -1) != 0) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02003298);
    FUN_00b8e650(uVar2,&local_20,L"HDLStrings.Msg_UnknownIdentifier",local_28);
    FUN_01613110(local_20);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return iVar1;
}

