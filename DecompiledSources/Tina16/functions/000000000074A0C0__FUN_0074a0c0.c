/* Ghidra address: 0074a0c0 */
/* Ghidra symbol: FUN_0074a0c0 */


void FUN_0074a0c0(longlong param_1,longlong param_2)

{
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
  }
  else {
    FUN_00659e90();
  }
  return;
}

