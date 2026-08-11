/* Ghidra address: 018931a0 */
/* Ghidra symbol: FUN_018931a0 */


undefined4 FUN_018931a0(undefined8 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  
  local_34 = 0x1c;
  local_30 = 0x10;
  uVar2 = FUN_0065b870();
  iVar1 = thunk_FUN_041195b2(uVar2,param_3,&local_34);
  if (iVar1 != 0) {
    param_2 = local_1c;
  }
  return param_2;
}

