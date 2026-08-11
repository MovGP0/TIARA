/* Ghidra address: 014727e0 */
/* Ghidra symbol: FUN_014727e0 */


void FUN_014727e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x90))(*(longlong **)(param_1 + 0x728));
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4c0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
  if (iVar3 <= iVar4) {
    iVar4 = (iVar4 - iVar3) + 1;
    do {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_40,0,iVar3);
      if (local_40 != 0) {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_48,1,iVar3);
        if (local_48 != 0) {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_58,0,iVar3);
          FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_60,1,iVar3);
          in_stack_ffffffffffffff88 = local_60;
          FUN_00416cd0(&local_50,3,local_58,&LAB_01472a88,local_60);
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x78))
                    (*(longlong **)(param_1 + 0x728),local_50);
        }
      }
      uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x728));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x28))(*(longlong **)(param_1 + 0x728));
  if (0 < iVar3) {
    if (*(char *)(param_1 + 0x740) == '\0') {
      FUN_01c9c910(*(undefined8 *)PTR_DAT_02004e40,plVar1,*(undefined8 *)(param_1 + 0xb8),4);
    }
    else {
      plVar2 = (longlong *)
               FUN_00b94e60(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                            *(undefined4 *)(param_1 + 0x744));
      FUN_0149ec30(plVar2,plVar1);
      FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
      (**(code **)(*plVar2 + 0x50))
                (plVar2,*(undefined8 *)
                         (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),&local_38);
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210);
      (**(code **)(*plVar2 + 0x30))(plVar2,local_38,local_34,local_30,CONCAT44(uVar5,local_2c));
    }
  }
  FUN_00410f20(plVar1);
  FUN_00414560(&local_60,5);
  return;
}

