/* Ghidra address: 00966040 */
/* Ghidra symbol: FUN_00966040 */


void FUN_00966040(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 *param_6)

{
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  FUN_00414520(param_3);
  FUN_00414520(param_4);
  FUN_00414520(param_5);
  *param_6 = 0x2b;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(param_1 + 0x40))
              (*(undefined8 *)(param_1 + 0x48),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

