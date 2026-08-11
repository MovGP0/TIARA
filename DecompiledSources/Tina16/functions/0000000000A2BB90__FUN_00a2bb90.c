/* Ghidra address: 00a2bb90 */
/* Ghidra symbol: FUN_00a2bb90 */


undefined1 FUN_00a2bb90(undefined8 param_1,char *param_2,undefined1 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar1 = FUN_004170c0(&DAT_00a2bcf8,param_1,1);
  if (iVar1 == 0) {
    *param_3 = 2;
    FUN_00414b50(&local_28,param_1);
  }
  else {
    FUN_00416dc0(&local_20,param_1,1,iVar1 + -1);
    FUN_00416dc0(&local_28,param_1,iVar1 + 1,0x7fffffff);
    iVar1 = FUN_00416db0(local_20,&DAT_00a2bd08);
    if (iVar1 == 0) {
      *param_3 = 4;
    }
    else {
      iVar1 = FUN_00416db0(local_20,&DAT_00a2bd1c);
      if (iVar1 == 0) {
        *param_3 = 3;
      }
      else {
        *param_3 = 0;
        FUN_00414b50(&local_28,param_1);
      }
    }
  }
  cVar2 = '\0';
  puVar3 = &DAT_01e71260;
  do {
    iVar1 = FUN_00416db0(*puVar3,local_28);
    if (iVar1 == 0) {
      local_29 = 1;
      *param_2 = cVar2;
      goto LAB_00a2bcae;
    }
    cVar2 = cVar2 + '\x01';
    puVar3 = puVar3 + 1;
  } while (cVar2 != '\x0e');
  *param_2 = '\0';
  local_29 = 0;
LAB_00a2bcae:
  FUN_00414560(&local_28,2);
  return local_29;
}

