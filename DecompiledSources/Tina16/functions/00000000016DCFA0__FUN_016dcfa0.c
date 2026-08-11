/* Ghidra address: 016dcfa0 */
/* Ghidra symbol: FUN_016dcfa0 */


undefined8 FUN_016dcfa0(longlong param_1,char param_2,double param_3,longlong param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    if (*(double *)(param_4 + 8) <= param_3) {
      dVar4 = *(double *)(param_4 + 0x28);
      param_3 = param_3 - *(double *)(param_4 + 8);
      dVar3 = (double)FUN_0040af10(param_3 / dVar4);
      if (dVar4 <= param_3) {
        param_3 = param_3 - dVar3 * dVar4;
      }
      if (dVar4 <= param_3) {
        param_3 = param_3 - dVar4;
      }
      if (param_3 < 0.0) {
        param_3 = param_3 + dVar4;
      }
      dVar3 = (double)FUN_0040af10(param_3 / dVar4);
      dVar3 = dVar3 * dVar4 + *(double *)(param_4 + 8);
      dVar4 = *(double *)(param_4 + 0x10);
      if (dVar4 <= param_3) {
        dVar4 = dVar4 + *(double *)(param_4 + 0x20);
        if (dVar4 <= param_3) {
          dVar4 = dVar4 + *(double *)(param_4 + 0x18);
          if (dVar4 <= param_3) {
            dVar1 = *(double *)(param_4 + 0x28);
            uVar2 = FUN_016da930(param_1,*(double *)(param_4 + 0x28) - dVar4,dVar1,
                                 *(undefined8 *)(param_4 + 0x10),param_3,
                                 *(undefined8 *)(param_1 + 0x760));
            if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
              FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar1);
            }
          }
          else {
            uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x18),dVar4,
                                 *(double *)(param_4 + 0x28) - dVar4,param_3,
                                 *(undefined8 *)(param_1 + 0x760));
            if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
              FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar4);
            }
          }
        }
        else {
          uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x20),dVar4,
                               *(undefined8 *)(param_4 + 0x18),param_3,
                               *(undefined8 *)(param_1 + 0x760));
          if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
            FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar4);
          }
        }
      }
      else {
        uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x10),dVar4,
                             *(undefined8 *)(param_4 + 0x20),param_3,
                             *(undefined8 *)(param_1 + 0x760));
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar3 + dVar4);
        }
      }
    }
    else {
      uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 8),
                           *(undefined8 *)(param_4 + 0x10),param_3,*(undefined8 *)(param_1 + 0x760))
      ;
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),*(undefined8 *)(param_4 + 8));
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

