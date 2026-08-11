/* Ghidra address: 0046a510 */
/* Ghidra symbol: FUN_0046a510 */


ulonglong FUN_0046a510(char param_1,char param_2,int param_3)

{
  byte bVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (param_3 == 0xe) {
    if (DAT_01dc4368 == '\0') {
      FUN_00460280();
    }
    else if (DAT_01dc4368 == '\x01') {
      uVar2 = (ulonglong)DAT_01dc46b2;
    }
    else if (DAT_01dc4368 == '\x02') {
      if ((param_1 == '\x02') && (param_2 == '\x02')) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      uVar2 = (ulonglong)(&DAT_01dc46b2)[bVar1];
    }
  }
  else if (param_3 == 0xf) {
    if (DAT_01dc4368 == '\0') {
      FUN_00460280();
    }
    else if (DAT_01dc4368 == '\x01') {
      uVar2 = (ulonglong)DAT_01dc46b4;
    }
    else if (DAT_01dc4368 == '\x02') {
      if ((param_1 == '\x02') && (param_2 == '\x02')) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      uVar2 = (ulonglong)(&DAT_01dc46b4)[bVar1];
    }
  }
  else if (param_3 - 0x10U < 4) {
    if (DAT_01dc4369 == '\0') {
      FUN_00460280();
    }
    else if (DAT_01dc4369 == '\x01') {
      uVar2 = (ulonglong)(byte)(&DAT_01dc4696)[(longlong)param_3 * 2];
    }
    else if (DAT_01dc4369 == '\x02') {
      if (param_1 == '\x02') {
        if (param_2 == '\x02') {
          uVar2 = CONCAT71(uVar3,1);
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = CONCAT71(uVar3,2);
      }
    }
  }
  else {
    FUN_00460210();
  }
  return uVar2 & 0xffffffff;
}

