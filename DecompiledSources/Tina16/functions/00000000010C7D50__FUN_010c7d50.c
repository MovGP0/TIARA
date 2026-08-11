/* Ghidra address: 010c7d50 */
/* Ghidra symbol: FUN_010c7d50 */


undefined8 FUN_010c7d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char *pcVar3;
  char local_78 [48];
  char local_48 [48];
  
  pcVar3 = local_48;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pcVar3 = *param_1;
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 8;
  }
  pcVar3 = local_78;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pcVar3 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = (char *)((longlong)pcVar3 + 8);
  }
  if ((local_48[0] == '\0') && (local_78[0] == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

