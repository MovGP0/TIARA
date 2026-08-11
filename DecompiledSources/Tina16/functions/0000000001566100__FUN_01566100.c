/* Ghidra address: 01566100 */
/* Ghidra symbol: FUN_01566100 */


undefined4 FUN_01566100(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_2c;
  
  local_2c = 0xffffffff;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar4);
      if (*(char *)(lVar2 + 8) == '\0') {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar4);
        lVar2 = *(longlong *)(lVar2 + 0x10);
        iVar6 = *(int *)(lVar2 + 0x10);
        iVar5 = 0;
        if (-1 < iVar6 + -1) {
          do {
            lVar3 = FUN_004aeac0(lVar2,iVar5);
            if (*(int *)(lVar3 + 8) == param_2) {
              lVar2 = FUN_004aeac0(lVar2,iVar5);
              local_2c = *(undefined4 *)(lVar2 + 0xc);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return local_2c;
}

