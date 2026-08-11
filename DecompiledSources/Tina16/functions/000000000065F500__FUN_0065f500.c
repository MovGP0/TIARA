/* Ghidra address: 0065f500 */
/* Ghidra symbol: FUN_0065f500 */


void FUN_0065f500(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 local_80 [2];
  undefined8 *local_70;
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_80[0] = 0;
  (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
  plVar3 = (longlong *)FUN_00781840();
  iVar8 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x100) + 0x28);
  cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if (cVar1 != '\0') {
    local_48 = local_38;
    uStack_40 = uStack_30;
    FUN_00423b10(&local_38,4,4);
    if ((*(int *)PTR_DAT_02001bd8 < 6) || (cVar1 = FUN_00779360(plVar3), cVar1 == '\0')) {
      (**(code **)(*plVar3 + 0x140))(plVar3,local_58,2);
      cVar1 = FUN_007790b0(plVar3,local_58,9,&local_4c);
      if ((cVar1 == '\0') || (iVar6 = local_4c, local_4c == 0x1fffffff)) {
        iVar6 = -0xffffe8;
      }
      cVar1 = FUN_007790b0(plVar3,local_58,10,&local_4c);
      if ((cVar1 == '\0') || (iVar7 = local_4c, local_4c == 0x1fffffff)) {
        iVar7 = -0xffffe8;
      }
      cVar1 = FUN_007790b0(plVar3,local_58,2,&local_4c);
      if ((cVar1 == '\0') || (iVar8 = local_4c, local_4c == 0x1fffffff)) {
        iVar8 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x100) + 0x28);
      }
      uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff68 >> 8),1);
      FUN_00636080(param_1[0x92],iVar6,iVar7,&local_38,uVar4);
      uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      uVar4 = FUN_005ffa40(param_1[0x92]);
      (**(code **)(*plVar3 + 0x208))(plVar3,local_64,2);
      puVar9 = &local_48;
      local_70 = puVar9;
      FUN_00778dc0(plVar3,uVar4,local_64,&local_38,puVar9,0);
      uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
    }
    local_38 = local_48;
    uStack_30 = uStack_40;
  }
  local_38 = CONCAT44(local_38._4_4_ + 2,(int)local_38 + 2);
  FUN_005fc860(*(undefined8 *)(param_1[0x92] + 0x70),iVar8);
  uVar5 = FUN_005ffa40(param_1[0x92]);
  FUN_0064dd90(param_1,local_80);
  uVar4 = local_80[0];
  uVar2 = FUN_00652100(param_1);
  uVar4 = FUN_00416740(uVar4);
  thunk_FUN_041a24be(uVar5,uVar4,0xffffffff,&local_38,CONCAT44(uVar10,uVar2) | 0x810);
  FUN_00414480(local_80);
  return;
}

