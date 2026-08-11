/* Ghidra address: 009e3910 */
/* Ghidra symbol: FUN_009e3910 */


int FUN_009e3910(undefined8 param_1,byte *param_2,byte *param_3,int param_4,int param_5,
                char *param_6)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_3;
  pbVar1 = param_2 + param_4;
  *param_3 = param_6[1];
  do {
    while( true ) {
      while( true ) {
        cVar3 = *param_6;
        iVar2 = (int)param_3;
        if (cVar3 != '\0') break;
        do {
          if (param_2 == pbVar1) {
            param_6[1] = *param_3;
            return iVar2 - iVar7;
          }
          iVar6 = *param_2 - 0x2b;
          if ((iVar6 < 0) || (0x4f < iVar6)) {
            cVar3 = -1;
          }
          else {
            cVar3 = (&DAT_01e43000)[iVar6];
          }
          param_2 = param_2 + param_5;
        } while (cVar3 < '\0');
        *param_3 = cVar3 * '\x04';
        *param_6 = '\x01';
      }
      if (cVar3 == '\x01') break;
      if (cVar3 == '\x02') {
        do {
          if (param_2 == pbVar1) {
            param_6[1] = *param_3;
            return iVar2 - iVar7;
          }
          iVar6 = *param_2 - 0x2b;
          if ((iVar6 < 0) || (0x4f < iVar6)) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(char)(&DAT_01e43000)[iVar6];
          }
          param_2 = param_2 + param_5;
        } while ((int)uVar5 < 0);
        *param_3 = *param_3 | (byte)((uVar5 & 0x3c) >> 2);
        param_3 = param_3 + 1;
        *param_3 = (byte)((uVar5 & 0xffffff03) << 6);
        *param_6 = '\x03';
      }
      else if (cVar3 == '\x03') {
        do {
          if (param_2 == pbVar1) {
            param_6[1] = *param_3;
            return iVar2 - iVar7;
          }
          iVar6 = *param_2 - 0x2b;
          if ((iVar6 < 0) || (0x4f < iVar6)) {
            bVar4 = 0xff;
          }
          else {
            bVar4 = (&DAT_01e43000)[iVar6];
          }
          param_2 = param_2 + param_5;
        } while ((char)bVar4 < '\0');
        *param_3 = *param_3 | bVar4 & 0x3f;
        param_3 = param_3 + 1;
        *param_6 = '\0';
      }
    }
    do {
      if (param_2 == pbVar1) {
        param_6[1] = *param_3;
        return iVar2 - iVar7;
      }
      iVar6 = *param_2 - 0x2b;
      if ((iVar6 < 0) || (0x4f < iVar6)) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(char)(&DAT_01e43000)[iVar6];
      }
      param_2 = param_2 + param_5;
    } while ((int)uVar5 < 0);
    *param_3 = *param_3 | (byte)((uVar5 & 0x30) >> 4);
    param_3 = param_3 + 1;
    *param_3 = (byte)((uVar5 & 0xffffff0f) << 4);
    *param_6 = '\x02';
  } while( true );
}

