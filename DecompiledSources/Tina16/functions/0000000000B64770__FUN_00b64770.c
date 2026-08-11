/* Ghidra address: 00b64770 */
/* Ghidra symbol: FUN_00b64770 */


void FUN_00b64770(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x50);
  if (sVar1 == 0) {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x19);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x12);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x12);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x19);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x13);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),sVar1);
  }
  return;
}

