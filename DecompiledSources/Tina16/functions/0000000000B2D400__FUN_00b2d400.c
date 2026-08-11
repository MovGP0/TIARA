/* Ghidra address: 00b2d400 */
/* Ghidra symbol: FUN_00b2d400 */


void FUN_00b2d400(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x58),param_2);
    }
    FUN_00418590(param_2,&DAT_00b2c7a8);
  }
  return;
}

