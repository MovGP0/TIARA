/* Ghidra address: 00b114b0 */
/* Ghidra symbol: FUN_00b114b0 */


void FUN_00b114b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*(char *)(param_1 + 0x619) == '\0') {
    cVar1 = FUN_0065be20(param_1);
    if (((cVar1 != '\0') && (*(char *)(param_1 + 0x391) != '\0')) &&
       ((*(byte *)(param_1 + 0x609) & 2) != 0)) {
      *(undefined1 *)(param_1 + 0x619) = 1;
      iVar2 = FUN_00848220(param_1,0);
      iVar3 = FUN_00848220(param_1,1);
      iVar4 = FUN_0064d0b0(param_1);
      if (iVar2 + iVar3 != iVar4 + -2) {
        if ((*(byte *)(param_1 + 0x609) & 4) == 0) {
          iVar2 = FUN_0064d0b0(param_1);
          FUN_00848460(param_1,0,(longlong)(iVar2 + -2) / 2 & 0xffffffff);
          iVar2 = FUN_00848220(param_1,0);
          iVar3 = FUN_0064d0b0(param_1);
          FUN_00848460(param_1,1,iVar2 + (iVar3 + -2) % 2);
        }
        else {
          iVar2 = FUN_0064d0b0(param_1);
          iVar3 = FUN_00848220(param_1,0);
          FUN_00848460(param_1,1,(iVar2 - iVar3) + -2);
        }
      }
      *(undefined1 *)(param_1 + 0x619) = 0;
    }
  }
  return;
}

