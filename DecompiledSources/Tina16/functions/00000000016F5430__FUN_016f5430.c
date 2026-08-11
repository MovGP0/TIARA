/* Ghidra address: 016f5430 */
/* Ghidra symbol: FUN_016f5430 */


void FUN_016f5430(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_01d44bc0(*(undefined1 *)(param_1 + 0xed6));
  if (cVar1 == '\0') {
    FUN_016f5200(param_1,param_2);
  }
  else {
    FUN_016f3d00(param_1,param_2,param_3);
  }
  return;
}

