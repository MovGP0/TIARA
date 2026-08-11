/* Ghidra address: 015db020 */
/* Ghidra symbol: FUN_015db020 */


void FUN_015db020(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 *param_4)

{
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined8 *)(param_1 + 0x158),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

