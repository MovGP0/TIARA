/* Ghidra address: 00411000 */
/* Ghidra symbol: FUN_00411000 */


void FUN_00411000(longlong *param_1)

{
  longlong lVar1;
  
  FUN_0041d450(param_1);
  lVar1 = *param_1;
  do {
    if (*(longlong *)(lVar1 + -0xb0) != 0) {
      FUN_00417740(param_1,*(longlong *)(lVar1 + -0xb0));
    }
    lVar1 = FUN_00410ca0(lVar1);
  } while (lVar1 != 0);
  FUN_00411d60(param_1);
  return;
}

