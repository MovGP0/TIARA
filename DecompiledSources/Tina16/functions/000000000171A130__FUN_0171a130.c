/* Ghidra address: 0171a130 */
/* Ghidra symbol: FUN_0171a130 */


void FUN_0171a130(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      return;
    }
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0xf8));
    if (iVar1 != 0) {
      return;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x78))
            (*(longlong **)(param_1 + 0x128),*(undefined8 *)(param_1 + 0xf0));
  return;
}

