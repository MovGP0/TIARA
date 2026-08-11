/* Ghidra address: 017afc70 */
/* Ghidra symbol: FUN_017afc70 */


void FUN_017afc70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  cVar3 = FUN_004113d0(lVar1,&PTR_FUN_006385a0);
  if ((cVar3 != '\0') && (*(longlong *)(lVar1 + 0x98) != 0)) {
    uVar2 = FUN_0065b870(*(undefined8 *)(lVar1 + 0x98));
    thunk_FUN_0415faac(uVar2);
  }
  return;
}

