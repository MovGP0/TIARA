/* Ghidra address: 017031b0 */
/* Ghidra symbol: FUN_017031b0 */


void FUN_017031b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0xd8))(*(undefined8 *)(param_2 + 0xd8));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xd0));
  return;
}

