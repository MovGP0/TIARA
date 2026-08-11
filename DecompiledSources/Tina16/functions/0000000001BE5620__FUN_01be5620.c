/* Ghidra address: 01be5620 */
/* Ghidra symbol: FUN_01be5620 */


void FUN_01be5620(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  FUN_00423b50(param_2,0,1);
  FUN_00423b10(param_2,0xfffffffe,0xfffffffc);
  if (*(char *)(param_1 + 0x363) == '\0') {
    uVar1 = FUN_01be5730(param_1);
    lVar2 = FUN_01c03e40(uVar1);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),
                 *(undefined4 *)(lVar2 + 0x8c));
  }
  else {
    uVar1 = FUN_01be5730(param_1);
    uVar1 = FUN_01c03e40(uVar1);
    uVar3 = FUN_01bff2c0(uVar1);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),uVar3);
  }
  FUN_01bd35f0(param_1,param_2);
  return;
}

