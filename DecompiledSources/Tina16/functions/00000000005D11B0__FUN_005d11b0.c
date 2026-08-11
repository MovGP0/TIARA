/* Ghidra address: 005d11b0 */
/* Ghidra symbol: FUN_005d11b0 */


void FUN_005d11b0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_005d1640(param_1,0);
  cVar2 = FUN_004412f0(param_1);
  if (cVar2 == '\0') {
    uVar3 = thunk_FUN_03ce33a6();
    FUN_0044b630(&local_10,uVar3,0);
    uVar1 = FUN_0044d490(&PTR_FUN_00434f90,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

