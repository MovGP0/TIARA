/* Ghidra address: 004c2a00 */
/* Ghidra symbol: FUN_004c2a00 */


void FUN_004c2a00(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int local_1c;
  
  uVar1 = FUN_004c23c0(*(undefined8 *)(param_1 + 0x40));
  FUN_004c8510(*(undefined8 *)(param_1 + 0x48),uVar1);
  FUN_004bea90(*(undefined8 *)(param_1 + 0x40),&local_1c,4);
  FUN_004c3930(*(undefined8 *)(param_1 + 0x48),&local_1c,4);
  FUN_004c2900(param_1,local_1c * param_2);
  return;
}

