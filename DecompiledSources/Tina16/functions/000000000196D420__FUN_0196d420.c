/* Ghidra address: 0196d420 */
/* Ghidra symbol: FUN_0196d420 */


undefined8 FUN_0196d420(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0196d410(param_1,iVar4);
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        uVar3 = FUN_0196d410(param_1,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

