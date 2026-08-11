/* Ghidra address: 00710f10 */
/* Ghidra symbol: FUN_00710f10 */


void FUN_00710f10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_00786090(param_1);
    uVar1 = thunk_FUN_041b2403(uVar1,0x406,0,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      uVar1 = thunk_FUN_04118143(*(longlong *)(param_1 + 0xa0),0xfffffffc);
      *(undefined8 *)(param_1 + 0xb0) = uVar1;
      thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0xa0),0xfffffffc,*(undefined8 *)(param_1 + 0xa8))
      ;
    }
  }
  return;
}

