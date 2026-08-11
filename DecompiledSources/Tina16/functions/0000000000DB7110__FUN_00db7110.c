/* Ghidra address: 00db7110 */
/* Ghidra symbol: FUN_00db7110 */


void FUN_00db7110(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_30 [2];
  
  FUN_016ee260(param_1,local_30,0x118,0);
  uVar2 = FUN_00db2390(param_2);
  cVar1 = FUN_01d44bc0(uVar2);
  if (cVar1 == '\0') {
    FUN_00db3010(local_30[0],param_1,param_2,param_3);
  }
  else {
    FUN_00db23a0(local_30[0],param_1,param_2,param_3);
  }
  return;
}

