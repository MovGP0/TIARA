/* Ghidra address: 012bb840 */
/* Ghidra symbol: FUN_012bb840 */


void FUN_012bb840(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0xd8));
  FUN_00b95120(*(undefined8 *)(param_2 + 0xd0));
  uVar1 = (**(code **)**(undefined8 **)(param_2 + 0xd0))(*(undefined8 *)(param_2 + 0xd0));
  FUN_00418590(uVar1,&DAT_01984da0);
  return;
}

