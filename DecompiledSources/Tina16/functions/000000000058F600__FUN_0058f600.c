/* Ghidra address: 0058f600 */
/* Ghidra symbol: FUN_0058f600 */


undefined8 FUN_0058f600(char *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  bool bVar4;
  
  if ((byte)(*param_1 - 8U) < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (*param_1 - 8U & 0x1f) & 0x4040U
            ) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (*(int *)(param_1 + (ulonglong)(byte)param_1[1] + 2) < 5) {
      if (*param_1 == '\x0e') {
        uVar2 = 2;
      }
      else {
        pbVar3 = (byte *)((longlong)(param_1 + (ulonglong)(byte)param_1[1] + 6) +
                         (longlong)(*(int *)(param_1 + (ulonglong)(byte)param_1[1] + 6) << 4) + 4);
        bVar1 = *pbVar3;
        if ((bVar1 < 5) || ((*(ulonglong *)(pbVar3 + 0x21) & 1) == 0)) {
          if ((((bVar1 == 0) || (pbVar3 == (byte *)0xffffffffffffffff)) &&
              ((bVar1 < 2 || (pbVar3 == (byte *)0xfffffffffffffff7)))) &&
             ((bVar1 < 4 || (pbVar3 == (byte *)0xffffffffffffffe7)))) {
            uVar2 = 2;
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 1;
        }
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

