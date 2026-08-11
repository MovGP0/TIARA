/* Ghidra address: 0072b630 */
/* Ghidra symbol: FUN_0072b630 */


void FUN_0072b630(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    uVar1 = FUN_0072a690(*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    (**(code **)(param_1 + 0x198))(*(undefined8 *)(param_1 + 0x1a0),param_1);
  }
  return;
}

