/* Ghidra address: 00c08020 */
/* Ghidra symbol: FUN_00c08020 */


void FUN_00c08020(longlong param_1,ushort *param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_2 < 0x3e9) {
    if (*(longlong *)(param_1 + 0x710) != 0) {
      (**(code **)(param_1 + 0x710))
                (*(undefined8 *)(param_1 + 0x718),param_1,param_2,param_3,param_4);
    }
  }
  else if (*(longlong *)(param_1 + 0x720) != 0) {
    (**(code **)(param_1 + 0x720))(*(undefined8 *)(param_1 + 0x728),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

