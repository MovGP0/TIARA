/* Ghidra address: 00cea710 */
/* Ghidra symbol: FUN_00cea710 */


void FUN_00cea710(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(param_1 + 0x78))
              (*(undefined8 *)(param_1 + 0x80),param_1,*(undefined8 *)(param_1 + 0xa8));
  }
  return;
}

