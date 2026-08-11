/* Ghidra address: 00bc6fd0 */
/* Ghidra symbol: FUN_00bc6fd0 */


void FUN_00bc6fd0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x90) + 0x1a0) & 1) == 0) {
    uVar1 = FUN_00bc5e20(*(undefined8 *)(param_1 + 0x90),8);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  else {
    uVar1 = FUN_00bc5e20(*(undefined8 *)(param_1 + 0x90),0x14);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  FUN_00bc5e70(*(undefined8 *)(param_1 + 0x90),param_2);
  FUN_00bc5e70(*(undefined8 *)(param_1 + 0x90),0);
  **(uint **)(param_1 + 0x98) = **(uint **)(param_1 + 0x98) | 3;
  return;
}

