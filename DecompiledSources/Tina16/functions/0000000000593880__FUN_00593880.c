/* Ghidra address: 00593880 */
/* Ghidra symbol: FUN_00593880 */


undefined8 FUN_00593880(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 local_1c;
  char local_1b [3];
  
  local_1b[1] = *param_2 != '\0';
  pcVar4 = local_1b + 2;
  for (uVar3 = (ulonglong)(byte)local_1b[1]; param_2 = param_2 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_2;
    pcVar4 = pcVar4 + 1;
  }
  local_1c = *param_3 != '\0';
  pcVar4 = local_1b;
  for (uVar3 = (ulonglong)(byte)local_1c; param_3 = param_3 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_3;
    pcVar4 = pcVar4 + 1;
  }
  iVar1 = FUN_00414e30(local_1b + 1,&local_1c);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00414e30(local_1b + 1,&local_1c);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

