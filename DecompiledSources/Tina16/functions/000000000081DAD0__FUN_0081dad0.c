/* Ghidra address: 0081dad0 */
/* Ghidra symbol: FUN_0081dad0 */


void FUN_0081dad0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00818440(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else if ((*(int *)(param_2 + 8) == 2) && (*(char *)(param_1 + 0x134) != '\0')) {
    uVar2 = FUN_00786090(param_1);
    thunk_FUN_041b2403(uVar2,0x313,0,*(undefined4 *)(param_2 + 0x10));
  }
  return;
}

