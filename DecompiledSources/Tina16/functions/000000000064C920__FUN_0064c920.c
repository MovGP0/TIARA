/* Ghidra address: 0064c920 */
/* Ghidra symbol: FUN_0064c920 */


void FUN_0064c920(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((*(char *)(param_1 + 0x2d0) == '\0') && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0xb3);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))(*(longlong **)(param_1 + 0xd8),0);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))(*(longlong **)(param_1 + 0xd8),2);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))(*(longlong **)(param_1 + 0xd8),1);
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))(*(longlong **)(param_1 + 0xd8),3);
    *(ulonglong *)(param_1 + 0x2dc) = CONCAT44(iVar5 + iVar6 / 2,iVar3 + iVar4 / 2);
    if (bVar1 == 3) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(undefined4 *)(param_1 + 0x2ec) = 0;
      *(undefined1 *)(param_1 + 0x2e4) = 1;
    }
    else {
      if ((bVar1 & 4) == 0) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),0);
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),2);
        *(int *)(param_1 + 0x2d4) = iVar3 + iVar4 / 2;
      }
      else if ((bVar1 & 1) == 0) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),0);
        *(undefined4 *)(param_1 + 0x2d4) = uVar7;
      }
      else {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),2);
        *(undefined4 *)(param_1 + 0x2d4) = uVar7;
      }
      if ((bVar1 & 8) == 0) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),1);
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),3);
        *(int *)(param_1 + 0x2d8) = iVar3 + iVar4 / 2;
      }
      else if ((bVar1 & 2) == 0) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),1);
        *(undefined4 *)(param_1 + 0x2d8) = uVar7;
      }
      else {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                          (*(longlong **)(param_1 + 0xd8),3);
        *(undefined4 *)(param_1 + 0x2d8) = uVar7;
      }
      plVar2 = *(longlong **)(param_1 + 0x78);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x248))(plVar2,param_1,param_1 + 0x2e8);
      }
    }
  }
  return;
}

