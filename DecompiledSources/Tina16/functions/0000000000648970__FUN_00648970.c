/* Ghidra address: 00648970 */
/* Ghidra symbol: FUN_00648970 */


void FUN_00648970(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  thunk_FUN_039ed528();
  DAT_01df5bf8 = 0;
  if (param_1 != 0) {
    cVar2 = FUN_004113d0(param_1,&PTR_FUN_00640c18);
    lVar3 = param_1;
    if (cVar2 == '\0') {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0x78);
      DAT_01df5bf8 = param_1;
    }
    uVar1 = FUN_0065b870(lVar3);
    thunk_FUN_0416f4fc(uVar1);
  }
  return;
}

