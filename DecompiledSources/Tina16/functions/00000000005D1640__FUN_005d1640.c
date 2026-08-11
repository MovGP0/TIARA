/* Ghidra address: 005d1640 */
/* Ghidra symbol: FUN_005d1640 */


void FUN_005d1640(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  FUN_005d1940(param_1,0x104);
  cVar1 = FUN_005d29d0(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_004343e0,1,PTR_PTR_02005060);
    FUN_004134c0(uVar2);
  }
  FUN_0043ea00(&local_10,param_1);
  if (local_10 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00433ec0,1,PTR_PTR_02005ad8);
    FUN_004134c0(uVar2);
  }
  cVar1 = FUN_005d2930(param_1,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00433ec0,1,PTR_PTR_02005ad8);
    FUN_004134c0(uVar2);
  }
  FUN_005d23a0(&local_20,param_1);
  FUN_005d2020(&local_18,local_20);
  cVar1 = FUN_00440b00(local_18,1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00434528,1,PTR_PTR_020020e8);
    FUN_004134c0(uVar2);
  }
  if (param_2 != '\0') {
    cVar1 = FUN_00440a20(param_1,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_0044d710(&PTR_FUN_00434678,1,PTR_PTR_02002cf8);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414560(&local_20,3);
  return;
}

