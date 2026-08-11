/* Ghidra address: 01b8c750 */
/* Ghidra symbol: FUN_01b8c750 */


void FUN_01b8c750(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x88))(*(undefined8 *)(param_2 + 0x88));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  return;
}

