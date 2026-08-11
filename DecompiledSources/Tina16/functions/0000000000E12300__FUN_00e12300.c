/* Ghidra address: 00e12300 */
/* Ghidra symbol: FUN_00e12300 */


void FUN_00e12300(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_44;
  int local_40;
  int local_3c;
  
  local_3c = FUN_019954d0(*(undefined8 *)(param_1 + 0x20));
  iVar7 = *(int *)(param_1 + 0x10);
  local_44 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(param_1,local_44);
      cVar2 = FUN_00e121a0(lVar4);
      if (cVar2 != '\0') {
        iVar8 = *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10);
        local_40 = 0;
        if (-1 < iVar8 + -1) {
          do {
            lVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x10),local_40);
            plVar1 = *(longlong **)(lVar5 + 0x18);
            local_3c = local_3c + 1;
            uVar3 = (**(code **)(*plVar1 + 0x210))(plVar1,*(undefined4 *)(lVar5 + 8));
            FUN_01d03160(plVar1);
            uVar6 = FUN_00e11f10(&DAT_00e111e0,1,uVar3,local_3c,plVar1,*(undefined4 *)(lVar5 + 8));
            FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x8d8),uVar6);
            (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined4 *)(lVar5 + 8),local_3c,0);
            local_40 = local_40 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      local_44 = local_44 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_019954b0(*(undefined8 *)(param_1 + 0x20),local_3c);
  return;
}

