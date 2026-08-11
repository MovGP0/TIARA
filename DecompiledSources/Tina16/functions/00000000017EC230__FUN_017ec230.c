/* Ghidra address: 017ec230 */
/* Ghidra symbol: FUN_017ec230 */


void FUN_017ec230(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x6d8) = *param_2;
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))
            (*(longlong **)(param_1 + 0x6c8),*(undefined1 *)(param_1 + 0x6d8));
  return;
}

