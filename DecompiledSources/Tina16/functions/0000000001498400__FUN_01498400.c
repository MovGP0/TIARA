/* Ghidra address: 01498400 */
/* Ghidra symbol: FUN_01498400 */


void FUN_01498400(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar7;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50[0] = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),local_50);
  (**(code **)(*plVar3 + 0x78))(plVar3,local_50[0]);
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1;
  if (iVar5 <= iVar6) {
    iVar6 = (iVar6 - iVar5) + 1;
    do {
      cVar2 = FUN_014937c0(param_1,iVar5);
      if (cVar2 == '\0') {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_58,4,iVar5);
        if (local_58 != 0) {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_68,4,iVar5);
          FUN_00416cd0(&local_60,3,&DAT_01498758,local_68,&DAT_01498768);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_60);
        }
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_78,0,iVar5);
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_80,1,iVar5);
        in_stack_ffffffffffffff68 = local_80;
        FUN_00416cd0(&local_70,4,local_78,L" := ",local_80,&LAB_01498790);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_70);
      }
      uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (0 < iVar5) {
    cVar2 = FUN_0198c540(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),5,&local_3c);
    if (cVar2 == '\0') {
      FUN_01c9c910(*(undefined8 *)PTR_DAT_02004e40,plVar3,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x7f8) + 0xd0),5);
    }
    else {
      plVar4 = (longlong *)
               FUN_00b94e60(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_3c);
      FUN_0149ec30(plVar4,plVar3);
      plVar1 = *(longlong **)(*(longlong *)(plVar4[5] + 0x90) + 0x80);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x7f8) + 0xd0));
      FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
      (**(code **)(*plVar4 + 0x50))
                (plVar4,*(undefined8 *)
                         (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),&local_38);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210);
      (**(code **)(*plVar1 + 0x30))(plVar1,local_38,local_34,local_30,CONCAT44(uVar7,local_2c));
    }
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_80,6);
  FUN_00414480(local_50);
  return;
}

