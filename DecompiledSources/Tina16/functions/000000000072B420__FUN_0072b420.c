/* Ghidra address: 0072b420 */
/* Ghidra symbol: FUN_0072b420 */


void FUN_0072b420(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    uVar1 = FUN_0072a690(*(undefined8 *)(param_1 + 0x80),param_2);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),param_1,param_2,param_3);
  }
  return;
}

