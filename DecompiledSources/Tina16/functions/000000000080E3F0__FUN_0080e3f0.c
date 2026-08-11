/* Ghidra address: 0080e3f0 */
/* Ghidra symbol: FUN_0080e3f0 */


void FUN_0080e3f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    iVar2 = FUN_00808090();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar4 = FUN_00808070(DAT_02012670,iVar6);
        if (*(char *)(lVar4 + 0xa9) != '\0') {
          if ((*(longlong *)(lVar4 + 0x358) == 0) || (cVar1 = FUN_0065be20(lVar4), cVar1 == '\0')) {
LAB_0080e47a:
            FUN_0080e310(auStack_48,1);
            return;
          }
          uVar5 = FUN_0065b870(lVar4);
          iVar3 = thunk_FUN_03ec68d2(uVar5,*(undefined8 *)(lVar4 + 0x358));
          if (iVar3 == 0) goto LAB_0080e47a;
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_0080e310(auStack_48,0);
  }
  return;
}

