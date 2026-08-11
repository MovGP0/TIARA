/* Ghidra address: 01aa55f0 */
/* Ghidra symbol: FUN_01aa55f0 */


void FUN_01aa55f0(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  char local_e0 [100];
  char local_7c [108];
  
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
  if (param_1[0x563] != '\0') {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_e0,1);
  }
  if (param_1[0x564] == '\0') {
    if (local_e0[1] == '\x01') {
      param_1[0x5a8] = local_e0[0];
    }
  }
  else {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_7c,2);
    param_1[0x5a8] = local_7c[0];
  }
  return;
}

