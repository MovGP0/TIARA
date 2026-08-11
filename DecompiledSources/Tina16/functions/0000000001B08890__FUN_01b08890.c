/* Ghidra address: 01b08890 */
/* Ghidra symbol: FUN_01b08890 */


void FUN_01b08890(longlong param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_R10;
  bool bVar4;
  
  *(byte *)(param_1 + 0x88) = param_2;
  uVar1 = 0;
  bVar2 = 0;
  do {
    if (bVar2 < 8) {
      uVar3 = (int)CONCAT71((int7)(in_R10 >> 8),1) << (bVar2 & 0x1f);
      in_R10 = (ulonglong)uVar3;
      bVar4 = ((byte)uVar3 & param_2) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 4) == 0) {
          if ((param_2 & 0x10) == 0) {
            if ((param_2 & 0x20) == 0) {
              if ((param_2 & 0x40) == 0) {
                if ((param_2 & 0x80) != 0) {
                  uVar1 = uVar1 | 0x2000;
                }
              }
              else {
                uVar1 = uVar1 | 0x1000;
              }
            }
          }
          else {
            uVar1 = uVar1 | 0x10000;
          }
        }
        else {
          uVar1 = uVar1 | 0x400;
        }
      }
      else {
        uVar1 = uVar1 | 0x200;
      }
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 != 8);
  FUN_01b0f820(*(undefined8 *)(param_1 + 0x1378),uVar1);
  return;
}

