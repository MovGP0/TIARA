/* Ghidra address: 0156a9c0 */
/* Ghidra symbol: FUN_0156a9c0 */


void FUN_0156a9c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(*param_2 + 0x10))(param_2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),iVar3);
      cVar1 = FUN_0154d500(param_1,*(undefined8 *)(lVar2 + 0x40));
      if (((((cVar1 == '\0') &&
            (cVar1 = FUN_0154d550(param_1,*(undefined8 *)(lVar2 + 0x40)), cVar1 == '\0')) &&
           (*(longlong *)(lVar2 + 0x40) != 0)) &&
          (*(char *)(*(longlong *)(lVar2 + 0x40) + 0x3d2) == '\0')) ||
         (*(int *)(lVar2 + 0x38) != -1)) {
        FUN_004ae7e0(param_2,lVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

