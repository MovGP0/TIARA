/* Ghidra address: 0065a380 */
/* Ghidra symbol: FUN_0065a380 */


void FUN_0065a380(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_20 [16];
  
  lVar1 = thunk_FUN_041d93e9();
  if (lVar1 == 0) {
    thunk_FUN_03cc0d62(local_20);
    lVar1 = FUN_0064acf0(local_20,0);
    if (lVar1 == param_1) {
      uVar2 = FUN_0065b870(param_1);
      FUN_0064fca0(param_1,0x20,uVar2,1);
    }
  }
  return;
}

