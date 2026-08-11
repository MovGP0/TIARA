/* Ghidra address: 01599370 */
/* Ghidra symbol: FUN_01599370 */


/* WARNING: Removing unreachable block (ram,0x015993af) */
/* WARNING: Removing unreachable block (ram,0x015993b6) */
/* WARNING: Removing unreachable block (ram,0x015993c4) */
/* WARNING: Removing unreachable block (ram,0x015993dc) */
/* WARNING: Removing unreachable block (ram,0x015993e3) */
/* WARNING: Removing unreachable block (ram,0x015993d2) */

void FUN_01599370(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  ushort *local_28;
  ushort local_20;
  ushort local_1c;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x39);
  while( true ) {
    local_3c = (*(int *)((longlong)param_1 + 0x4d) - *(int *)((longlong)param_1 + 0x8d)) -
               *(int *)((longlong)param_1 + 0x85);
    if ((uVar2 - 0x106) + *(int *)((longlong)param_1 + 0x39) <= *(uint *)((longlong)param_1 + 0x85))
    {
      FUN_01596930(*(undefined8 *)((longlong)param_1 + 0x45),
                   (ulonglong)uVar2 + *(longlong *)((longlong)param_1 + 0x45),uVar2);
      *(uint *)((longlong)param_1 + 0x89) = *(int *)((longlong)param_1 + 0x89) - uVar2;
      *(uint *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) - uVar2;
      *(uint *)((longlong)param_1 + 0x75) = *(int *)((longlong)param_1 + 0x75) - uVar2;
      local_44 = *(uint *)((longlong)param_1 + 0x65);
      local_28 = (ushort *)(*(longlong *)((longlong)param_1 + 0x59) + (ulonglong)local_44 * 2);
      do {
        local_28 = local_28 + -1;
        if (*local_28 < uVar2) {
          local_1c = 0;
        }
        else {
          local_1c = *local_28 - (short)uVar2;
        }
        *local_28 = local_1c;
        local_44 = local_44 - 1;
      } while (local_44 != 0);
      local_28 = (ushort *)(*(longlong *)((longlong)param_1 + 0x51) + (ulonglong)uVar2 * 2);
      local_44 = uVar2;
      do {
        local_28 = local_28 + -1;
        if (*local_28 < uVar2) {
          local_20 = 0;
        }
        else {
          local_20 = *local_28 - (short)uVar2;
        }
        *local_28 = local_20;
        local_44 = local_44 - 1;
      } while (local_44 != 0);
      local_3c = local_3c + uVar2;
    }
    if (*(int *)(*param_1 + 8) == 0) break;
    iVar1 = FUN_0159c220(*param_1,*(longlong *)((longlong)param_1 + 0x45) +
                                  (ulonglong)*(uint *)((longlong)param_1 + 0x85) +
                                  (ulonglong)*(uint *)((longlong)param_1 + 0x8d),local_3c);
    *(int *)((longlong)param_1 + 0x8d) = *(int *)((longlong)param_1 + 0x8d) + iVar1;
    if (2 < (uint)(*(int *)((longlong)param_1 + 0x8d) + *(int *)((longlong)param_1 + 0x16ea))) {
      local_38 = *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x16ea);
      *(uint *)((longlong)param_1 + 0x61) =
           (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x45) + (ulonglong)local_38);
      *(uint *)((longlong)param_1 + 0x61) =
           (*(int *)((longlong)param_1 + 0x61) <<
            ((byte)*(undefined4 *)((longlong)param_1 + 0x71) & 0x1f) ^
           (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x45) + (ulonglong)(local_38 + 1))) &
           *(uint *)((longlong)param_1 + 0x6d);
      do {
        if (*(int *)((longlong)param_1 + 0x16ea) == 0) break;
        *(uint *)((longlong)param_1 + 0x61) =
             (*(int *)((longlong)param_1 + 0x61) <<
              ((byte)*(undefined4 *)((longlong)param_1 + 0x71) & 0x1f) ^
             (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x45) + (ulonglong)(local_38 + 2))) &
             *(uint *)((longlong)param_1 + 0x6d);
        *(undefined2 *)
         (*(longlong *)((longlong)param_1 + 0x51) +
         (ulonglong)(local_38 & *(uint *)((longlong)param_1 + 0x41)) * 2) =
             *(undefined2 *)
              (*(longlong *)((longlong)param_1 + 0x59) +
              (ulonglong)*(uint *)((longlong)param_1 + 0x61) * 2);
        *(undefined2 *)
         (*(longlong *)((longlong)param_1 + 0x59) +
         (ulonglong)*(uint *)((longlong)param_1 + 0x61) * 2) = (undefined2)local_38;
        local_38 = local_38 + 1;
        *(int *)((longlong)param_1 + 0x16ea) = *(int *)((longlong)param_1 + 0x16ea) + -1;
      } while (2 < (uint)(*(int *)((longlong)param_1 + 0x8d) + *(int *)((longlong)param_1 + 0x16ea))
              );
    }
    if ((0x105 < *(uint *)((longlong)param_1 + 0x8d)) || (*(int *)(*param_1 + 8) == 0)) break;
  }
  if (*(uint *)((longlong)param_1 + 0x16f4) < *(uint *)((longlong)param_1 + 0x4d)) {
    uVar2 = *(int *)((longlong)param_1 + 0x85) + *(int *)((longlong)param_1 + 0x8d);
    if (*(uint *)((longlong)param_1 + 0x16f4) < uVar2) {
      local_40 = *(int *)((longlong)param_1 + 0x4d) - uVar2;
      if (0x102 < local_40) {
        local_40 = 0x102;
      }
      FUN_01596900((ulonglong)uVar2 + *(longlong *)((longlong)param_1 + 0x45),0,local_40);
      *(uint *)((longlong)param_1 + 0x16f4) = uVar2 + local_40;
    }
    else if (*(uint *)((longlong)param_1 + 0x16f4) < uVar2 + 0x102) {
      local_40 = (uVar2 + 0x102) - *(int *)((longlong)param_1 + 0x16f4);
      if ((uint)(*(int *)((longlong)param_1 + 0x4d) - *(int *)((longlong)param_1 + 0x16f4)) <
          local_40) {
        local_40 = *(int *)((longlong)param_1 + 0x4d) - *(int *)((longlong)param_1 + 0x16f4);
      }
      FUN_01596900((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) +
                   *(longlong *)((longlong)param_1 + 0x45),0,local_40);
      *(uint *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + local_40;
    }
  }
  return;
}

