/* Ghidra address: 01b3e990 */
/* Ghidra symbol: FUN_01b3e990 */


void FUN_01b3e990(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (**(longlong **)(param_1 + 0x90) != 0) {
    iVar2 = (int)*(undefined8 *)(**(longlong **)(param_1 + 0x90) + -8);
  }
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      if (*(int *)(**(longlong **)(param_1 + 0x90) + (longlong)iVar1 * 4) == param_2) {
        *(undefined4 *)(**(longlong **)(param_1 + 0x90) + (longlong)iVar1 * 4) = param_3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

