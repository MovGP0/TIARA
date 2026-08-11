/* Ghidra address: 0196d560 */
/* Ghidra symbol: FUN_0196d560 */


void FUN_0196d560(undefined8 param_1,undefined8 param_2)

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
      lVar3 = FUN_0196d410(param_1,iVar5);
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        lVar3 = FUN_0196d410(param_1,iVar5);
        iVar2 = FUN_0043e420(*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x1c8),param_2);
        if (iVar2 == 0) {
          uVar4 = FUN_0196d410(param_1,iVar5);
          FUN_00410f20(uVar4);
          return;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

