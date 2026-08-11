/* Ghidra address: 00b69770 */
/* Ghidra symbol: FUN_00b69770 */


int FUN_00b69770(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  char local_1c [4];
  
  iVar5 = 0;
  iVar6 = 0;
  iVar3 = 0;
  param_3 = param_3 / 4;
  if (0 < param_3) {
    do {
      iVar3 = 4;
      pcVar2 = local_1c;
      do {
        bVar1 = *(byte *)(param_1 + iVar5);
        uVar4 = (ulonglong)bVar1;
        if (uVar4 < 0x3e) {
          if (uVar4 == 0x3d) {
            *pcVar2 = -1;
          }
          else if (uVar4 == 0x2b) {
            *pcVar2 = '>';
          }
          else if (uVar4 == 0x2f) {
            *pcVar2 = '?';
          }
          else if (uVar4 - 0x30 < 10) {
            *pcVar2 = bVar1 + 4;
          }
        }
        else if (uVar4 - 0x41 < 0x1a) {
          *pcVar2 = bVar1 + 0xbf;
        }
        else if (uVar4 - 0x61 < 0x1a) {
          *pcVar2 = bVar1 + 0xb9;
        }
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(byte *)(param_2 + iVar6) = local_1c[0] * '\x04' | (byte)local_1c[1] >> 4;
      iVar3 = iVar6 + 1;
      if ((local_1c[2] == 0xff) || (local_1c[3] != 0xff)) {
        if (local_1c[2] != 0xff) {
          *(byte *)(param_2 + (iVar6 + 1)) = local_1c[1] << 4 | (byte)local_1c[2] >> 2;
          *(char *)(param_2 + (iVar6 + 2)) = local_1c[2] << 6 | local_1c[3];
          iVar3 = iVar6 + 3;
          iVar6 = iVar6 + 2;
        }
      }
      else {
        *(byte *)(param_2 + (iVar6 + 1)) = local_1c[1] << 4 | (byte)local_1c[2] >> 2;
        iVar3 = iVar6 + 2;
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar6 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return iVar3;
}

