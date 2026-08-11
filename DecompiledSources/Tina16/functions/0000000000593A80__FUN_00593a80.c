/* Ghidra address: 00593a80 */
/* Ghidra symbol: FUN_00593a80 */


bool FUN_00593a80(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 local_1c;
  char local_1b [3];
  
  local_1b[1] = *param_2 != '\0';
  pcVar3 = local_1b + 2;
  for (uVar2 = (ulonglong)(byte)local_1b[1]; param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar3 = *param_2;
    pcVar3 = pcVar3 + 1;
  }
  local_1c = *param_3 != '\0';
  pcVar3 = local_1b;
  for (uVar2 = (ulonglong)(byte)local_1c; param_3 = param_3 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar3 = *param_3;
    pcVar3 = pcVar3 + 1;
  }
  iVar1 = FUN_00414f50(local_1b + 1,&local_1c,(ulonglong)(byte)local_1b[1] + 1);
  return iVar1 == 0;
}

