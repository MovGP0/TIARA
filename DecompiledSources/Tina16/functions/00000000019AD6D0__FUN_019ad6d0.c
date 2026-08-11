/* Ghidra address: 019ad6d0 */
/* Ghidra symbol: FUN_019ad6d0 */


void FUN_019ad6d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 != *(longlong **)(param_1 + 0x48)) {
    cVar1 = FUN_017c3740(param_2);
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*param_2 + 0x210))(param_2,0);
      if (iVar2 == *(int *)(param_1 + 0x2c)) {
        FUN_01993f30(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined1 *)(param_1 + 0x50),0);
      }
    }
  }
  return;
}

