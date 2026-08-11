/* Ghidra address: 018b9c80 */
/* Ghidra symbol: FUN_018b9c80 */


void FUN_018b9c80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_019667e0(param_2);
  uVar2 = FUN_01887db0(*(undefined8 *)(param_1 + 0x80),uVar1);
  *(undefined4 *)(param_2 + 0x2c0) = uVar2;
  return;
}

