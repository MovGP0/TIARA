/* Ghidra address: 019711e0 */
/* Ghidra symbol: FUN_019711e0 */


void FUN_019711e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x31) == '\0') {
    (**(code **)(*param_2 + 0x90))(param_2);
    iVar1 = FUN_004b2060();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_0196d410(*(undefined8 *)(param_1 + 0x198),iVar3);
        lVar2 = *(longlong *)(lVar2 + 0x18);
        if (lVar2 != 0) {
          (**(code **)(*param_2 + 0x80))(param_2,*(undefined8 *)(lVar2 + 0x1c8),lVar2);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    FUN_0194e050(param_2);
  }
  return;
}

