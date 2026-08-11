/* Ghidra address: 013b3cb0 */
/* Ghidra symbol: FUN_013b3cb0 */


undefined4 FUN_013b3cb0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_2b8;
  char local_2b7 [295];
  byte local_190 [368];
  
  pcVar4 = &local_2b8;
  for (lVar2 = 0x52; param_2 = param_2 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pcVar4 = *param_2;
    pcVar4 = pcVar4 + 8;
  }
  iVar1 = FUN_00414f50(local_190,param_1 + 0x20,(ulonglong)local_190[0] + 1);
  if ((iVar1 == 0) && (local_2b8 == '\x03')) {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  if ((char)uVar3 == '\0') {
    FUN_00414480(*(undefined8 *)(param_1 + 0x160));
  }
  else {
    FUN_004169a0(*(undefined8 *)(param_1 + 0x160),local_2b7);
  }
  return uVar3;
}

