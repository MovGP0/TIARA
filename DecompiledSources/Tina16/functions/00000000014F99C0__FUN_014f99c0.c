/* Ghidra address: 014f99c0 */
/* Ghidra symbol: FUN_014f99c0 */


undefined1 FUN_014f99c0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_2f41;
  int local_2f34;
  int local_2f30;
  int local_2f1c [1001];
  undefined1 local_1f78;
  undefined1 local_f78;
  
  local_f78 = 0;
  local_1f78 = 0;
  local_2f41 = 0;
  uVar3 = FUN_01d347d0(*(longlong *)(param_1 + 8),*(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1);
  iVar7 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_2f34 = 0;
  if (-1 < iVar6 + -2) {
    iVar6 = iVar6 + -1;
    do {
      uVar4 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),local_2f34);
      cVar2 = FUN_014f98a0(uVar4,uVar3);
      if (cVar2 != '\0') {
        if (iVar7 == 0) {
          local_2f1c[0] = local_2f34;
          iVar7 = 1;
        }
        else if (1 < local_2f34 - local_2f1c[iVar7 + -1]) {
          local_2f1c[iVar7] = local_2f34;
          iVar7 = iVar7 + 1;
        }
      }
      local_2f34 = local_2f34 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((4 < iVar7) && (2 < iVar7)) {
    local_2f34 = 0;
    if (-1 < iVar7 + -2) {
      iVar6 = iVar7 + -1;
      piVar5 = local_2f1c;
      do {
        if (local_2f1c[local_2f34 + 1] - *piVar5 != local_2f1c[1] - local_2f1c[0]) {
          return 0;
        }
        local_2f34 = local_2f34 + 1;
        piVar5 = piVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_2f34 = 0;
    if (-1 < iVar7 + -3) {
      iVar7 = iVar7 + -2;
      piVar5 = local_2f1c;
      do {
        iVar6 = *piVar5;
        iVar1 = local_2f1c[local_2f34 + 1];
        local_2f30 = 0;
        if (-1 < (local_2f1c[1] - local_2f1c[0]) + -2) {
          iVar8 = (local_2f1c[1] - local_2f1c[0]) + -1;
          do {
            uVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),iVar6 + local_2f30);
            uVar4 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),iVar1 + local_2f30);
            cVar2 = FUN_014f98a0(uVar3,uVar4);
            if (cVar2 == '\0') {
              return 0;
            }
            local_2f30 = local_2f30 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_2f34 = local_2f34 + 1;
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_2f41 = 1;
  }
  return local_2f41;
}

