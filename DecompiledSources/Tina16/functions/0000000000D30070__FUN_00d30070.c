/* Ghidra address: 00d30070 */
/* Ghidra symbol: FUN_00d30070 */


undefined8 FUN_00d30070(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 local_1c;
  
  local_1c = 0xff;
  uVar1 = FUN_00442b60(0xff);
  thunk_FUN_04196342(uVar1,&local_1c);
  FUN_00415460(param_1,uVar1,0);
  FUN_00442c30(uVar1);
  return param_1;
}

