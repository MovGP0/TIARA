/* Ghidra address: 01bfafb0 */
/* Ghidra symbol: FUN_01bfafb0 */


void FUN_01bfafb0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (*(byte *)(param_1 + 0x28) != param_2) {
    *(byte *)(param_1 + 0x28) = param_2;
    cVar2 = FUN_01bfab60(param_1);
    if ((cVar2 != '\0') && (cVar2 = FUN_01bfaa20(param_1), cVar2 != '\0')) {
      lVar3 = FUN_01bfaa70();
      iVar7 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10);
      uVar6 = 0;
      if (-1 < iVar7 + -1) {
        do {
          uVar4 = FUN_01bfaa70(param_1);
          lVar3 = FUN_01bfb960(uVar4,uVar6);
          if (*(longlong *)(lVar3 + 0x80) != 0) {
            uVar4 = FUN_01bfaa70(param_1);
            uVar5 = (ulonglong)uVar6;
            lVar3 = FUN_01bfb960(uVar4,uVar5);
            if (param_2 < 8) {
              bVar8 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (param_2 & 0x1f) & 0x18U) != 0;
            }
            else {
              bVar8 = false;
            }
            FUN_01c060c0(*(undefined8 *)(lVar3 + 0x80),!bVar8);
          }
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x108))(plVar1);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))(*(longlong **)(param_1 + 0x18));
    }
  }
  return;
}

