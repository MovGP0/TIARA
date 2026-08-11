/* Ghidra address: 013b3dd0 */
/* Ghidra symbol: FUN_013b3dd0 */


undefined8 FUN_013b3dd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  char local_2b8;
  byte local_2b7 [663];
  
  pcVar4 = &local_2b8;
  for (lVar3 = 0x52; param_2 = param_2 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pcVar4 = *param_2;
    pcVar4 = pcVar4 + 8;
  }
  iVar1 = FUN_00414f50(local_2b7,param_1 + 0x20,(ulonglong)local_2b7[0] + 1);
  if ((iVar1 == 0) && (local_2b8 == *(char *)(param_1 + 0x160))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

