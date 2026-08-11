/* Ghidra address: 01d6eb30 */
/* Ghidra symbol: FUN_01d6eb30 */


void FUN_01d6eb30(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *param_4;
  cVar2 = FUN_016e9e80(param_1,1);
  FUN_016ec240(param_1,cVar2 + '\x01',param_2,param_3);
  FUN_016ed5d0(param_1,cVar2 + '\x01',uVar1,0,0,0,0);
  return;
}

