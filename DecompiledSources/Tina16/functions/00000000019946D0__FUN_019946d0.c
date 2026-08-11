/* Ghidra address: 019946d0 */
/* Ghidra symbol: FUN_019946d0 */


void FUN_019946d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [39];
  char local_31;
  longlong *local_30;
  
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_31 = '\0';
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      cVar1 = FUN_01994420(auStack_58,uVar2);
      if (cVar1 != '\0') {
        FUN_00b94e60(param_1,iVar3);
        break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  FUN_00b95360(param_1);
  iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
  if (0 < iVar3) {
    if (local_31 != '\0') {
      FUN_019ad9f0(param_1,local_30,1);
    }
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,local_30,0,1);
  }
  FUN_00410f20(local_30);
  FUN_0199ded0(param_1,0,1);
  return;
}

