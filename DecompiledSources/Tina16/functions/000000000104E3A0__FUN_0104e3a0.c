/* Ghidra address: 0104e3a0 */
/* Ghidra symbol: FUN_0104e3a0 */


void FUN_0104e3a0(longlong param_1)

{
  if (*(longlong *)PTR_DAT_02004c68 != 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x978));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x990));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x988));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x980));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x930));
    _FreeSimulatorObject(*(undefined8 *)(param_1 + 0x970));
    if (*(int *)(param_1 + 0x918) == 1) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x9d8));
    }
  }
  return;
}

