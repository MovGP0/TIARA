/* Ghidra address: 0184b2f0 */
/* Ghidra symbol: FUN_0184b2f0 */


undefined8 FUN_0184b2f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = FUN_01847410();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_0184a250(*(undefined8 *)(param_1 + 0x50),iVar5);
      iVar2 = FUN_0043e420(param_2,*(undefined8 *)(lVar3 + 0x20));
      if (iVar2 == 0) {
        uVar4 = FUN_0184a250(*(undefined8 *)(param_1 + 0x50),iVar5);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

