/* Ghidra address: 01d36c80 */
/* Ghidra symbol: FUN_01d36c80 */


short FUN_01d36c80(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  short sVar5;
  
  sVar5 = 0;
  lVar3 = FUN_01d3a780(DAT_03567a70,param_1);
  uVar2 = *(undefined4 *)(lVar3 + 0x9e);
  if (param_2 <= param_3) {
    iVar4 = (param_3 - param_2) + 1;
    do {
      lVar3 = FUN_01d3a410(DAT_03567aa8,
                           CONCAT22((short)((uint)uVar2 >> 0x10),(short)uVar2 + (short)param_2));
      bVar1 = *(byte *)(lVar3 + 0x33);
      if (bVar1 < 0xc) {
        if (bVar1 == 0xb) {
          sVar5 = sVar5 + 0x58;
        }
        else if (bVar1 < 7) {
          if (bVar1 == 6) {
            sVar5 = sVar5 + 0x28;
          }
          else if (bVar1 < 4) {
            if (bVar1 == 3) {
              sVar5 = sVar5 + 0x10;
            }
            else if (bVar1 == 1) {
              sVar5 = sVar5 + 0x1f;
            }
            else if (bVar1 == 2) {
              sVar5 = sVar5 + 2;
            }
          }
          else if (bVar1 == 4) {
            sVar5 = sVar5 + 0x140;
          }
          else if (bVar1 == 5) {
            sVar5 = sVar5 + 0x21;
          }
        }
        else if (bVar1 == 7) {
          sVar5 = sVar5 + 0x150;
        }
        else if (bVar1 == 8) {
          sVar5 = sVar5 + 1;
        }
        else if (bVar1 == 9) {
          sVar5 = sVar5 + 0x25;
        }
        else if (bVar1 == 10) {
          sVar5 = sVar5 + 0x20;
        }
      }
      else if (bVar1 < 0x11) {
        if (bVar1 == 0x10) {
          sVar5 = sVar5 + 8;
        }
        else if (bVar1 == 0xc) {
          sVar5 = sVar5 + 0x10;
        }
        else if (bVar1 == 0xd) {
          sVar5 = sVar5 + 0x18;
        }
        else if (bVar1 == 0xe) {
          sVar5 = sVar5 + 0x18;
        }
        else if (bVar1 == 0xf) {
          sVar5 = sVar5 + 0x18;
        }
      }
      else if (bVar1 == 0x11) {
        sVar5 = sVar5 + 8;
      }
      else if (bVar1 == 0x12) {
        sVar5 = sVar5 + 0x48;
      }
      else if (bVar1 == 0x13) {
        sVar5 = sVar5 + 0xc;
      }
      else if (bVar1 == 0x14) {
        sVar5 = sVar5 + 0x58;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return sVar5;
}

