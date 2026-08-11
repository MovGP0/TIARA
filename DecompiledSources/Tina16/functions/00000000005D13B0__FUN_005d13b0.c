/* Ghidra address: 005d13b0 */
/* Ghidra symbol: FUN_005d13b0 */


undefined8 FUN_005d13b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = param_3;
  FUN_005d1240(&local_10,param_2);
  iVar1 = FUN_00458e90(local_10,&local_18);
  iVar2 = 0;
  if (local_10 != 0) {
    iVar2 = (int)*(undefined8 *)(local_10 + -8);
  }
  FUN_0045aba0(local_18,param_1,local_10,iVar1,iVar2 - iVar1);
  FUN_00419430(&local_10,&DAT_00406578);
  return param_1;
}

