/* Ghidra address: 01aadac0 */
/* Ghidra symbol: FUN_01aadac0 */


void FUN_01aadac0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_48 = 0;
  cVar8 = *(char *)(param_1 + 0x198fa);
  if (cVar8 != '\0') {
    local_50 = (undefined8 *)(param_1 + 0x198fc);
    do {
      uVar3 = *local_50;
      local_40._0_2_ = (ushort)uVar3;
      local_40._2_1_ = (byte)((ulonglong)uVar3 >> 0x10);
      bVar6 = local_40._2_1_;
      local_40._3_1_ = (char)((ulonglong)uVar3 >> 0x18);
      if (local_40._3_1_ == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x10 + (longlong)(int)(uint)(ushort)local_40 * 8);
        plVar5 = *(longlong **)(lVar4 + 0x550);
        local_40 = uVar3;
        (**(code **)(*plVar5 + 0x288))(plVar5,&local_48);
        if (local_48 == 0) {
          FUN_004169a0(&local_48,(longlong)plVar5 + 0xfe);
        }
        lVar4 = lVar4 + -0x1e0 + (longlong)(int)(uint)bVar6 * 0x788;
        iVar10 = *(byte *)(lVar4 + 1) - 1;
        iVar7 = 1;
        if (0 < iVar10) {
          do {
            puVar1 = (undefined8 *)(lVar4 + -0x10 + (longlong)iVar7 * 0x18);
            puVar2 = (undefined8 *)(lVar4 + -0x10 + (longlong)(iVar7 + 1) * 0x18);
            *puVar1 = *puVar2;
            puVar1[1] = puVar2[1];
            puVar1[2] = puVar2[2];
            iVar7 = iVar7 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        *(char *)(lVar4 + 1) = *(char *)(lVar4 + 1) + -1;
        uVar3 = local_40;
      }
      local_40 = uVar3;
      local_50 = local_50 + 1;
      cVar8 = cVar8 + -1;
    } while (cVar8 != '\0');
  }
  iVar7 = 1;
  for (uVar9 = (uint)*(ushort *)(param_1 + 0x10); uVar9 != 0; uVar9 = uVar9 - 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar7 * 8) != 0) {
      FUN_014f9600(*(undefined8 *)(*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar7 * 8));
    }
    iVar7 = iVar7 + 1;
  }
  FUN_00414480(&local_48);
  return;
}

