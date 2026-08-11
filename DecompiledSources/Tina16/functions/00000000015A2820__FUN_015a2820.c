/* Ghidra address: 015a2820 */
/* Ghidra symbol: FUN_015a2820 */


void FUN_015a2820(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint local_58;
  uint local_54;
  int local_50;
  int local_48;
  int local_30;
  
  lVar5 = *param_2;
  lVar9 = param_2[1];
  lVar6 = **(longlong **)((longlong)param_2 + 0xc);
  lVar7 = *(longlong *)(*(longlong *)((longlong)param_2 + 0xc) + 8);
  iVar2 = *(int *)(*(longlong *)((longlong)param_2 + 0xc) + 0x10);
  uVar3 = *(uint *)(*(longlong *)((longlong)param_2 + 0xc) + 0x18);
  local_48 = 0;
  for (local_58 = 0; (int)local_58 < 0x10; local_58 = local_58 + 1) {
    *(undefined2 *)(param_1 + 0xb6d + (longlong)(int)local_58 * 2) = 0;
  }
  *(undefined2 *)
   (lVar5 + 2 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)*(int *)(param_1 + 0x1485) * 4) * 4)
       = 0;
  local_50 = *(int *)(param_1 + 0x1485);
  while (local_50 = local_50 + 1, local_50 < 0x23d) {
    iVar4 = *(int *)(param_1 + 0xb8d + (longlong)local_50 * 4);
    local_58 = *(ushort *)(lVar5 + 2 + (ulonglong)*(ushort *)(lVar5 + 2 + (longlong)iVar4 * 4) * 4)
               + 1;
    if ((int)uVar3 < (int)local_58) {
      local_48 = local_48 + 1;
      local_58 = uVar3;
    }
    *(undefined2 *)(lVar5 + 2 + (longlong)iVar4 * 4) = (undefined2)local_58;
    if (iVar4 <= (int)lVar9) {
      *(short *)(param_1 + 0xb6d + (longlong)(int)local_58 * 2) =
           *(short *)(param_1 + 0xb6d + (longlong)(int)local_58 * 2) + 1;
      local_30 = 0;
      if (iVar2 <= iVar4) {
        local_30 = *(int *)(lVar7 + (longlong)(iVar4 - iVar2) * 4);
      }
      uVar1 = *(ushort *)(lVar5 + (longlong)iVar4 * 4);
      *(uint *)(param_1 + 0x16de) = (uint)uVar1 * (local_58 + local_30) + *(int *)(param_1 + 0x16de)
      ;
      if (lVar6 != 0) {
        *(uint *)(param_1 + 0x16e2) =
             (uint)uVar1 * ((uint)*(ushort *)(lVar6 + 2 + (longlong)iVar4 * 4) + local_30) +
             *(int *)(param_1 + 0x16e2);
      }
    }
  }
  local_58 = uVar3;
  if (local_48 != 0) {
    do {
      do {
        uVar8 = local_58;
        local_58 = uVar8 - 1;
      } while (*(short *)(param_1 + 0xb6d + (longlong)(int)local_58 * 2) == 0);
      *(short *)(param_1 + 0xb6d + (longlong)(int)local_58 * 2) =
           *(short *)(param_1 + 0xb6d + (longlong)(int)local_58 * 2) + -1;
      *(short *)(param_1 + 0xb6d + (longlong)(int)uVar8 * 2) =
           *(short *)(param_1 + 0xb6d + (longlong)(int)uVar8 * 2) + 2;
      *(short *)(param_1 + 0xb6d + (longlong)(int)uVar3 * 2) =
           *(short *)(param_1 + 0xb6d + (longlong)(int)uVar3 * 2) + -1;
      local_48 = local_48 + -2;
      local_58 = uVar3;
    } while (0 < local_48);
    for (; local_58 != 0; local_58 = local_58 - 1) {
      local_54 = (uint)*(ushort *)(param_1 + 0xb6d + (longlong)(int)local_58 * 2);
      while (local_54 != 0) {
        local_50 = local_50 + -1;
        iVar2 = *(int *)(param_1 + 0xb8d + (longlong)local_50 * 4);
        if (iVar2 <= (int)lVar9) {
          if (*(ushort *)(lVar5 + 2 + (longlong)iVar2 * 4) != local_58) {
            *(uint *)(param_1 + 0x16de) =
                 (local_58 - *(ushort *)(lVar5 + 2 + (longlong)iVar2 * 4)) *
                 (uint)*(ushort *)(lVar5 + (longlong)iVar2 * 4) + *(int *)(param_1 + 0x16de);
            *(undefined2 *)(lVar5 + 2 + (longlong)iVar2 * 4) = (undefined2)local_58;
          }
          local_54 = local_54 - 1;
        }
      }
    }
  }
  return;
}

