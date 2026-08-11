/* Ghidra address: 016dcb90 */
/* Ghidra symbol: FUN_016dcb90 */


undefined8 FUN_016dcb90(longlong param_1,char param_2,double param_3,double *param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    dVar4 = param_4[1];
    dVar1 = param_4[3];
    if ((param_3 < 0.0) || (dVar4 <= param_3)) {
      if ((param_3 < dVar4) || (dVar1 <= param_3)) {
        dVar4 = ((-1.0 / param_4[4]) * dVar1 - *param_4) / (-1.0 / param_4[4]);
        if (dVar4 <= param_3) {
          uVar2 = 0x3ff0000000000000;
        }
        else {
          uVar2 = FUN_016da920(dVar4 - dVar1,*(undefined8 *)(param_1 + 0x760));
        }
      }
      else {
        dVar3 = (*param_4 + (1.0 / param_4[2]) * dVar4) / (1.0 / param_4[2]);
        if (dVar3 <= param_3) {
          uVar2 = 0x3ff0000000000000;
        }
        else {
          uVar2 = FUN_016da920(dVar3 - dVar4,*(undefined8 *)(param_1 + 0x760));
        }
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar1);
        }
      }
    }
    else {
      uVar2 = FUN_016da920(dVar4,*(undefined8 *)(param_1 + 0x760));
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

