/* Ghidra address: 016db710 */
/* Ghidra symbol: FUN_016db710 */


undefined8 FUN_016db710(longlong param_1,char param_2,double param_3,longlong param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((param_2 != '\x06') || (*(double *)(param_4 + 8) <= 0.0)) {
    uVar1 = 0;
  }
  else {
    dVar4 = 1.0 / *(double *)(param_4 + 8);
    uVar1 = FUN_00b90650(*(undefined8 *)(param_4 + 0x10),dVar4 / 2.0);
    dVar2 = (double)FUN_00b90620(uVar1,0);
    dVar3 = (double)FUN_0040af10(param_3 / dVar4);
    dVar3 = dVar3 * dVar4;
    if (dVar4 <= param_3) {
      param_3 = param_3 - dVar3;
    }
    if (dVar4 <= param_3) {
      param_3 = param_3 - dVar4;
    }
    if (param_3 < 0.0) {
      param_3 = param_3 + dVar4;
    }
    dVar4 = dVar4 * 0.5;
    if (dVar2 <= 0.0) {
      if (dVar4 <= param_3) {
        uVar1 = FUN_016da930(param_1,dVar4,dVar4 * 2.0,dVar4,param_3,
                             *(undefined8 *)(param_1 + 0x760));
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar4 * 2.0);
        }
      }
      else {
        uVar1 = FUN_016da930(param_1,dVar4,dVar4,dVar4,param_3,*(undefined8 *)(param_1 + 0x760));
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar4);
        }
      }
    }
    else if (dVar2 <= param_3) {
      if (dVar4 - dVar2 <= param_3) {
        if (dVar4 + dVar2 <= param_3) {
          if (dVar4 * 2.0 - dVar2 <= param_3) {
            uVar1 = FUN_016da930(param_1,dVar2 * 2.0,dVar4 * 2.0 + dVar2,dVar4 - dVar2 * 2.0,param_3
                                 ,*(undefined8 *)(param_1 + 0x760));
            if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
              FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar4 * 2.0 + dVar2);
            }
          }
          else {
            uVar1 = FUN_016da930(param_1,dVar4 - dVar2 * 2.0,dVar4 * 2.0 - dVar2,dVar2 * 2.0,param_3
                                 ,*(undefined8 *)(param_1 + 0x760));
            if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
              FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),(dVar3 + dVar4 * 2.0) - dVar2);
            }
          }
        }
        else {
          uVar1 = FUN_016da930(param_1,dVar2 * 2.0,dVar4 + dVar2,dVar4 - dVar2 * 2.0,param_3,
                               *(undefined8 *)(param_1 + 0x760));
          if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
            FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar4 + dVar2);
          }
        }
      }
      else {
        uVar1 = FUN_016da930(param_1,dVar4 - dVar2 * 2.0,dVar4 - dVar2,dVar2 * 2.0,param_3,
                             *(undefined8 *)(param_1 + 0x760));
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),(dVar3 + dVar4) - dVar2);
        }
      }
    }
    else {
      uVar1 = FUN_016da930(param_1,dVar2 * 2.0,dVar2,dVar4 - dVar2 * 2.0,param_3,
                           *(undefined8 *)(param_1 + 0x760));
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar2);
      }
    }
  }
  return uVar1;
}

