/* Ghidra address: 0045aa70 */
/* Ghidra symbol: FUN_0045aa70 */


undefined8 FUN_0045aa70(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  FUN_0043e1a0(local_20,param_1);
  cVar1 = FUN_00458760(local_20[0],&local_c);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_02005278);
    FUN_004134c0(uVar2);
  }
  else {
    local_28 = FUN_0045a9e0(local_c);
  }
  FUN_00414480(local_20);
  return local_28;
}

