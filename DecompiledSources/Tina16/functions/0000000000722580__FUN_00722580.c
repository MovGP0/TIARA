/* Ghidra address: 00722580 */
/* Ghidra symbol: FUN_00722580 */


void FUN_00722580(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_004115e0(param_1,param_2);
  }
  else {
    uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0xb8),*(longlong *)(param_1 + 0x80),
                               *param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
  }
  return;
}

