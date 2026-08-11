/* Ghidra address: 016ef6b0 */
/* Ghidra symbol: FUN_016ef6b0 */


undefined8 FUN_016ef6b0(longlong param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *in_stack_ffffffffffffff98;
  uint7 uVar12;
  longlong local_48;
  int local_3c;
  undefined8 local_30;
  
  local_30 = 0x46293e5939a08cea;
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (*(char *)(lVar4 + 0x120) == '\0') {
    if (param_2 != 0) {
      return 0x46293e5939a08cea;
    }
    local_3c = 1;
    iVar10 = *(int *)(param_1 + 0x2d8);
  }
  else {
    if (param_2 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)(param_2 + -1) * 8) +
                         0x50) + 1;
    }
    iVar10 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)param_2 * 8) + 0x50);
  }
  if (local_3c <= iVar10) {
    iVar10 = (iVar10 - local_3c) + 1;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x110) + 0x120) == '\0') {
        local_48 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_3c * 8);
      }
      else {
        local_48 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x28) +
                    (longlong)local_3c * 0x18);
      }
      if (*(ushort *)(local_48 + 0x10) != 0) {
        iVar9 = 1;
        for (uVar11 = (uint)*(ushort *)(local_48 + 0x10); uVar11 != 0; uVar11 = uVar11 - 1) {
          plVar5 = *(longlong **)(*(longlong *)(local_48 + 0x28) + -8 + (longlong)iVar9 * 8);
          (**(code **)(*plVar5 + 0x28))(plVar5,&local_30);
          iVar9 = iVar9 + 1;
        }
      }
      uVar3 = *(ushort *)(local_48 + 0xc);
      if (uVar3 != 0) {
        if (*(char *)(param_1 + 0x328) == '\0') {
          iVar9 = 1;
          for (uVar11 = (uint)uVar3; uVar11 != 0; uVar11 = uVar11 - 1) {
            uVar8 = (uint)*(ushort *)(*(longlong *)(local_48 + 0x18) + -2 + (longlong)iVar9 * 2);
            in_stack_ffffffffffffff98 = &local_30;
            FUN_016ddcd0(local_48,param_1,uVar8,uVar8 + 1,in_stack_ffffffffffffff98,1);
            iVar9 = iVar9 + 1;
          }
        }
        else {
          iVar9 = 1;
          for (uVar11 = (uint)uVar3; uVar11 != 0; uVar11 = uVar11 - 1) {
            uVar3 = *(ushort *)(*(longlong *)(local_48 + 0x18) + -2 + (longlong)iVar9 * 2);
            cVar1 = *(char *)(*(longlong *)(local_48 + 0x30) + -1 + (longlong)(int)(uint)uVar3);
            uVar12 = (uint7)((ulonglong)in_stack_ffffffffffffff98 >> 8);
            if (cVar1 == '\x02') {
              in_stack_ffffffffffffff98 = (undefined8 *)((ulonglong)uVar12 << 8);
              FUN_016de690(local_48,param_1,uVar3,&local_30,in_stack_ffffffffffffff98);
            }
            else if (cVar1 == '\x01') {
              in_stack_ffffffffffffff98 = (undefined8 *)CONCAT71(uVar12,1);
              FUN_016de690(local_48,param_1,uVar3,&local_30,in_stack_ffffffffffffff98);
            }
            else {
              in_stack_ffffffffffffff98 = &local_30;
              FUN_016ddcd0(local_48,param_1,(uint)uVar3,uVar3 + 1,in_stack_ffffffffffffff98,1);
            }
            iVar9 = iVar9 + 1;
          }
        }
      }
      if (*(char *)(local_48 + 0x115) == '\0') {
        if (*(char *)(param_1 + 0x328) == '\0') {
          iVar9 = 1;
          for (uVar11 = (uint)*(byte *)(local_48 + 4); uVar11 != 0; uVar11 = uVar11 - 1) {
            pbVar6 = *(byte **)(*(longlong *)(local_48 + 0x40) + -8 + (longlong)iVar9 * 8);
            bVar2 = *pbVar6;
            if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x2000010U) != 0) {
              in_stack_ffffffffffffff98 = &local_30;
              FUN_016ddcd0(local_48,param_1,*(int *)(pbVar6 + 0x6c),*(int *)(pbVar6 + 0x6c) + 1,
                           in_stack_ffffffffffffff98,1);
            }
            else if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x1000008U) != 0) {
              in_stack_ffffffffffffff98 = &local_30;
              FUN_016ddcd0(local_48,param_1,*(int *)(pbVar6 + 0x6c),*(int *)(pbVar6 + 0x6c) + 1,
                           in_stack_ffffffffffffff98,0);
            }
            iVar9 = iVar9 + 1;
          }
        }
        else {
          iVar9 = 1;
          for (uVar11 = (uint)*(byte *)(local_48 + 4); uVar11 != 0; uVar11 = uVar11 - 1) {
            pbVar6 = *(byte **)(*(longlong *)(local_48 + 0x40) + -8 + (longlong)iVar9 * 8);
            bVar2 = *pbVar6;
            if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x2000010U) != 0) {
              puVar7 = *(undefined1 **)(pbVar6 + 8);
              in_stack_ffffffffffffff98 = &local_30;
              FUN_016de220(local_48,param_1,*puVar7,puVar7[1],in_stack_ffffffffffffff98,1);
            }
            else if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x1000008U) != 0) {
              in_stack_ffffffffffffff98 = &local_30;
              FUN_016de220(local_48,param_1,iVar9,1,in_stack_ffffffffffffff98,0);
            }
            iVar9 = iVar9 + 1;
          }
        }
      }
      else {
        (**(code **)(local_48 + 0xc0))(*(undefined8 *)(local_48 + 0x60),local_48,param_1,&local_30);
      }
      local_3c = local_3c + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return local_30;
}

