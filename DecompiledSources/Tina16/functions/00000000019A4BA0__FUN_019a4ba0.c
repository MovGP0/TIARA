/* Ghidra address: 019a4ba0 */
/* Ghidra symbol: FUN_019a4ba0 */


void FUN_019a4ba0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_34;
  longlong local_30;
  
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar3);
      FUN_019a49c0(auStack_68,uVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  iVar3 = *(int *)(local_30 + 0x10);
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(local_30,iVar4);
      local_34 = FUN_00b959c0(uVar1);
      if (param_2 != '\0') {
        lVar2 = (longlong)(short)local_34;
        local_34._2_2_ = (short)((uint)local_34 >> 0x10);
        lVar5 = (longlong)local_34._2_2_;
        local_48 = 0;
        local_40 = 0;
        FUN_019916f0(param_1,lVar2,lVar5,0);
      }
      FUN_01991dd0(param_1,0,(longlong)(short)local_34);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00b95360(param_1);
  return;
}

