/* Ghidra address: 005d1940 */
/* Ghidra symbol: FUN_005d1940 */


void FUN_005d1940(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (param_2 <= iVar2) {
    cVar1 = FUN_005d2bc0();
    if (cVar1 == '\0') {
      uVar3 = FUN_0044d710(&PTR_FUN_00434298,1,PTR_PTR_020016d8);
      FUN_004134c0(uVar3);
    }
  }
  return;
}

