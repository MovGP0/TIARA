/* Ghidra address: 00c30dd0 */
/* Ghidra symbol: FUN_00c30dd0 */


void FUN_00c30dd0(longlong param_1,char param_2,byte param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  byte *pbVar8;
  int local_140;
  byte abStack_138 [264];
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_140 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_140);
      lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_140);
      abStack_138[*(int *)(lVar6 + 4)] = *(byte *)(lVar5 + 8);
      local_140 = local_140 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_140 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),local_140);
      pbVar8 = *(byte **)(lVar5 + 0x30);
      iVar4 = (uint)*(ushort *)(lVar5 + 0x4d) * (uint)*(ushort *)(lVar5 + 0x4f);
      cVar2 = FUN_00c2a4a0(lVar5);
      if ((cVar2 == '\0') || (param_2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        bVar3 = FUN_00c2e3e0(*(undefined8 *)(lVar5 + 0x60));
        FUN_00c2e3f0(*(undefined8 *)(lVar5 + 0x60),param_3);
      }
      else {
        bVar3 = 0;
      }
      for (; 0 < iVar4; iVar4 = iVar4 + -1) {
        if ((bVar1) && (*pbVar8 == bVar3)) {
          *pbVar8 = param_3;
        }
        else {
          *pbVar8 = abStack_138[*pbVar8];
        }
        pbVar8 = pbVar8 + 1;
      }
      local_140 = local_140 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

