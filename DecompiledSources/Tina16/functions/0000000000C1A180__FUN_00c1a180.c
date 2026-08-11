/* Ghidra address: 00c1a180 */
/* Ghidra symbol: FUN_00c1a180 */


void FUN_00c1a180(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 local_36c;
  undefined2 local_36a;
  char local_368 [864];
  
  local_36c = 0x300;
  local_36a = 0xd8;
  cVar1 = '\0';
  pcVar5 = local_368;
  do {
    cVar2 = '\0';
    pcVar6 = pcVar5;
    do {
      cVar4 = '\0';
      pcVar3 = pcVar6;
      do {
        *pcVar3 = cVar1 * '3';
        pcVar3[1] = cVar2 * '3';
        pcVar3[2] = cVar4 * '3';
        pcVar3[3] = '\0';
        cVar4 = cVar4 + '\x01';
        pcVar3 = pcVar3 + 4;
      } while (cVar4 != '\x06');
      cVar2 = cVar2 + '\x01';
      pcVar6 = pcVar6 + 0x18;
    } while (cVar2 != '\x06');
    cVar1 = cVar1 + '\x01';
    pcVar5 = pcVar5 + 0x90;
  } while (cVar1 != '\x06');
  thunk_FUN_04123694(&local_36c);
  return;
}

