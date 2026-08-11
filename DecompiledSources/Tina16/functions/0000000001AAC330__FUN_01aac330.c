/* Ghidra address: 01aac330 */
/* Ghidra symbol: FUN_01aac330 */


void FUN_01aac330(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int local_4c;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar4 = FUN_01aa30c0(&DAT_01aa28b8,1);
  *(undefined8 *)(param_1 + 0x13a40) = uVar4;
  uVar4 = FUN_01aa30c0(&DAT_01aa28b8,1);
  *(undefined8 *)(param_1 + 0x13a48) = uVar4;
  uVar4 = FUN_01aa30c0(&DAT_01aa28b8,1);
  *(undefined8 *)(param_1 + 0x13a50) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x13a58) = uVar4;
  uVar8 = (uint)*(ushort *)(param_1 + 0x10);
  if (uVar8 != 0) {
    plVar7 = (longlong *)(param_1 + 0x18);
    do {
      lVar1 = *plVar7;
      FUN_01d03160(*(undefined8 *)(lVar1 + 0x550));
      (**(code **)(**(longlong **)(*plVar7 + 0x550) + 0x288))
                (*(longlong **)(*plVar7 + 0x550),local_40);
      iVar5 = 1;
      for (uVar9 = (uint)*(byte *)(lVar1 + 1); uVar9 != 0; uVar9 = uVar9 - 1) {
        FUN_01aa2f70(*(undefined8 *)(param_1 + 0x13a40),
                     *(undefined2 *)(lVar1 + 0x4236 + (longlong)iVar5 * 2),*plVar7);
        iVar5 = iVar5 + 1;
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x10);
  if (uVar8 != 0) {
    plVar7 = (longlong *)(param_1 + 0x18);
    do {
      pbVar2 = (byte *)*plVar7;
      FUN_01d03160(*(undefined8 *)(pbVar2 + 0x550));
      (**(code **)(**(longlong **)(*plVar7 + 0x550) + 0x288))
                (*(longlong **)(*plVar7 + 0x550),local_40);
      iVar5 = 1;
      for (uVar9 = (uint)*pbVar2; uVar9 != 0; uVar9 = uVar9 - 1) {
        FUN_01aa2f70(*(undefined8 *)(param_1 + 0x13a48),
                     *(undefined2 *)(pbVar2 + (longlong)iVar5 * 2 + 0x41f6),*plVar7);
        iVar5 = iVar5 + 1;
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x13898);
  if (uVar8 != 0) {
    puVar6 = (undefined2 *)(param_1 + 0x1389a);
    do {
      FUN_01aa3050(*(undefined8 *)(param_1 + 0x13a50),*puVar6);
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_4c = 1;
  for (uVar8 = (uint)*(ushort *)(param_1 + 2); uVar8 != 0; uVar8 = uVar8 - 1) {
    cVar3 = FUN_01aa2f00(*(undefined8 *)(param_1 + 0x13a40),local_4c);
    if ((cVar3 == '\0') &&
       (cVar3 = FUN_01aa2f00(*(undefined8 *)(param_1 + 0x13a50),local_4c), cVar3 == '\0')) {
      uVar4 = FUN_01aa3430(&DAT_01aa3348,1,0,local_4c);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x13a58),uVar4);
    }
    local_4c = local_4c + 1;
  }
  FUN_00414480(local_40);
  return;
}

