/* Ghidra address: 00c2af40 */
/* Ghidra symbol: FUN_00c2af40 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c2af40(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  byte *local_a8;
  uint local_a0;
  uint local_9c;
  uint3 *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78;
  uint auStack_6c [16];
  uint local_2c;
  
  local_90 = 0;
  local_78 = 0;
  local_a8 = *(byte **)(*(longlong *)(param_1 + 0x140) + 0x30);
  iVar4 = 0;
  puVar8 = auStack_6c + 1;
  do {
    *puVar8 = 0xffffffff;
    iVar4 = iVar4 + 1;
    puVar8 = puVar8 + 2;
  } while (iVar4 != 8);
  local_a0 = 0;
  uVar10 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4f);
  local_9c = 0;
  if (-1 < (int)(uVar10 - 1)) {
    do {
      if ((local_9c & 0x1f) == 0) {
        uVar5 = thunk_FUN_03f3ed25(local_9c,100,
                                   *(undefined2 *)(*(longlong *)(param_1 + 0x140) + 0x4f));
        uVar11 = 0;
        FUN_004238d0(local_88,0,0,0,0);
        FUN_0041ddd0(&local_90,PTR_PTR_02003090);
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 8);
        pcVar7 = (code *)FUN_00411550(uVar2,0xfffd);
        (*pcVar7)(uVar2,*(undefined8 *)(param_1 + 0x140),1,uVar5,uVar11 & 0xffffff00,local_88,
                  local_90);
      }
      local_98 = (uint3 *)(**(code **)**(undefined8 **)(param_1 + 0x108))
                                    (*(undefined8 **)(param_1 + 0x108),local_9c);
      uVar11 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4d);
      if (-1 < (int)(uVar11 - 1)) {
        do {
          local_2c = (uint)*local_98;
          uVar6 = local_a0;
          do {
            lVar9 = (longlong)(int)uVar6;
            if (auStack_6c[lVar9 * 2U + 1] == 0xffffffff) break;
            if (auStack_6c[lVar9 * 2] == local_2c) {
              *local_a8 = (byte)auStack_6c[lVar9 * 2U + 1];
              local_a0 = uVar6;
              goto LAB_00c2b14f;
            }
            if (uVar6 == 0) {
              uVar6 = 7;
            }
            else {
              uVar6 = uVar6 - 1;
            }
          } while (uVar6 != local_a0);
          bVar3 = FUN_00c233f0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x40),local_2c);
          *local_a8 = bVar3;
          local_a0 = local_a0 + 1 & 7;
          auStack_6c[(longlong)(int)local_a0 * 2] = local_2c;
          auStack_6c[(longlong)(int)local_a0 * 2U + 1] = (uint)bVar3;
LAB_00c2b14f:
          local_a8 = local_a8 + 1;
          local_98 = (uint3 *)((longlong)local_98 + 3);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_9c = local_9c + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_004194b0(&local_78,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x40) + 8),
               &DAT_00c12750);
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x40) + 0x10);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    lVar9 = (longlong)iVar4;
    uVar1 = *(undefined1 *)(local_78 + lVar9 * 3);
    *(undefined1 *)(local_78 + lVar9 * 3) = *(undefined1 *)(local_78 + 2 + lVar9 * 3);
    *(undefined1 *)(local_78 + 2 + lVar9 * 3) = uVar1;
    local_78 = local_78 + 3;
  }
  FUN_00414480(&local_90);
  FUN_00419430(&local_78,&DAT_00c12750);
  return;
}

