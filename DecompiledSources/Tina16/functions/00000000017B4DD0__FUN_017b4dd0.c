/* Ghidra address: 017b4dd0 */
/* Ghidra symbol: FUN_017b4dd0 */


void FUN_017b4dd0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_004113f0(param_2,&PTR_FUN_0178b908);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(longlong *)(lVar2 + 0xc48) + 0x4a8);
  uVar1 = FUN_01799a70(lVar2);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = FUN_01799b40(lVar2);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}

