/* Ghidra address: 00f024c0 */
/* Ghidra symbol: FUN_00f024c0 */


void FUN_00f024c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x638) != 0) {
    (**(code **)(param_1 + 0x638))
              (*(undefined8 *)(param_1 + 0x640),param_1,*(undefined4 *)(param_1 + 0x4a8),
               *(undefined4 *)(param_1 + 0x4ac));
  }
  return;
}

