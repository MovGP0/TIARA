/* Ghidra address: 0198f300 */
/* Ghidra symbol: FUN_0198f300 */


void FUN_0198f300(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x2d8))(*(undefined8 *)(param_2 + 0x2d8));
  FUN_00418590(uVar1,&DAT_01a96ff8);
  uVar1 = thunk_FUN_04174fe9(*(undefined8 *)(param_2 + 0x2b8));
  *(undefined8 *)(param_2 + 0x2c0) = uVar1;
  return;
}

