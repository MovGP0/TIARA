/* Ghidra address: 00c2a8a0 */
/* Ghidra symbol: FUN_00c2a8a0 */


void FUN_00c2a8a0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  longlong local_58;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_48 = 0;
  local_40 = 0;
  local_58 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x30);
  cVar5 = FUN_00609ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x10));
  if (cVar5 == '\0') {
    uVar7 = FUN_00609e10(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x10));
    uVar7 = FUN_005ffa40(uVar7);
    FUN_00c231b0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x40),uVar7);
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
    uVar7 = (**(code **)(*plVar2 + 0x50))(plVar2);
    FUN_00c23020(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x40),uVar7);
  }
  uVar11 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4f);
  local_4c = 0;
  if (-1 < (int)(uVar11 - 1)) {
    do {
      if ((local_4c & 0x1f) == 0) {
        uVar6 = thunk_FUN_03f3ed25(local_4c,100,
                                   *(undefined2 *)(*(longlong *)(param_1 + 0x140) + 0x4f));
        uVar12 = 0;
        FUN_004238d0(local_38,0,0,0,0);
        FUN_0041ddd0(&local_40,PTR_PTR_02003090);
        uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 8);
        pcVar8 = (code *)FUN_00411550(uVar7,0xfffd);
        (*pcVar8)(uVar7,*(undefined8 *)(param_1 + 0x140),1,uVar6,uVar12 & 0xffffff00,local_38,
                  local_40);
      }
      uVar7 = (**(code **)**(undefined8 **)(param_1 + 0x108))
                        (*(undefined8 **)(param_1 + 0x108),local_4c);
      FUN_00409a70(uVar7,local_58,*(undefined2 *)(*(longlong *)(param_1 + 0x140) + 0x4d));
      local_58 = local_58 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4d);
      local_4c = local_4c + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x40);
  if (*(int *)(lVar3 + 0x10) < 0x100) {
    bVar1 = *(byte *)(lVar3 + 0x10);
    pbVar10 = *(byte **)(*(longlong *)(param_1 + 0x140) + 0x30);
    bVar4 = false;
    for (iVar9 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x38); 0 < iVar9; iVar9 = iVar9 + -1) {
      if (bVar1 <= *pbVar10) {
        *pbVar10 = 0;
        bVar4 = true;
      }
      pbVar10 = pbVar10 + 1;
    }
    if (bVar4) {
      FUN_0041ddd0(&local_48,PTR_PTR_02002850);
      FUN_00c1a780(*(undefined8 *)(param_1 + 0x140),1,local_48);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

