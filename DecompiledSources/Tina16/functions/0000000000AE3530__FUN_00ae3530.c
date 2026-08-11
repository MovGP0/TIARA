/* Ghidra address: 00ae3530 */
/* Ghidra symbol: FUN_00ae3530 */


void FUN_00ae3530(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    iVar6 = 0;
    iVar5 = *(int *)(lVar1 + 0x10);
    if (-1 < iVar5 + -1) {
      do {
        lVar4 = FUN_00a72910(lVar1,iVar6);
        if (*(char *)(lVar4 + 8) == 'N') {
          bVar2 = true;
          local_30 = FUN_00a72910(lVar1,iVar6);
          goto code_r0x00ae35a4;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    bVar2 = false;
code_r0x00ae35a4:
    if (bVar2) {
      local_38 = 0;
      lVar1 = *(longlong *)(param_1 + 0x48);
      iVar5 = *(int *)(lVar1 + 0x10);
      iVar6 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar4 = FUN_00a72910(lVar1,iVar6);
          if (*(char *)(lVar4 + 8) == ')') {
            bVar2 = true;
            local_38 = FUN_00a72910(lVar1,iVar6);
            goto code_r0x00ae3603;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      bVar2 = false;
code_r0x00ae3603:
      if (bVar2) {
        uVar3 = *(undefined4 *)(local_38 + 0x18);
      }
      else {
        uVar3 = 1;
      }
      (**(code **)(param_1 + 0xa0))
                (*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98),
                 *(undefined8 *)(local_30 + 0x28),uVar3,0);
    }
  }
  FUN_00ad4730(param_1);
  return;
}

