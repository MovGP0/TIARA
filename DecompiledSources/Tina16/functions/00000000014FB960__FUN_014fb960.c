/* Ghidra address: 014fb960 */
/* Ghidra symbol: FUN_014fb960 */


void FUN_014fb960(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  char local_e0 [208];
  
  cVar3 = *param_1;
  bVar1 = 1;
  if (cVar3 != '\0') {
    pcVar2 = local_e0;
    do {
      *pcVar2 = param_1[(ulonglong)bVar1 + 0x567];
      bVar1 = bVar1 + 1;
      pcVar2 = pcVar2 + 1;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  cVar3 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  if (cVar3 == '\0') {
    param_1[0x5a8] = '\x03';
  }
  else {
    param_1[0x5a8] = local_e0[0];
  }
  return;
}

