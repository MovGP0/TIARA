/* Ghidra address: 008752e0 */
/* Ghidra symbol: FUN_008752e0 */


undefined8 FUN_008752e0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar2 = FUN_00876ad0(param_1,param_2,param_3);
  if (0 < iVar2) {
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        cVar1 = FUN_00875360(*(undefined2 *)(param_1 + -2 + (longlong)(param_3 + iVar4) * 2));
        if (cVar1 == '\0') {
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar3 = 1;
  }
  return uVar3;
}

