/* Ghidra address: 0145c620 */
/* Ghidra symbol: FUN_0145c620 */


void FUN_0145c620(undefined4 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,double param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,longlong param_14)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_cc8 [3256];
  
  if (*(char *)(param_14 + 0x92) != '\0') {
    return;
  }
  if ((*(int *)(param_14 + 0x48) == 0) && (*(int *)(param_14 + 0x4c) == 0)) {
    if ((byte)(*(char *)(param_14 + 0xb4) - 2U) < 2) {
      FUN_01457df0(0xffffffff,local_cc8,param_1,param_2,param_6,param_3,param_4,param_7,param_8,
                   param_9,param_10,param_11,param_12,param_14);
      return;
    }
    if (*(char *)(param_14 + 0xb4) != '\x04') {
      return;
    }
    FUN_0144c1c0(0xffffffff,local_cc8,param_1,param_2,param_6,param_3,param_4,param_7,param_8,
                 param_9,param_10,param_11,param_12,param_13,param_14);
    return;
  }
  cVar1 = (char)param_1;
  lVar2 = (longlong)cVar1;
  if (lVar2 < 6) {
    if (lVar2 == 5) {
      FUN_01448900(param_14);
      cVar1 = FUN_01449a00(param_14);
      if ((cVar1 != '\0') && (cVar1 = FUN_0144a840(param_14), cVar1 != '\0')) {
        if (param_7 == 0.0) {
          FUN_0144f6e0(param_2,1.0 / param_4,param_14);
          return;
        }
        FUN_014504c0(param_2,1.0 / param_4,param_7,param_14);
        return;
      }
      FUN_00ef4260(0x10,param_14);
      return;
    }
    if (lVar2 - 1U < 2) {
LAB_0145c6ea:
      if (cVar1 == '\x01') {
        FUN_0145b5a0(param_14);
      }
      else if (cVar1 == '\x02') {
        FUN_0145b5a0(param_14);
      }
      else if (cVar1 == '\x10') {
        FUN_0145b570(param_14);
      }
      FUN_01448900(param_14);
      FUN_0145b760(param_2,param_6,param_3,param_4,param_7,param_8,param_9,param_10,param_11,
                   param_12,cVar1,param_14);
      return;
    }
    if (lVar2 == 3) {
      FUN_01448900(param_14);
      cVar1 = FUN_01449a00(param_14);
      if ((cVar1 != '\0') && (cVar1 = FUN_0144a840(param_14), cVar1 != '\0')) {
        FUN_01454690(param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                     param_14);
        return;
      }
      FUN_00ef4260(0x10,param_14);
      return;
    }
    if (lVar2 != 4) {
      return;
    }
  }
  else {
    if (lVar2 == 6) {
      FUN_01448900(param_14);
      cVar1 = FUN_01449a00(param_14);
      if ((cVar1 != '\0') && (cVar1 = FUN_0144a840(param_14), cVar1 != '\0')) {
        FUN_0144dfd0(param_2,1.0 / param_4,param_14);
        return;
      }
      FUN_00ef4260(0x10,param_14);
      return;
    }
    if (lVar2 != 7) {
      if (lVar2 != 0x10) {
        return;
      }
      goto LAB_0145c6ea;
    }
  }
  FUN_0145bc60(param_2,param_6,param_3,param_4,param_7,param_8,param_9,param_10,param_11,param_12,
               cVar1,param_14);
  return;
}

