/* Ghidra address: 005d0d30 */
/* Ghidra symbol: FUN_005d0d30 */


void FUN_005d0d30(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_10;
  
  local_10 = 0;
  FUN_005d1940(param_1,0xf8);
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
  if (param_2 != '\0') {
    cVar1 = FUN_00440b00(param_1,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_0044d710(&PTR_FUN_00434528,1,PTR_PTR_020020e8);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414480(&local_10);
  return;
}

