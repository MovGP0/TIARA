/* Ghidra address: 00d055f0 */
/* Ghidra symbol: FUN_00d055f0 */


void FUN_00d055f0(longlong param_1,longlong param_2,char param_3)

{
  if (param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x1d0)) {
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined1 *)(param_1 + 0x1e0) = 0;
    }
    else if (param_2 == *(longlong *)(param_1 + 0x1f0)) {
      *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    else if (param_2 == *(longlong *)(param_1 + 0x1d8)) {
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
  }
  FUN_00cbd360();
  return;
}

