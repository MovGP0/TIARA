/* Ghidra address: 01858230 */
/* Ghidra symbol: FUN_01858230 */


void FUN_01858230(longlong param_1)

{
  FUN_018697e0(param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x18));
    FUN_00452320(param_1 + 0x18);
  }
  return;
}

