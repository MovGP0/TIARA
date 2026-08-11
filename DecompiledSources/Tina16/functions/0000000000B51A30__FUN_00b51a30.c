/* Ghidra address: 00b51a30 */
/* Ghidra symbol: FUN_00b51a30 */


void FUN_00b51a30(longlong param_1,double param_2)

{
  undefined4 uVar1;
  
  if (*(double *)(param_1 + 0x30) != param_2) {
    *(double *)(param_1 + 0x30) = param_2;
    FUN_00b1bc10(param_2);
    uVar1 = FUN_0040c770();
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined1 *)(param_1 + 0x41) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

