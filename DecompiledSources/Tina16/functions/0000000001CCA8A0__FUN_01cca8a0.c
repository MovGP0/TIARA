/* Ghidra address: 01cca8a0 */
/* Ghidra symbol: FUN_01cca8a0 */


void FUN_01cca8a0(longlong param_1)

{
  FUN_01cc72c0(param_1);
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
            (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c),1);
  return;
}

