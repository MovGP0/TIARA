/* Ghidra address: 008073d0 */
/* Ghidra symbol: FUN_008073d0 */


void FUN_008073d0(longlong param_1,longlong param_2)

{
  FUN_00803250(param_1,param_2);
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(longlong *)(param_2 + 0x18) == 1)) {
    *(undefined8 *)(param_2 + 0x18) = 2;
  }
  return;
}

