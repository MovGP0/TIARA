/* Ghidra address: 01cf1650 */
/* Ghidra symbol: FUN_01cf1650 */


bool FUN_01cf1650(undefined8 param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  undefined8 local_res8 [4];
  bool local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_21 = false;
  if (param_2 != (longlong *)0x0) {
    *param_3 = 0;
    while( true ) {
      iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
      if (iVar1 <= *param_3) break;
      (**(code **)(*param_2 + 0x18))(param_2,local_20,*param_3);
      iVar1 = FUN_004170c0(local_res8[0],local_20[0],1);
      if (iVar1 != 0) break;
      *param_3 = *param_3 + 1;
    }
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    local_21 = *param_3 < iVar1;
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return local_21;
}

