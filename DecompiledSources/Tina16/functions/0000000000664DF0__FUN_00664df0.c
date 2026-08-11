/* Ghidra address: 00664df0 */
/* Ghidra symbol: FUN_00664df0 */


void FUN_00664df0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_1c [12];
  
  uVar1 = FUN_0042a340(param_1 + 0x28,param_1 + 0x30,param_1 + 0x18,local_1c,param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(bool *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28) != 0;
  return;
}

