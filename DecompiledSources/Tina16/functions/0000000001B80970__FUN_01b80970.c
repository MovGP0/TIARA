/* Ghidra address: 01b80970 */
/* Ghidra symbol: FUN_01b80970 */


undefined1 FUN_01b80970(longlong param_1,char *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar3 = 0;
  *param_2 = '\0';
  FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x18));
  iVar1 = FUN_004170c0(&DAT_01b80aa4,local_20[0],1);
  if (iVar1 == 1) {
    *param_2 = '\x01';
    puVar2 = (undefined2 *)FUN_00414de0(local_20);
    *puVar2 = 0x52;
  }
  iVar1 = FUN_00416db0(local_20[0],&DAT_01b80ab4);
  if (iVar1 == 0) {
    uVar3 = 3;
  }
  else {
    iVar1 = FUN_00416db0(local_20[0],L"R180");
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    else {
      iVar1 = FUN_00416db0(local_20[0],L"R270");
      if (iVar1 == 0) {
        uVar3 = 1;
      }
    }
  }
  if (*param_2 != '\0') {
    iVar1 = FUN_00416db0(local_20[0],L"R270");
    if (iVar1 == 0) {
      uVar3 = 3;
    }
  }
  if (*param_2 != '\0') {
    iVar1 = FUN_00416db0(local_20[0],&DAT_01b80ab4);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
  }
  FUN_00414480(local_20);
  return uVar3;
}

