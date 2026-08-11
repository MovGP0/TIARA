/* Ghidra address: 01d472e0 */
/* Ghidra symbol: FUN_01d472e0 */


void FUN_01d472e0(longlong param_1)

{
  FUN_01d46550(param_1);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
              (*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x18));
    FUN_0041b800(param_1 + 0x68);
  }
  return;
}

