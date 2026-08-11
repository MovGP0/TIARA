/* Ghidra address: 00bd1160 */
/* Ghidra symbol: FUN_00bd1160 */


void FUN_00bd1160(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),param_2);
    FUN_00bd1070(param_1);
    if ((*(char *)(param_2 + 8) != '\x15') && (*(longlong *)(param_1 + 0x38) != 0)) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
    }
  }
  return;
}

