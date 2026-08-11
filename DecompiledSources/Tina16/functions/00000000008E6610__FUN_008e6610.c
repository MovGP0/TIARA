/* Ghidra address: 008e6610 */
/* Ghidra symbol: FUN_008e6610 */


undefined8 FUN_008e6610(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (-1 < param_3) {
    iVar1 = (**(code **)(param_1 + 0x20))(param_1);
    if (param_3 < iVar1) goto LAB_008e6674;
  }
  FUN_0041ddd0(local_20,PTR_PTR_02004328);
  uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,local_20[0]);
  FUN_004134c0(uVar2);
LAB_008e6674:
  (**(code **)((&PTR_PTR_01e28498)[param_3] + 0x78))((&PTR_PTR_01e28498)[param_3],param_2);
  FUN_00414480(local_20);
  return param_2;
}

