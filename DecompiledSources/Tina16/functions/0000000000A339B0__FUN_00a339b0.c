/* Ghidra address: 00a339b0 */
/* Ghidra symbol: FUN_00a339b0 */


void FUN_00a339b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) && (param_2 != 0)) {
    uVar1 = FUN_004095c0(param_2 << 3);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else if (param_2 == 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_00409620(param_1 + 0x18,param_2 << 3);
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

