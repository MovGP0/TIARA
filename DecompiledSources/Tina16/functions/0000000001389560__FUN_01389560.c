/* Ghidra address: 01389560 */
/* Ghidra symbol: FUN_01389560 */


void FUN_01389560(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x880) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x9b0) + 8))
              (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990),
               *(longlong *)(param_1 + 0x880));
    *param_2 = *(undefined8 *)(param_1 + 0x880);
  }
  return;
}

