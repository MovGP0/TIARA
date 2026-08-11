/* Ghidra address: 01a9e8f0 */
/* Ghidra symbol: FUN_01a9e8f0 */


void FUN_01a9e8f0(longlong *param_1,byte param_2,uint param_3)

{
  undefined2 *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  byte local_95;
  uint local_94;
  int local_90;
  int local_8c;
  undefined2 *local_88;
  int local_7c;
  int local_78;
  uint local_74;
  undefined2 local_70;
  undefined1 uStack_6e;
  double local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38 [10];
  undefined2 local_2e;
  undefined1 local_2c;
  undefined2 local_2b;
  char local_29;
  
  local_a0 = param_1;
  local_95 = param_2;
  local_94 = param_3;
  iVar8 = (**(code **)(*param_1 + 0x48))(param_1);
  if (0 < iVar8) {
    local_88 = (undefined2 *)FUN_0060a050(local_a0,0);
    local_2b = *local_88;
    local_29 = *(char *)(local_88 + 1);
    if (local_95 == 6) {
      uVar9 = FUN_005fbf20(local_94);
      uStack_6e = (undefined1)uVar9;
      local_2e = CONCAT11((char)((uint)uVar9 >> 8),(char)((uint)uVar9 >> 0x10));
      local_70 = local_2e;
      local_2c = uStack_6e;
      FUN_01a9d8d0(&local_70,&local_58,&local_60,&local_50);
    }
  }
  local_7c = (**(code **)(*local_a0 + 0x48))();
  local_8c = 0;
  if (-1 < local_7c + -1) {
    do {
      local_88 = (undefined2 *)FUN_0060a050(local_a0,local_8c);
      iVar8 = (**(code **)(*local_a0 + 0x60))();
      local_78 = iVar8 + -1;
      local_90 = 0;
      if (-1 < local_78) {
        do {
          local_78 = iVar8;
          lVar10 = (longlong)local_90;
          bVar4 = *(byte *)((longlong)local_88 + lVar10 * 3 + 2);
          bVar5 = *(byte *)((longlong)local_88 + lVar10 * 3 + 1);
          bVar6 = *(byte *)((longlong)local_88 + lVar10 * 3);
          if (local_95 < 5) {
            if (local_95 == 4) {
              local_74 = FUN_0040c770((double)*(byte *)((longlong)local_88 + lVar10 * 3 + 2) * 0.299
                                      + (double)*(byte *)((longlong)local_88 + lVar10 * 3 + 1) *
                                        0.587 + (double)*(byte *)((longlong)local_88 + lVar10 * 3) *
                                                0.114);
              uVar7 = (undefined1)local_74;
              *(undefined1 *)((longlong)local_88 + (longlong)local_90 * 3 + 2) = uVar7;
              *(undefined1 *)((longlong)local_88 + lVar10 * 3 + 1) = uVar7;
              *(undefined1 *)((longlong)local_88 + lVar10 * 3) = uVar7;
            }
            else if (local_95 == 1) {
              pbVar2 = (byte *)((longlong)local_88 + lVar10 * 3 + 2);
              *pbVar2 = ~*pbVar2;
              pbVar2 = (byte *)((longlong)local_88 + lVar10 * 3 + 1);
              *pbVar2 = ~*pbVar2;
              pbVar2 = (byte *)((longlong)local_88 + lVar10 * 3);
              *pbVar2 = ~*pbVar2;
            }
            else if (local_95 == 2) {
              uVar7 = FUN_01a9e8d0(auStack_c8,
                                   *(byte *)((longlong)local_88 + lVar10 * 3 + 2) + local_94);
              *(undefined1 *)((longlong)local_88 + lVar10 * 3 + 2) = uVar7;
              uVar7 = FUN_01a9e8d0(auStack_c8,
                                   *(byte *)((longlong)local_88 + lVar10 * 3 + 1) + local_94);
              *(undefined1 *)((longlong)local_88 + lVar10 * 3 + 1) = uVar7;
              uVar7 = FUN_01a9e8d0(auStack_c8,*(byte *)((longlong)local_88 + lVar10 * 3) + local_94)
              ;
              *(undefined1 *)((longlong)local_88 + lVar10 * 3) = uVar7;
            }
            else if (local_95 == 3) {
              pcVar3 = (char *)((longlong)local_88 + lVar10 * 3 + 2);
              *pcVar3 = *pcVar3 + (char)((int)((0xff - (uint)*(byte *)((longlong)local_88 +
                                                                      lVar10 * 3 + 2)) * local_94) /
                                        0xff);
              pcVar3 = (char *)((longlong)local_88 + lVar10 * 3 + 1);
              *pcVar3 = *pcVar3 + (char)((int)((0xff - (uint)*(byte *)((longlong)local_88 +
                                                                      lVar10 * 3 + 1)) * local_94) /
                                        0xff);
              *(char *)((longlong)local_88 + (longlong)local_90 * 3) =
                   *(char *)((longlong)local_88 + lVar10 * 3) +
                   (char)((int)((0xff - (uint)*(byte *)((longlong)local_88 + lVar10 * 3)) * local_94
                               ) / 0xff);
            }
          }
          else if (local_95 == 5) {
            iVar8 = FUN_00409e80(local_94);
            local_74 = FUN_01a9e8d0(auStack_c8,iVar8 - (local_94 >> 1));
            local_74 = local_74 & 0xff;
            uVar7 = FUN_01a9e8d0(auStack_c8,bVar4 + local_74);
            *(undefined1 *)((longlong)local_88 + lVar10 * 3 + 2) = uVar7;
            uVar7 = FUN_01a9e8d0(auStack_c8,bVar5 + local_74);
            *(undefined1 *)((longlong)local_88 + lVar10 * 3 + 1) = uVar7;
            uVar7 = FUN_01a9e8d0(auStack_c8,bVar6 + local_74);
            *(undefined1 *)((longlong)local_88 + lVar10 * 3) = uVar7;
          }
          else if ((local_95 == 6) &&
                  (((lVar10 = (longlong)local_90,
                    local_29 != *(char *)((longlong)local_88 + lVar10 * 3 + 2) ||
                    (local_2b._1_1_ != *(char *)((longlong)local_88 + lVar10 * 3 + 1))) ||
                   ((char)local_2b != *(char *)((longlong)local_88 + lVar10 * 3))))) {
            puVar1 = (undefined2 *)((longlong)local_88 + lVar10 * 3);
            local_70 = *puVar1;
            uStack_6e = *(undefined1 *)(puVar1 + 1);
            FUN_01a9d8d0(&local_70,local_38,&local_40,&local_48);
            FUN_01a9dc20(&local_70,local_58,local_40 * local_60,(local_48 * local_50) / 0.5);
            puVar1 = (undefined2 *)((longlong)local_88 + lVar10 * 3);
            *puVar1 = local_70;
            *(undefined1 *)(puVar1 + 1) = uStack_6e;
          }
          local_90 = local_90 + 1;
          local_78 = local_78 + -1;
          iVar8 = local_78;
        } while (local_78 != 0);
      }
      local_8c = local_8c + 1;
      local_7c = local_7c + -1;
    } while (local_7c != 0);
  }
  return;
}

