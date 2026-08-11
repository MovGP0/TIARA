/* Ghidra address: 008e69b0 */
/* Ghidra symbol: FUN_008e69b0 */


int FUN_008e69b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(param_1 + 0x50))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(param_1 + 0x48))(param_1,local_30,local_34);
      iVar2 = FUN_0043e420(param_2,local_30[0]);
      if (iVar2 == 0) goto LAB_008e6a23;
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_34 = -1;
LAB_008e6a23:
  FUN_00414480(local_30);
  return local_34;
}

