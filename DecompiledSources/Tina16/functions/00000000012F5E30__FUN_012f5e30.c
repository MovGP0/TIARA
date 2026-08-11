/* Ghidra address: 012f5e30 */
/* Ghidra symbol: FUN_012f5e30 */


void FUN_012f5e30(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x348) != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x348))(*(undefined8 *)(param_2 + 0x348));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  return;
}

