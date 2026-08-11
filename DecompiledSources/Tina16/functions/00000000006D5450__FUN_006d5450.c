/* Ghidra address: 006d5450 */
/* Ghidra symbol: FUN_006d5450 */


void FUN_006d5450(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)((longlong)param_1 + 0x4c1) != param_2) {
    if ((param_2 != '\0') && (*(char *)((longlong)param_1 + 0x4c2) != '\0')) {
      FUN_0041ddd0(local_20,PTR_PTR_02003738);
      uVar1 = FUN_0044d490(&PTR_FUN_00472870,1,local_20[0]);
      FUN_004134c0(uVar1);
    }
    (**(code **)(*param_1 + 0x230))(param_1,param_2 == '\0');
    *(char *)((longlong)param_1 + 0x4c1) = param_2;
    FUN_00655b90();
  }
  FUN_00414480(local_20);
  return;
}

