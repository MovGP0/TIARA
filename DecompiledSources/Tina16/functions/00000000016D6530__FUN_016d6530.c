/* Ghidra address: 016d6530 */
/* Ghidra symbol: FUN_016d6530 */


void FUN_016d6530(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2 >> 8);
  FUN_016d61f0(uVar1,param_3,param_2 & 0xff);
  return;
}

