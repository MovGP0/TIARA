/* Ghidra address: 017b2ec0 */
/* Ghidra symbol: FUN_017b2ec0 */


void FUN_017b2ec0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_004113f0(param_2,&PTR_FUN_0178b908);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(longlong *)(lVar2 + 0xc48) + 0x4a8);
  uVar1 = FUN_01799a70(lVar2);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_01799b40(lVar2);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}

