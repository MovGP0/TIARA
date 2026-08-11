/* Ghidra address: 01994be0 */
/* Ghidra symbol: FUN_01994be0 */


void FUN_01994be0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_24 = 0;
  local_20 = FUN_019948b0(param_1,&local_24);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_01994990(auStack_58,uVar1);
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

