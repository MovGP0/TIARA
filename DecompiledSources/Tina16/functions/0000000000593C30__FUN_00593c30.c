/* Ghidra address: 00593c30 */
/* Ghidra symbol: FUN_00593c30 */


void FUN_00593c30(undefined8 param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  char local_19;
  
  cVar1 = *param_2;
  pcVar3 = &local_19;
  for (uVar2 = (ulonglong)(cVar1 != '\0'); param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar3 = *param_2;
    pcVar3 = pcVar3 + 1;
  }
  FUN_00525420(&local_19,(ulonglong)(cVar1 != '\0'),0);
  return;
}

