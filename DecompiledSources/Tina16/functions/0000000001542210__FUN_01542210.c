/* Ghidra address: 01542210 */
/* Ghidra symbol: FUN_01542210 */


void FUN_01542210(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0153fef0(&DAT_0153eb18,1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_01540070(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}

