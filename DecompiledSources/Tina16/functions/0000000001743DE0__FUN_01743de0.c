/* Ghidra address: 01743de0 */
/* Ghidra symbol: FUN_01743de0 */


byte FUN_01743de0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  bVar3 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x488);
  }
  iVar6 = *(int *)(param_1 + 0xd0);
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      pcVar1 = (char *)(param_1 + 8 + (longlong)iVar5 * 0x30);
      if ((*pcVar1 == pcVar1[1]) ||
         ((*(char *)(param_1 + 0x19) == '\x06' &&
          ((*(char *)(param_1 + 0x19) != '\x06' ||
           (dVar7 = (double)FUN_016ed780(uVar4,6), dVar7 - *(double *)(pcVar1 + 8) <= 1e-06)))))) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      bVar3 = bVar3 | bVar2;
      if (bVar2 != 0) {
        pcVar1[1] = *pcVar1;
        *(undefined8 *)(pcVar1 + 0x10) = *(undefined8 *)(pcVar1 + 8);
        pcVar1[2] = *pcVar1;
        FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return bVar3;
}

