/* Ghidra address: 0070a7e0 */
/* Ghidra symbol: FUN_0070a7e0 */


void FUN_0070a7e0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00786090(param_1);
  lVar2 = thunk_FUN_03f32902(uVar1,5);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x78) == 0)) {
    *(longlong *)(param_1 + 0x78) = lVar2;
    uVar1 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x78),0xfffffffc);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x78),0xfffffffc,*(undefined8 *)(param_1 + 0x80));
  }
  return;
}

