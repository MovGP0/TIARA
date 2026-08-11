/* Ghidra address: 00cf07f0 */
/* Ghidra symbol: FUN_00cf07f0 */


undefined8
FUN_00cf07f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_004113d0(param_5,&PTR_FUN_00478eb0);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_020031e8);
    uVar2 = FUN_0086dfd0(&PTR_FUN_00cf00c0,1,local_10);
    FUN_004134c0(uVar2);
  }
  uVar2 = FUN_00cf0ba0(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_00414480(&local_10);
  return uVar2;
}

