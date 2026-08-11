/* Ghidra address: 00c2ab60 */
/* Ghidra symbol: FUN_00c2ab60 */


void FUN_00c2ab60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *local_50;
  uint local_44;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_40 = 0;
  local_50 = *(byte **)(*(longlong *)(param_1 + 0x140) + 0x30);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
  uVar4 = (**(code **)(*plVar1 + 0x50))(plVar1);
  FUN_00c23020(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x40),uVar4);
  uVar7 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4f);
  local_44 = 0;
  if (-1 < (int)(uVar7 - 1)) {
    do {
      if ((local_44 & 0x1f) == 0) {
        uVar3 = thunk_FUN_03f3ed25(local_44,100,
                                   *(undefined2 *)(*(longlong *)(param_1 + 0x140) + 0x4f));
        uVar8 = 0;
        FUN_004238d0(local_38,0,0,0,0);
        FUN_0041ddd0(&local_40,PTR_PTR_02003090);
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 8);
        pcVar5 = (code *)FUN_00411550(uVar4,0xfffd);
        (*pcVar5)(uVar4,*(undefined8 *)(param_1 + 0x140),1,uVar3,uVar8 & 0xffffff00,local_38,
                  local_40);
      }
      pbVar6 = (byte *)(**(code **)**(undefined8 **)(param_1 + 0x108))
                                 (*(undefined8 **)(param_1 + 0x108));
      uVar8 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4d);
      bVar2 = false;
      if (-1 < (int)(uVar8 - 1)) {
        do {
          if (bVar2) {
            *local_50 = *pbVar6 & 0xf;
            pbVar6 = pbVar6 + 1;
          }
          else {
            *local_50 = *pbVar6 >> 4;
          }
          local_50 = local_50 + 1;
          bVar2 = (bool)(bVar2 ^ 1);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      local_44 = local_44 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_00414480(&local_40);
  return;
}

