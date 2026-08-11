/* Ghidra address: 01cc0e90 */
/* Ghidra symbol: FUN_01cc0e90 */


int FUN_01cc0e90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_01cc0690(param_1,param_2);
  FUN_01cc1600(param_1,local_20);
  iVar2 = FUN_01d31350(local_20[0]);
  FUN_00414480(local_20);
  return iVar1 + iVar2 + 0x120;
}

