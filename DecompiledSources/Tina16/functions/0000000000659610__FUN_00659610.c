/* Ghidra address: 00659610 */
/* Ghidra symbol: FUN_00659610 */


void FUN_00659610(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((*(char *)(param_1 + 0x392) != '\0') && (*(longlong *)(param_1 + 0x340) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x340) + 0x50))
              (*(longlong **)(param_1 + 0x340),*(undefined8 *)(param_2 + 0x10));
  }
  return;
}

