/* Ghidra address: 019ad890 */
/* Ghidra symbol: FUN_019ad890 */


void FUN_019ad890(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_019ad810(auStack_58,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
  if (0 < iVar3) {
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,local_30,0,1);
  }
  FUN_00410f20(local_30);
  return;
}

