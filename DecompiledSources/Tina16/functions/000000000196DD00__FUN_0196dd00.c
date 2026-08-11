/* Ghidra address: 0196dd00 */
/* Ghidra symbol: FUN_0196dd00 */


void FUN_0196dd00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x90))(param_2);
  iVar1 = FUN_004b2060();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0196dcf0(param_1,iVar3);
      (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar2 + 0x20));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

