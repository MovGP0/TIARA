/* Ghidra address: 01cc28c0 */
/* Ghidra symbol: FUN_01cc28c0 */


void FUN_01cc28c0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x4464) != '\0') && (*(int *)(param_1 + 0x4460) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x438) + 0x20))
              (*(longlong **)(param_1 + 0x438),param_1 + 0x460,*(undefined4 *)(param_1 + 0x4460));
    *(undefined4 *)(param_1 + 0x4460) = 0;
  }
  return;
}

