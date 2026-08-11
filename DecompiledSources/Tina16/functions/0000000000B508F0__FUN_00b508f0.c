/* Ghidra address: 00b508f0 */
/* Ghidra symbol: FUN_00b508f0 */


void FUN_00b508f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    uVar1 = FUN_00b1bcb0((double)param_2);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined1 *)(param_1 + 0x41) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

