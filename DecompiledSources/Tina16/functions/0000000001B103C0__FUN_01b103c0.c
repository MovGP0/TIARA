/* Ghidra address: 01b103c0 */
/* Ghidra symbol: FUN_01b103c0 */


void FUN_01b103c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_50;
  uint local_4c;
  undefined8 local_40 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0x2b0) != 0) {
    iVar5 = *(int *)(lVar1 + 0x2d8);
    local_50 = 1;
    if (0 < iVar5) {
      do {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x2b0) + -8 + (longlong)local_50 * 8) + 0x130)
        ;
        if (lVar2 != 0) {
          iVar6 = *(int *)(lVar2 + 0x10);
          local_4c = 0;
          if (-1 < iVar6 + -1) {
            do {
              lVar2 = *(longlong *)
                       (*(longlong *)(*(longlong *)(lVar1 + 0x2b0) + -8 + (longlong)local_50 * 8) +
                       0x130);
              if (*(uint *)(lVar2 + 0x10) <= local_4c) {
                FUN_00594f90();
              }
              local_40[0] = *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)(int)local_4c * 8);
              uVar4 = FUN_00597e50(*(longlong *)(param_1 + 0x10) + 8,local_40);
              lVar2 = *(longlong *)(param_1 + 0x10);
              if (*(uint *)(lVar2 + 0x10) <= uVar4) {
                FUN_00594f90();
              }
              plVar3 = *(longlong **)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar4 * 8);
              (**(code **)(*plVar3 + 0x48))(plVar3);
              local_4c = local_4c + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        local_50 = local_50 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

