/* Ghidra address: 00f2d640 */
/* Ghidra symbol: FUN_00f2d640 */


void FUN_00f2d640(longlong param_1)

{
  char *pcVar1;
  
  if ((((*(longlong *)(param_1 + 8) + 2U <= *(ulonglong *)(param_1 + 0x18)) &&
       (pcVar1 = *(char **)(param_1 + 8), *pcVar1 == -0x11)) && (pcVar1[1] == -0x45)) &&
     (pcVar1[2] == -0x41)) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 3;
  }
  return;
}

