/* Ghidra address: 006f39b0 */
/* Ghidra symbol: FUN_006f39b0 */


void FUN_006f39b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_2 + 8) == 1) && (*(longlong *)(param_1 + 0x540) == 0)) {
    *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_2 + 0x10);
    uVar1 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x540),0xfffffffc);
    *(undefined8 *)(param_1 + 0x530) = uVar1;
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x540),0xfffffffc,*(undefined8 *)(param_1 + 0x788))
    ;
  }
  FUN_00659d40(param_1,param_2);
  return;
}

