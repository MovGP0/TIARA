/* Ghidra address: 01804c90 */
/* Ghidra symbol: FUN_01804c90 */


void FUN_01804c90(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                    (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_1 + 8),0x1000);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

