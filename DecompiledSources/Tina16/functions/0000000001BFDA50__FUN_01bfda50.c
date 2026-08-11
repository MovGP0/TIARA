/* Ghidra address: 01bfda50 */
/* Ghidra symbol: FUN_01bfda50 */


undefined8 FUN_01bfda50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong local_10;
  
  local_10 = 0;
  FUN_004b18b0(param_1,param_2);
  FUN_01bfd990(param_1,&local_10);
  iVar4 = 0;
  if (local_10 != 0) {
    iVar4 = *(int *)(local_10 + -4);
  }
  if (iVar4 < 1) {
    uVar2 = FUN_01bfd980(param_1);
    cVar1 = FUN_004113d0(uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_01bfd980(param_1);
      iVar4 = 0;
      if (*(longlong *)(lVar3 + 0xd0) != 0) {
        iVar4 = *(int *)(*(longlong *)(lVar3 + 0xd0) + -4);
      }
      if (0 < iVar4) {
        FUN_00414ad0(param_2,*(undefined8 *)(lVar3 + 0xd0));
      }
    }
  }
  else {
    FUN_01bfd990(param_1,param_2);
  }
  FUN_00414480(&local_10);
  return param_2;
}

