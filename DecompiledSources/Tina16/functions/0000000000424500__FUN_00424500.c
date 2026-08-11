/* Ghidra address: 00424500 */
/* Ghidra symbol: FUN_00424500 */


void FUN_00424500(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      uVar3 = (**(code **)(*param_1 + 0x58))(param_1,iVar2);
      cVar1 = FUN_00424770(param_1,uVar3);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x48))(param_1,iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

