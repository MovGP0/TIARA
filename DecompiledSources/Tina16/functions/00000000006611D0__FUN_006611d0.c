/* Ghidra address: 006611d0 */
/* Ghidra symbol: FUN_006611d0 */


void FUN_006611d0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + 0x48)) {
    *(longlong *)(param_1 + 0x28) = param_2;
  }
  else {
    if ((*(longlong *)(param_1 + 0x28) == 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
      FUN_006611d0(param_1,*(undefined8 *)(param_2 + 0x18));
    }
    if ((*(longlong *)(param_1 + 0x28) == 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      FUN_006611d0(param_1,*(undefined8 *)(param_2 + 0x10));
    }
  }
  return;
}

