/* Ghidra address: 005d23a0 */
/* Ghidra symbol: FUN_005d23a0 */


undefined8 FUN_005d23a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  thunk_FUN_041931fb(0);
  FUN_00441b80(param_1,param_2);
  iVar1 = thunk_FUN_03ce33a6();
  if ((iVar1 != 0) && (iVar1 != 2)) {
    FUN_0044b630(&local_10,iVar1,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004343e0,1,local_10);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  return param_1;
}

