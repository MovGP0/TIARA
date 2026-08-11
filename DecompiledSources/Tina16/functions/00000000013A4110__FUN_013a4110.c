/* Ghidra address: 013a4110 */
/* Ghidra symbol: FUN_013a4110 */


void FUN_013a4110(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  code *local_18;
  
  local_20 = auStack_48;
  if (*PTR_DAT_020052b8 != '\0') {
    DAT_01f39fc0 = thunk_FUN_04163be6(L"edidll.dll");
    if (0x1f < DAT_01f39fc0) {
      DAT_01f39fc8 = FUN_00427c10(DAT_01f39fc0,L"ReceiveCommand");
      DAT_01f39fd0 = (code *)FUN_00427c10(DAT_01f39fc0,L"ForwardHandle");
      local_18 = (code *)FUN_00427c10(DAT_01f39fc0,L"SetTINAEntry");
      if (((DAT_01f39fc8 == 0) || (DAT_01f39fd0 == (code *)0x0)) || (local_18 == (code *)0x0)) {
        thunk_FUN_041c8c2f(DAT_01f39fc0);
        FUN_0080d170(*(undefined8 *)PTR_DAT_02004030);
      }
      else {
        (*local_18)(FUN_0139f7a0);
        uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
        (*DAT_01f39fd0)(uVar1);
      }
    }
  }
  return;
}

