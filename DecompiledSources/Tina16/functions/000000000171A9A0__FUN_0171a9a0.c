/* Ghidra address: 0171a9a0 */
/* Ghidra symbol: FUN_0171a9a0 */


undefined4 FUN_0171a9a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0171a920(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  uVar2 = FUN_0171a900(*(undefined8 *)(param_1 + 0x20),param_3);
  *param_4 = uVar2;
  return uVar1;
}

