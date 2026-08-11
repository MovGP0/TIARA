/* Ghidra address: 00c7b790 */
/* Ghidra symbol: FUN_00c7b790 */


ulonglong FUN_00c7b790(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 in_R11;
  ulonglong uVar5;
  char local_1c [4];
  
  uVar5 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
  if (param_3 % 4 == 0) {
    *param_4 = (param_3 / 4) * 3;
    for (; 0 < param_3; param_3 = param_3 + -4) {
      iVar3 = 4;
      pcVar2 = local_1c;
      do {
        cVar1 = (&DAT_02019d94)[*param_1];
        *pcVar2 = cVar1;
        if (cVar1 == -2) {
          *param_4 = *param_4 + -1;
        }
        else if (cVar1 == -1) {
          uVar5 = 0;
          goto LAB_00c7b898;
        }
        param_1 = param_1 + 1;
        pcVar2 = pcVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *param_2 = local_1c[0] * '\x04' | (byte)local_1c[1] >> 4;
      pbVar4 = param_2 + 1;
      if ((local_1c[2] == 0xfe) || (local_1c[3] != 0xfe)) {
        if (local_1c[2] != 0xfe) {
          *pbVar4 = local_1c[1] << 4 | (byte)local_1c[2] >> 2;
          param_2[2] = local_1c[2] << 6 | local_1c[3];
          pbVar4 = param_2 + 3;
        }
      }
      else {
        *pbVar4 = local_1c[1] << 4 | (byte)local_1c[2] >> 2;
        pbVar4 = param_2 + 2;
      }
      param_2 = pbVar4;
    }
  }
  else {
    uVar5 = 0;
  }
LAB_00c7b898:
  return uVar5 & 0xffffffff;
}

