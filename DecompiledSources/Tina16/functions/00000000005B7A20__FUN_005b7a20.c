/* Ghidra address: 005b7a20 */
/* Ghidra symbol: FUN_005b7a20 */


void FUN_005b7a20(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  bool bVar6;
  
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 2;
  if (**(short **)(param_1 + 0x58) == 0x21) {
    *(undefined1 *)(param_1 + 0x56) = 1;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 2;
  }
  uVar5 = 0;
  while( true ) {
    uVar3 = **(ushort **)(param_1 + 0x58);
    if (uVar3 < 0x60) {
      bVar6 = ((byte)(&DAT_005b7b78)[(longlong)(int)(uVar3 & 0x7f) >> 3] >> (uVar3 & 7) & 1) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    if ((uVar3 < 0xd800) || (0xdfff < uVar3)) {
      uVar3 = **(ushort **)(param_1 + 0x58);
      if (uVar3 == 0x2d) {
        if (uVar5 == 0) {
          FUN_005b77f0(param_1);
        }
        else {
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 2;
          uVar3 = **(ushort **)(param_1 + 0x58);
          if ((ushort)(uVar3 - 0x61) < 0x1a) {
            uVar3 = uVar3 & 0xffdf;
          }
          if (uVar5 <= uVar3) {
            sVar4 = (uVar3 - uVar5) + 1;
            uVar3 = uVar5;
            do {
              pbVar1 = (byte *)(param_1 + 0x36 + ((longlong)(ulonglong)(byte)uVar3 >> 3));
              *pbVar1 = *pbVar1 | '\x01' << ((ulonglong)(byte)uVar3 & 7);
              uVar3 = uVar3 + 1;
              sVar4 = sVar4 + -1;
            } while (sVar4 != 0);
          }
        }
      }
      else {
        if ((ushort)(uVar3 - 0x61) < 0x1a) {
          uVar3 = uVar3 & 0xffdf;
        }
        pbVar1 = (byte *)(param_1 + 0x36 + ((longlong)(ulonglong)(byte)uVar3 >> 3));
        *pbVar1 = *pbVar1 | '\x01' << ((ulonglong)(byte)uVar3 & 7);
        uVar5 = uVar3;
      }
    }
    else {
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 2;
    }
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 2;
  }
  if (**(short **)(param_1 + 0x58) == 0x5d) {
    cVar2 = FUN_0040f780(param_1 + 0x36,&DAT_005b7b84,0x20);
    if (cVar2 == '\0') goto LAB_005b7b66;
  }
  FUN_005b77f0(param_1);
LAB_005b7b66:
  FUN_005b78a0(param_1,2);
  return;
}

