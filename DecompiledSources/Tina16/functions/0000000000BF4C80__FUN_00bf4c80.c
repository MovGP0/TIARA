/* Ghidra address: 00bf4c80 */
/* Ghidra symbol: FUN_00bf4c80 */


void FUN_00bf4c80(longlong param_1,undefined1 param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined8 local_f0 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_cc [16];
  int local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  uint local_ac;
  longlong local_a8 [16];
  
  uVar6 = FUN_00bf19b0(param_1,param_3,param_4);
  local_b4._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar2 = local_b4._4_4_;
  local_b4 = uVar6;
  uVar4 = FUN_00c11080(param_1,uVar2);
  if ((*(char *)(param_1 + 0x498) != '\0') &&
     (cVar3 = FUN_00be0d70(*(undefined8 *)(param_1 + 0x4a8),uVar4,&local_ac), cVar3 != '\0')) {
    FUN_00bfcf50(param_1,local_cc,uVar2);
    local_bc = param_3;
    local_b8 = param_4;
    cVar3 = FUN_004231e0(local_cc,&local_bc);
    if (cVar3 != '\0') {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x4a8) + 0x10);
      if (*(uint *)(lVar8 + 0x10) <= local_ac) {
        FUN_00594f90();
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar8 + 8) + (longlong)(int)local_ac * 0x14);
      local_e0 = *puVar1;
      uStack_d8 = puVar1[1];
      local_d0 = *(undefined4 *)(puVar1 + 2);
      if ((char)local_d0 != '\0') {
        FUN_00c00b80(param_1,local_ac,1);
        return;
      }
      FUN_00c00770(param_1,local_ac,1);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    local_f0[0] = FUN_00bf19b0(param_1,param_3,param_4);
    uVar7 = FUN_00c0ee50(param_1,local_f0);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    iVar10 = (int)(uVar7 >> 0x20);
    if (iVar10 <= iVar5) {
      FUN_00c115d0(*(undefined8 *)(param_1 + 0x5e8),uVar7 >> 0x20,local_a8);
      iVar5 = 0;
      iVar11 = 0x10;
      plVar9 = local_a8;
      do {
        lVar8 = *plVar9;
        if ((lVar8 != 0) &&
           (iVar5 = iVar5 + *(int *)(*(longlong *)(param_1 + 0x5b8) + 0x20), param_3 < iVar5))
        break;
        plVar9 = plVar9 + 1;
        iVar11 = iVar11 + -1;
        lVar8 = 0;
      } while (iVar11 != 0);
      (**(code **)(param_1 + 0x6c0))
                (*(undefined8 *)(param_1 + 0x6c8),param_1,param_2,param_3,param_4,iVar10,lVar8);
    }
  }
  return;
}

