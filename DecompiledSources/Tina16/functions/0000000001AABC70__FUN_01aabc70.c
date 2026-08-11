/* Ghidra address: 01aabc70 */
/* Ghidra symbol: FUN_01aabc70 */


void FUN_01aabc70(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_2c;
  
  plVar6 = (longlong *)FUN_01cafae0(&DAT_01caee50,1,local_44,1,0);
  uVar14 = (uint)*(ushort *)(param_1 + 0x10);
  local_48 = 1;
  if (uVar14 != 0) {
    plVar11 = (longlong *)(param_1 + 0x18);
    do {
      lVar9 = *plVar11;
      FUN_01aa8090(param_1,local_48);
      local_40 = 1;
      for (uVar15 = (uint)*(byte *)(lVar9 + 1); uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar5 = (uint)*(ushort *)(lVar9 + 0x4236 + (longlong)local_40 * 2);
        *(uint *)(plVar6 + 1) = uVar5;
        cVar4 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x13a30),plVar6,&local_2c);
        if (cVar4 == '\0') {
          FUN_01cafc50(*(undefined8 *)(param_1 + 0x13a30),uVar5,0,1);
        }
        else {
          lVar7 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_2c);
          *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
        }
        lVar7 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_2c);
        plVar2 = *(longlong **)(lVar7 + 0x20);
        uVar8 = FUN_01cafa10(&DAT_01caec78,1,local_48,local_40,0);
        (**(code **)(*plVar2 + 0x50))(plVar2,uVar8);
        local_40 = local_40 + 1;
      }
      local_48 = local_48 + 1;
      plVar11 = plVar11 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  iVar10 = 1;
  uVar14 = (uint)*(byte *)(param_1 + 0x13898);
  if (uVar14 != 0) {
    puVar12 = (ushort *)(param_1 + 0x1389a);
    do {
      uVar1 = *puVar12;
      *(uint *)(plVar6 + 1) = (uint)uVar1;
      cVar4 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x13a30),plVar6,&local_2c);
      if (cVar4 == '\0') {
        FUN_01cafc50(*(undefined8 *)(param_1 + 0x13a30),(uint)uVar1,1,0);
      }
      else {
        lVar9 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_2c);
        *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
      }
      lVar9 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_2c);
      plVar11 = *(longlong **)(lVar9 + 0x20);
      uVar8 = FUN_01cafa10(&DAT_01caec78,1,0,0,iVar10);
      (**(code **)(*plVar11 + 0x50))(plVar11,uVar8);
      iVar10 = iVar10 + 1;
      puVar12 = puVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar14 = (uint)*(ushort *)(param_1 + 0x10);
  local_48 = 1;
  if (uVar14 != 0) {
    puVar13 = (undefined8 *)(param_1 + 0x18);
    do {
      pbVar3 = (byte *)*puVar13;
      FUN_01aa8090(param_1,local_48);
      local_3c = 1;
      for (uVar15 = (uint)*pbVar3; uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar5 = (uint)*(ushort *)(pbVar3 + (longlong)local_3c * 2 + 0x41f6);
        *(uint *)(plVar6 + 1) = uVar5;
        cVar4 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x13a30),plVar6,&local_2c);
        if (cVar4 == '\0') {
          FUN_01cafc50(*(undefined8 *)(param_1 + 0x13a30),uVar5,1,0);
        }
        lVar9 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_2c);
        plVar11 = *(longlong **)(lVar9 + 0x18);
        uVar8 = FUN_01cafa10(&DAT_01caec78,1,local_48,local_3c,0);
        (**(code **)(*plVar11 + 0x50))(plVar11,uVar8);
        local_3c = local_3c + 1;
      }
      local_48 = local_48 + 1;
      puVar13 = puVar13 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  (**(code **)(*plVar6 + -0x20))(plVar6,1);
  *(undefined1 *)(param_1 + 0x13a2b) = 1;
  return;
}

