/* Ghidra address: 00a3d8e0 */
/* Ghidra symbol: FUN_00a3d8e0 */


void FUN_00a3d8e0(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 local_37c;
  undefined2 local_37a;
  char local_378 [872];
  
  local_37c = 0x300;
  local_37a = 0xd8;
  cVar1 = '\0';
  pcVar5 = local_378;
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
  thunk_FUN_04123694(&local_37c);
  return;
}

