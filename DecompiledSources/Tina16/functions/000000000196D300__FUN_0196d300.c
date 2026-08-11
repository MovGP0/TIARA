/* Ghidra address: 0196d300 */
/* Ghidra symbol: FUN_0196d300 */


void FUN_0196d300(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_004b2060();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0196d410(param_1,iVar3);
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        lVar2 = FUN_0196d410(param_1,iVar3);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x1c0) = *(undefined8 *)(param_1 + 0x28);
        lVar2 = FUN_0196d410(param_1,iVar3);
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x2d8))(*(longlong **)(lVar2 + 0x18));
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

