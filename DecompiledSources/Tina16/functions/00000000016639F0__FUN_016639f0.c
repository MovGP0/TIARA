/* Ghidra address: 016639f0 */
/* Ghidra symbol: FUN_016639f0 */


void FUN_016639f0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = param_2;
  if (-1 < param_2 + -1) {
    do {
      iVar2 = *(int *)(param_1 + 0x13ac0) - param_2;
      iVar1 = (iVar2 + iVar3) * 8;
      iVar2 = iVar2 * 8 + iVar3;
      if (param_3 == '\0') {
        FUN_0165dfb0(param_1,0x48);
        FUN_0165dfb0(param_1,0x8b);
        FUN_0165dfb0(param_1,0x84);
        FUN_0165dfb0(param_1,0x24);
        FUN_0165e0c0(param_1,iVar1);
        FUN_0165dfb0(param_1,0x48);
        FUN_0165dfb0(param_1,9);
        FUN_0165dfb0(param_1,0xc0);
        FUN_0165dfb0(param_1,0xb2);
        FUN_0165dfb0(param_1,1);
        FUN_0165dfb0(param_1,0xf);
        FUN_0165dfb0(param_1,0x45);
        FUN_0165dfb0(param_1,0xc2);
        FUN_0165dfb0(param_1,0x88);
        FUN_0165dfb0(param_1,0x84);
        FUN_0165dfb0(param_1,0x24);
        FUN_0165e0c0(param_1,iVar2);
      }
      else {
        FUN_0165dfb0(param_1,0x48);
        FUN_0165dfb0(param_1,0xdd);
        FUN_0165dfb0(param_1,0x84);
        FUN_0165dfb0(param_1,0x24);
        FUN_0165e0c0(param_1,iVar1);
        FUN_0165dfb0(param_1,0x48);
        FUN_0165dfb0(param_1,0xb8);
        FUN_0165e150(param_1,PTR_DAT_02003d28);
        FUN_0165dfb0(param_1,0x48);
        FUN_0165dfb0(param_1,0xdc);
        FUN_0165dfb0(param_1,0x18);
        FUN_0165dfb0(param_1,0x9b);
        FUN_0165dfb0(param_1,0xdf);
        FUN_0165dfb0(param_1,0xe0);
        FUN_0165dfb0(param_1,0xdd);
        FUN_0165dfb0(param_1,0xd8);
        FUN_0165dfb0(param_1,0x9e);
        FUN_0165dfb0(param_1,0x18);
        FUN_0165dfb0(param_1,0xc0);
        FUN_0165dfb0(param_1,0xfe);
        FUN_0165dfb0(param_1,0xc0);
        FUN_0165dfb0(param_1,0x88);
        FUN_0165dfb0(param_1,0x84);
        FUN_0165dfb0(param_1,0x24);
        FUN_0165e0c0(param_1,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

