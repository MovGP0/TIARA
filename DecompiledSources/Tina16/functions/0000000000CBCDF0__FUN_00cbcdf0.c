/* Ghidra address: 00cbcdf0 */
/* Ghidra symbol: FUN_00cbcdf0 */


void FUN_00cbcdf0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    FUN_0041ddd0(local_20,PTR_PTR_02003b48);
    uVar2 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  if (param_2 == 0) {
    uVar2 = FUN_00cac430(&PTR_FUN_00ca96c8,param_1);
    (**(code **)(*param_1 + 200))(param_1,uVar2);
  }
  else {
    uVar2 = FUN_00cac4a0(&PTR_FUN_00ca96c8,param_2,param_1);
    (**(code **)(*param_1 + 200))(param_1,uVar2);
  }
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_00414480(local_20);
  return;
}

