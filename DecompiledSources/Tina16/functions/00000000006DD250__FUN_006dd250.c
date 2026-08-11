/* Ghidra address: 006dd250 */
/* Ghidra symbol: FUN_006dd250 */


void FUN_006dd250(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = FUN_006dc7a0(param_1);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (param_2 == '\0') {
      cVar3 = FUN_006dd240(param_1);
      if (cVar3 != '\0') {
        uVar2 = FUN_006dc7a0(param_1);
        FUN_006120b0(uVar2,0);
      }
    }
    else {
      uVar2 = FUN_006dc7a0(param_1);
      FUN_006120b0(uVar2,*(undefined8 *)(param_1 + 0x20));
    }
  }
  return;
}

