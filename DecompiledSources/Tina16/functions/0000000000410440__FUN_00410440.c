/* Ghidra address: 00410440 */
/* Ghidra symbol: FUN_00410440 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00410440(double param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_38 [32];
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      if ((int)param_2 < 0x278) {
        uVar1 = param_2 & 0x1f;
        if (uVar1 != 0) {
          param_1 = (double)FUN_004103c0(auStack_38,param_1,
                                         *(undefined8 *)
                                          (&DAT_01dbb098 + (longlong)(int)uVar1 * 0x10),
                                         *(undefined8 *)
                                          (&DAT_01dbb0a0 + (longlong)(int)uVar1 * 0x10));
        }
        if (param_2 >> 5 != 0) {
          uVar1 = param_2 >> 5 & 7;
          if (uVar1 != 0) {
            param_1 = (double)FUN_004103c0(auStack_38,param_1,
                                           *(undefined8 *)
                                            (&DAT_01dbb318 + (longlong)(int)uVar1 * 0x10),
                                           *(undefined8 *)
                                            (&DAT_01dbb320 + (longlong)(int)uVar1 * 0x10));
          }
          uVar1 = param_2 >> 8;
          if (param_2 >> 8 != 0) {
            do {
              param_1 = (double)FUN_004103c0(auStack_38,param_1,DAT_01dbb3a8,DAT_01dbb3b0);
              param_1 = param_1 * _DAT_01dbb3b8;
              uVar1 = uVar1 - 1;
            } while (0 < (int)uVar1);
          }
        }
      }
      else {
        FUN_00409f50(0x10,1);
        param_1 = 0.0;
      }
    }
  }
  else if ((int)param_2 < 0x278) {
    if ((param_2 & 0x1f) != 0) {
      param_1 = (double)FUN_004103c0(auStack_38,param_1,
                                     *(undefined8 *)
                                      (&DAT_01dbae98 + (longlong)(int)(param_2 & 0x1f) * 0x10),
                                     *(undefined8 *)
                                      (&DAT_01dbaea0 + (longlong)(int)(param_2 & 0x1f) * 0x10));
    }
    if (param_2 >> 5 != 0) {
      uVar1 = param_2 >> 5 & 7;
      if (uVar1 != 0) {
        param_1 = (double)FUN_004103c0(auStack_38,param_1,
                                       *(undefined8 *)(&DAT_01dbb298 + (longlong)(int)uVar1 * 0x10),
                                       *(undefined8 *)(&DAT_01dbb2a0 + (longlong)(int)uVar1 * 0x10))
        ;
      }
      uVar1 = param_2 >> 8;
      if (param_2 >> 8 != 0) {
        do {
          param_1 = (double)FUN_004103c0(auStack_38,param_1,DAT_01dbb398,DAT_01dbb3a0);
          uVar1 = uVar1 - 1;
        } while (0 < (int)uVar1);
      }
    }
  }
  else {
    FUN_00409f50(8,1);
    param_1 = INFINITY;
  }
  return param_1;
}

