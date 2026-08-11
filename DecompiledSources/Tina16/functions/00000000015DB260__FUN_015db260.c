/* Ghidra address: 015db260 */
/* Ghidra symbol: FUN_015db260 */


void FUN_015db260(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 *param_4)

{
  *param_4 = 1;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    (**(code **)(param_1 + 0x170))(*(undefined8 *)(param_1 + 0x178),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

