/* Ghidra address: 00589980 */
/* Ghidra symbol: FUN_00589980 */


undefined4 FUN_00589980(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  lVar3 = FUN_00589840(param_1,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    if (*(longlong *)(lVar3 + 8) != 0) {
      iVar5 = (int)*(undefined8 *)(*(longlong *)(lVar3 + 8) + -8);
    }
    iVar4 = 0;
    if (iVar5 - 1U < 0x80000000) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar4 * 0x10);
        if (lVar1 == param_2) {
          bVar6 = true;
        }
        else if ((lVar1 == 0) || (param_2 == 0)) {
          bVar6 = false;
        }
        else {
          iVar2 = FUN_0043e420(lVar1,param_2);
          bVar6 = iVar2 == 0;
        }
        if (bVar6) {
          return *(undefined4 *)(*(longlong *)(lVar3 + 8) + 8 + (longlong)iVar4 * 0x10);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0xffffffff;
}

