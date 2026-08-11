/* Ghidra address: 01243570 */
/* Ghidra symbol: FUN_01243570 */


void FUN_01243570(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)**(undefined8 **)(param_2 + 0xd0))(*(undefined8 *)(param_2 + 0xd0));
  FUN_00418590(uVar1,&DAT_01a96ff8);
  thunk_FUN_041a9b5c(0,*(undefined8 *)(param_2 + 200));
  FUN_00410f20(*(undefined8 *)(param_2 + 0xc0));
  return;
}

