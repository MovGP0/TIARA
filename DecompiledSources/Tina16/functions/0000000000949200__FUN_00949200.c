/* Ghidra address: 00949200 */
/* Ghidra symbol: FUN_00949200 */


void FUN_00949200(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  byte bVar1;
  
  bVar1 = (**(code **)*param_3)(param_3);
  if (bVar1 < 2) {
    *param_4 = 1;
  }
  else if (bVar1 == 2) {
    *param_4 = 0;
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(short *)(param_1 + 0x78) == 0)) {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,param_4);
  }
  return;
}

