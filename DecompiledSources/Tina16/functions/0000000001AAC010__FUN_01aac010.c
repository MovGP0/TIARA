/* Ghidra address: 01aac010 */
/* Ghidra symbol: FUN_01aac010 */


void FUN_01aac010(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_3 = 2;
  }
  else {
    cVar1 = FUN_01cb00a0(param_1,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_01cb0080(param_1);
      *param_3 = uVar2;
    }
    else {
      *param_3 = 1;
    }
  }
  return;
}

