/* Ghidra address: 00f2e5f0 */
/* Ghidra symbol: FUN_00f2e5f0 */


void FUN_00f2e5f0(longlong param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
  *param_3 = 1;
  *param_4 = 1;
  for (; (pbVar2 <= *(byte **)(param_1 + 0x18) && (0 < param_2)); param_2 = param_2 - iVar3) {
    bVar1 = *pbVar2;
    if ((bVar1 & 0x80) == 0) {
      iVar3 = 1;
      if ((*pbVar2 == 0xd) || (*pbVar2 == 10)) {
        *param_3 = *param_3 + 1;
        *param_4 = 0;
        if (((pbVar2[1] == 0xd) || (pbVar2[1] == 10)) && (pbVar2[1] != *pbVar2)) {
          iVar3 = 2;
        }
      }
    }
    else if ((bVar1 & 0xe0) == 0xc0) {
      iVar3 = 2;
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      iVar3 = 3;
    }
    else if ((bVar1 & 0xf8) == 0xf0) {
      iVar3 = 4;
    }
    else {
      iVar3 = 1;
    }
    pbVar2 = pbVar2 + iVar3;
    *param_4 = *param_4 + 1;
  }
  return;
}

