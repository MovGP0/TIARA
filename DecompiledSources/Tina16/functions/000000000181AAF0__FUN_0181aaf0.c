/* Ghidra address: 0181aaf0 */
/* Ghidra symbol: FUN_0181aaf0 */


undefined8 FUN_0181aaf0(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = *param_1;
  local_30[0] = param_1[1];
  iVar2 = FUN_00808040();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_00808020(*(undefined8 *)PTR_DAT_02005950,iVar4);
      FUN_00807810(uVar3,local_48);
      cVar1 = FUN_004231e0(local_48,&local_38);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = FUN_00808020(*(undefined8 *)PTR_DAT_02005950,iVar4);
      FUN_00807810(uVar3,local_48);
      cVar1 = FUN_004231e0(local_48,local_30);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

