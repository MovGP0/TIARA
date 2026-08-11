/* Ghidra address: 00c2ad60 */
/* Ghidra symbol: FUN_00c2ad60 */


void FUN_00c2ad60(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *local_50;
  uint local_44;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_40 = 0;
  local_50 = *(undefined1 **)(*(longlong *)(param_1 + 0x140) + 0x30);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
  uVar5 = (**(code **)(*plVar2 + 0x50))(plVar2);
  FUN_00c23020(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x40),uVar5);
  uVar9 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4f);
  local_44 = 0;
  if (-1 < (int)(uVar9 - 1)) {
    do {
      if ((local_44 & 0x1f) == 0) {
        uVar3 = thunk_FUN_03f3ed25(local_44,100,
                                   *(undefined2 *)(*(longlong *)(param_1 + 0x140) + 0x4f));
        uVar10 = 0;
        FUN_004238d0(local_38,0,0,0,0);
        FUN_0041ddd0(&local_40,PTR_PTR_02003090);
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 8);
        pcVar6 = (code *)FUN_00411550(uVar5,0xfffd);
        (*pcVar6)(uVar5,*(undefined8 *)(param_1 + 0x140),1,uVar3,uVar10 & 0xffffff00,local_38,
                  local_40);
      }
      pbVar7 = (byte *)(**(code **)**(undefined8 **)(param_1 + 0x108))
                                 (*(undefined8 **)(param_1 + 0x108));
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4d);
      uVar4 = (uint)uVar1;
      iVar8 = 0;
      uVar10 = 0;
      if (uVar1 != 0) {
        do {
          if (iVar8 == 0) {
            iVar8 = 8;
            uVar10 = (uint)*pbVar7;
            pbVar7 = pbVar7 + 1;
          }
          *local_50 = (char)((uVar10 & 0x80) >> 7);
          uVar10 = uVar10 * 2;
          local_50 = local_50 + 1;
          iVar8 = iVar8 + -1;
          uVar4 = uVar4 - 1;
        } while (0 < (int)uVar4);
      }
      local_44 = local_44 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_00414480(&local_40);
  return;
}

