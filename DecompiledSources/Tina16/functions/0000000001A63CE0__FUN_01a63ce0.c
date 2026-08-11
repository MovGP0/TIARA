/* Ghidra address: 01a63ce0 */
/* Ghidra symbol: FUN_01a63ce0 */


void FUN_01a63ce0(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 local_7c [12];
  undefined8 local_70;
  undefined1 local_68 [12];
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  (**(code **)(*param_1 + 0xe0))(param_1,&local_48);
  plVar9 = (longlong *)FUN_00781840();
  iVar6 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x100) + 0x28);
  cVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
  if (cVar5 != '\0') {
    local_58 = local_48;
    uStack_50 = uStack_40;
    FUN_00423b10(&local_48,4,4);
    if ((*(int *)PTR_DAT_02001bd8 < 6) || (cVar5 = FUN_00779360(plVar9), cVar5 == '\0')) {
      (**(code **)(*plVar9 + 0x140))(plVar9,local_68,2);
      cVar5 = FUN_007790b0(plVar9,local_68,9,&local_5c);
      if ((cVar5 == '\0') || (iVar7 = local_5c, local_5c == 0x1fffffff)) {
        iVar7 = -0xffffe8;
      }
      cVar5 = FUN_007790b0(plVar9,local_68,10,&local_5c);
      if ((cVar5 == '\0') || (iVar11 = local_5c, local_5c == 0x1fffffff)) {
        iVar11 = -0xffffe8;
      }
      cVar5 = FUN_007790b0(plVar9,local_68,2,&local_5c);
      if ((cVar5 == '\0') || (iVar6 = local_5c, local_5c == 0x1fffffff)) {
        iVar6 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x100) + 0x28);
      }
      FUN_00636080(param_1[0x92],iVar7,iVar11,&local_48,1);
    }
    else {
      uVar10 = FUN_005ffa40(param_1[0x92]);
      (**(code **)(*plVar9 + 0x208))(plVar9,local_7c,2);
      FUN_00778dc0(plVar9,uVar10,local_7c,&local_48,&local_58,0);
    }
    local_48 = local_58;
    uStack_40 = uStack_50;
  }
  local_48 = CONCAT44(local_48._4_4_ + 2,(int)local_48 + 2);
  FUN_005fc860(*(undefined8 *)(param_1[0x92] + 0x70),iVar6);
  iVar6 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1[0x94] + 0x90) + 0x80));
  iVar7 = FUN_01d12340(*(undefined8 *)(param_1[0x94] + 0x90));
  plVar9 = (longlong *)param_1[0x94];
  uVar1 = *(undefined1 *)((longlong)plVar9 + 0x99);
  lVar4 = plVar9[0x14];
  local_70 = (**(code **)(*plVar9 + 0xd0))(plVar9);
  lVar3 = *(longlong *)(param_1[0x94] + 0x90);
  uVar2 = *(undefined1 *)(lVar3 + 0xb9);
  uVar8 = FUN_0040c770((double)iVar6 * (double)*(float *)(param_1 + 0x95));
  FUN_005fce30(*(undefined8 *)(lVar3 + 0x80),uVar8);
  uVar8 = FUN_0040c770((double)iVar7 * (double)*(float *)(param_1 + 0x95));
  FUN_01d12350(*(undefined8 *)(param_1[0x94] + 0x90),uVar8);
  plVar9 = (longlong *)param_1[0x94];
  *(undefined1 *)(plVar9[0x12] + 0xb9) = 0;
  *(undefined1 *)((longlong)plVar9 + 0x99) = 0;
  *(undefined1 *)(plVar9 + 0x14) = 0;
  (**(code **)(*plVar9 + 200))(plVar9,&local_48);
  (**(code **)(*(longlong *)param_1[0x94] + 0x70))((longlong *)param_1[0x94],param_1[0x92]);
  FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1[0x94] + 0x90) + 0x80),iVar6);
  FUN_01d12350(*(undefined8 *)(param_1[0x94] + 0x90),iVar7);
  plVar9 = (longlong *)param_1[0x94];
  *(undefined1 *)(plVar9[0x12] + 0xb9) = uVar2;
  *(undefined1 *)((longlong)plVar9 + 0x99) = uVar1;
  *(char *)(plVar9 + 0x14) = (char)lVar4;
  (**(code **)(*plVar9 + 200))(plVar9,&local_70);
  return;
}

