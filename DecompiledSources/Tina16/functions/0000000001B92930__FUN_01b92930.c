/* Ghidra address: 01b92930 */
/* Ghidra symbol: FUN_01b92930 */


void FUN_01b92930(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x778) + 0x70) == '\x02') &&
     (*(longlong *)(param_1 + 0x750) != 0)) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x750))(*(undefined8 **)(param_1 + 0x750));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  return;
}

