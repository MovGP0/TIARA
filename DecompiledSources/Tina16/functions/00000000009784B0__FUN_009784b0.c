/* Ghidra address: 009784b0 */
/* Ghidra symbol: FUN_009784b0 */


void FUN_009784b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      FUN_0096dca0(lVar1,L"UTF-8");
    }
    else {
      FUN_0096dca0(lVar1,*(undefined8 *)(param_1 + 0x90));
    }
  }
  return;
}

