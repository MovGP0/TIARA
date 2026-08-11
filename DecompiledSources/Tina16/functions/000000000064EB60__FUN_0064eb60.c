/* Ghidra address: 0064eb60 */
/* Ghidra symbol: FUN_0064eb60 */


void FUN_0064eb60(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 *param_6)

{
  *param_6 = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    *param_6 = 1;
    (**(code **)(param_1 + 0x198))
              (*(undefined8 *)(param_1 + 0x1a0),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

