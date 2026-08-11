/* Ghidra address: 01359540 */
/* Ghidra symbol: FUN_01359540 */


void FUN_01359540(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  
  if ((*(longlong *)PTR_DAT_02001d08 != 0) &&
     (cVar1 = FUN_017fea70(*(undefined8 *)PTR_DAT_02001d08), cVar1 != '\0')) {
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_00b94e60(param_1,iVar3);
        FUN_01359500(auStack_58,uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(*local_30 + 0x28))(local_30);
    if (0 < iVar4) {
      FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,local_30,0,1);
    }
    FUN_00410f20(local_30);
  }
  return;
}

