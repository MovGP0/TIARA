/* Ghidra address: 00d583f0 */
/* Ghidra symbol: FUN_00d583f0 */


undefined8 FUN_00d583f0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_20;
  
  local_20 = 0;
  iVar1 = FUN_00d58190(param_1,&local_20,param_2,param_3);
  uVar2 = thunk_FUN_039a03c6(0,iVar1,local_20);
  if (local_20 != 0) {
    FUN_004095f0(local_20,(longlong)iVar1);
  }
  return uVar2;
}

