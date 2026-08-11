/* Ghidra address: 017ef6c0 */
/* Ghidra symbol: FUN_017ef6c0 */


void FUN_017ef6c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x888),L"noname.ipr");
  if (iVar1 == 0) {
    FUN_017ef730(param_1);
  }
  else {
    FUN_017ef620(param_1,*(undefined8 *)(param_1 + 0x888));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x868),0);
  }
  return;
}

