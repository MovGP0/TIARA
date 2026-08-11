/* Ghidra address: 00e0bb50 */
/* Ghidra symbol: FUN_00e0bb50 */


void FUN_00e0bb50(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x2d0))
            (*(longlong **)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x700),param_1 + 0x708);
  *(undefined8 *)(param_1 + 0x710) = **(undefined8 **)(param_1 + 0x708);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(*(undefined8 **)(param_1 + 0x708) + 1);
  return;
}

