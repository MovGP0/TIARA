/* Ghidra address: 00cbd360 */
/* Ghidra symbol: FUN_00cbd360 */


void FUN_00cbd360(longlong param_1,longlong param_2,char param_3)

{
  if (param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0xf8)) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    else if (param_2 == *(longlong *)(param_1 + 0x100)) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined1 *)(param_1 + 0x110) = 0;
    }
  }
  FUN_00c8d5f0();
  return;
}

