/* Ghidra address: 00ccff40 */
/* Ghidra symbol: FUN_00ccff40 */


void FUN_00ccff40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)PTR_DAT_02003270)(*(longlong *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

