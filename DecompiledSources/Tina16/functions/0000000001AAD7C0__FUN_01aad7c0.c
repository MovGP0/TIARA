/* Ghidra address: 01aad7c0 */
/* Ghidra symbol: FUN_01aad7c0 */


void FUN_01aad7c0(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_4c;
  longlong local_48;
  undefined4 local_3e;
  ushort local_3a;
  
  uVar2 = FUN_004095c0((ulonglong)(ushort)param_1[1] << 3);
  *(undefined8 *)(param_1 + 0xce1c) = uVar2;
  *param_1 = param_1[1];
  local_4c = 1;
  for (uVar6 = (uint)(ushort)param_1[1]; uVar6 != 0; uVar6 = uVar6 - 1) {
    cVar1 = FUN_01cafc90(*(undefined8 *)(param_1 + 0x9d18),local_4c,&local_48);
    if (cVar1 == '\0') {
      local_3e = 0;
      local_3a = local_3a & 0xff00;
      puVar3 = (undefined4 *)FUN_004095c0(6);
      *(undefined4 **)(*(longlong *)(param_1 + 0xce1c) + -8 + (longlong)local_4c * 8) = puVar3;
      *puVar3 = local_3e;
      *(ushort *)(puVar3 + 1) = local_3a;
    }
    else {
      uVar2 = FUN_004095c0((longlong)(*(int *)(local_48 + 0x10) * 6));
      *(undefined8 *)(*(longlong *)(param_1 + 0xce1c) + -8 + (longlong)local_4c * 8) = uVar2;
      iVar7 = *(int *)(local_48 + 0x10);
      iVar5 = 0;
      if (-1 < iVar7 + -1) {
        do {
          local_3e = CONCAT22(local_3e._2_2_,*(undefined2 *)(local_48 + 0x10));
          lVar4 = FUN_01d347d0(local_48,iVar5);
          local_3e = CONCAT22(*(undefined2 *)(lVar4 + 8),(undefined2)local_3e);
          lVar4 = FUN_01d347d0(local_48,iVar5);
          local_3a = CONCAT11(local_3a._1_1_,*(undefined1 *)(lVar4 + 0xc));
          puVar3 = (undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0xce1c) + -8 + (longlong)local_4c * 8) +
                    -6 + (longlong)(iVar5 + 1) * 6);
          *puVar3 = local_3e;
          *(ushort *)(puVar3 + 1) = local_3a;
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    local_4c = local_4c + 1;
  }
  return;
}

