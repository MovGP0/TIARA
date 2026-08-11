/* Ghidra address: 00e14a00 */
/* Ghidra symbol: FUN_00e14a00 */


void FUN_00e14a00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  FUN_01d34d40(*(undefined8 *)(param_1 + 8));
  FUN_01995600(*(undefined8 *)(param_1 + 0x10),0,0);
  lVar4 = FUN_01995660(*(undefined8 *)(param_1 + 0x10),0,0);
  while (lVar4 != 0) {
    cVar2 = FUN_0198a580(lVar4);
    if (cVar2 == '\x04') {
      FUN_01d03160(lVar4);
      lVar5 = FUN_017ff620(lVar4);
      cVar2 = FUN_01d3f230(lVar5);
      FUN_00e14960(auStack_58,lVar4);
      if ((cVar2 != '\0') &&
         (plVar1 = *(longlong **)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x1a8) + 0xd8) + 0x78) + 0xd0
                    ), iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1), 0 < iVar3)) {
        FUN_00e14960(auStack_58,lVar5);
      }
      FUN_01995800(*(undefined8 *)(param_1 + 0x10),0,0);
      lVar4 = FUN_01995660(*(undefined8 *)(param_1 + 0x10),0);
    }
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x408);
  iVar3 = *(int *)(lVar4 + 0x10);
  uVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if (*(uint *)(lVar4 + 0x10) <= uVar6) {
        FUN_00594f90();
      }
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar6 * 8);
      if (*(char *)((longlong)plVar1 + 0x3dc) != '\0') {
        FUN_004169a0(&local_38,plVar1 + 0x5b);
        (**(code **)(*plVar1 + 0x210))(plVar1,0);
        FUN_00e14960(auStack_58,plVar1);
      }
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

