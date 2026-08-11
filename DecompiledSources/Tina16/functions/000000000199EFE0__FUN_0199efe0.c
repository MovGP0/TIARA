/* Ghidra address: 0199efe0 */
/* Ghidra symbol: FUN_0199efe0 */


void FUN_0199efe0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_50 = param_1;
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = *(int *)(local_50 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(local_50,iVar2);
      FUN_0199ed70(auStack_78,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(*local_40 + 0x28))(local_40);
  if (0 < iVar3) {
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,local_40,0,1);
  }
  FUN_00410f20(local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

