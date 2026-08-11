/* Ghidra address: 016dbd50 */
/* Ghidra symbol: FUN_016dbd50 */


undefined8 FUN_016dbd50(longlong param_1,char param_2,double param_3,longlong param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  if ((param_2 != '\x06') || (*(double *)(param_4 + 8) <= 0.0)) {
    uVar2 = 0;
  }
  else {
    dVar3 = 1.0 / *(double *)(param_4 + 8);
    dVar1 = (double)FUN_0040af10(param_3 / dVar3);
    dVar1 = dVar1 * dVar3;
    if (dVar3 <= param_3) {
      param_3 = param_3 - dVar1;
    }
    if (dVar3 <= param_3) {
      param_3 = param_3 - dVar3;
    }
    if (param_3 < 0.0) {
      param_3 = param_3 + dVar3;
    }
    dVar3 = dVar3 * 0.25;
    if (dVar3 <= param_3) {
      if (dVar3 * 3.0 <= param_3) {
        uVar2 = FUN_016da930(param_1,dVar3 * 2.0,dVar3 * 5.0,dVar3 * 2.0,param_3,
                             *(undefined8 *)(param_1 + 0x760));
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar1 + dVar3 * 5.0);
        }
      }
      else {
        uVar2 = FUN_016da930(param_1,dVar3 * 2.0,dVar3 * 3.0,dVar3 * 2.0,param_3,
                             *(undefined8 *)(param_1 + 0x760));
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar1 + dVar3 * 3.0);
        }
      }
    }
    else {
      uVar2 = FUN_016da930(param_1,dVar3 * 2.0,dVar3,dVar3 * 2.0,param_3,
                           *(undefined8 *)(param_1 + 0x760));
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar1 + dVar3);
      }
    }
  }
  return uVar2;
}

