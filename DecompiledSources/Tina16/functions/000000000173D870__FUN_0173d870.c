/* Ghidra address: 0173d870 */
/* Ghidra symbol: FUN_0173d870 */


void FUN_0173d870(longlong param_1,undefined1 param_2)

{
  undefined1 *local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))
            (*(longlong **)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x3c),&local_20);
  *(undefined1 *)(param_1 + 0x39) = *local_20;
  *local_20 = param_2;
  return;
}

