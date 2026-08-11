/* Ghidra address: 0196dc70 */
/* Ghidra symbol: FUN_0196dc70 */


undefined8 FUN_0196dc70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = FUN_004b2060();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_0196dcf0(param_1,iVar5);
      iVar2 = FUN_0043e6d0(*(undefined8 *)(lVar3 + 0x20),param_2);
      if (iVar2 == 0) {
        uVar4 = FUN_0196dcf0(param_1,iVar5);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

