/* Ghidra address: 00a168f0 */
/* Ghidra symbol: FUN_00a168f0 */


int FUN_00a168f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong local_70;
  
  lVar2 = *(longlong *)(param_1 + 0x230);
  iVar1 = *(int *)(param_1 + 0x1a4);
  while ((*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb4) ||
         ((*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4) &&
          (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xb8)))))) {
    iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
    if (iVar4 == 0) {
      return 0;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = *(longlong *)(param_1 + 0x130);
    local_70 = 0;
    do {
      if (*(int *)(lVar8 + 0x30) != 0) {
        lVar7 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                          (param_1,*(undefined8 *)(lVar2 + 0x88 + local_70 * 8),
                           *(int *)(param_1 + 0xb8) * *(int *)(lVar8 + 0xc),*(int *)(lVar8 + 0xc),0)
        ;
        if (*(uint *)(param_1 + 0xb8) < iVar1 - 1U) {
          uVar6 = *(uint *)(lVar8 + 0xc);
        }
        else {
          uVar6 = *(uint *)(lVar8 + 0x20) % *(uint *)(lVar8 + 0xc);
          if (uVar6 == 0) {
            uVar6 = *(uint *)(lVar8 + 0xc);
          }
        }
        if (0 < (int)uVar6) {
          pcVar3 = *(code **)(*(longlong *)(param_1 + 600) + 8 + local_70 * 8);
          lVar11 = *(longlong *)(param_2 + local_70 * 8);
          uVar5 = *(uint *)(lVar8 + 0x1c);
          uVar12 = 0;
          do {
            if (uVar5 == 0) {
              iVar4 = *(int *)(lVar8 + 0x24);
              uVar5 = 0;
            }
            else {
              lVar10 = *(longlong *)(lVar7 + uVar12 * 8);
              iVar13 = 0;
              uVar9 = 0;
              do {
                (*pcVar3)(param_1,lVar8,lVar10,lVar11,iVar13);
                lVar10 = lVar10 + 0x80;
                uVar5 = *(uint *)(lVar8 + 0x1c);
                iVar4 = *(int *)(lVar8 + 0x24);
                iVar13 = iVar13 + iVar4;
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar5);
            }
            lVar11 = lVar11 + (longlong)iVar4 * 8;
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar6);
        }
      }
      local_70 = local_70 + 1;
      lVar8 = lVar8 + 0x60;
    } while (local_70 < *(int *)(param_1 + 0x38));
  }
  uVar6 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar6;
  return 4 - (uint)(uVar6 < *(uint *)(param_1 + 0x1a4));
}

