/* Ghidra address: 00aab7e0 */
/* Ghidra symbol: FUN_00aab7e0 */


int FUN_00aab7e0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                longlong param_5,int param_6,int param_7,int param_8,undefined4 param_9,int param_10
                ,undefined1 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  param_8 = param_7 - param_8;
  iVar3 = *(int *)(param_1 + 0x20) + param_7;
  iVar1 = param_10 / 2;
  if (*(char *)(param_3 + 0x92) != '\0') {
    if (*(char *)(param_1 + 0x58) == '\0') {
      if (*(char *)(param_1 + 0x5a) == '\0') {
        if (((*(char *)(param_1 + 0x59) != '\0') &&
            (*(int *)(param_4 + 4) + *(int *)(param_3 + 0x94) < iVar3)) &&
           (iVar3 + iVar1 < *(int *)(param_3 + 0x218))) {
          *(undefined1 *)(param_3 + 0x21c) = 1;
          *(int *)(param_3 + 0x218) = iVar3 + iVar1;
        }
      }
      else {
        if (((*(int *)(param_4 + 4) < param_8) &&
            (*(int *)(param_3 + 0x218) < param_7 + *(int *)(param_1 + 0x2c))) &&
           (*(int *)(param_1 + 0x2c) < *(int *)(param_4 + 0xc) - *(int *)(param_4 + 4))) {
          if (*(int *)(param_3 + 0x218) <= param_7) {
            return iVar3;
          }
          *(undefined1 *)(param_3 + 0x21c) = 1;
          *(int *)(param_3 + 0x218) = param_7;
          return iVar3;
        }
        if (((*(int *)(param_4 + 4) < param_8) &&
            (*(int *)(param_3 + 0x218) < param_7 + *(int *)(param_1 + 0x20))) &&
           (*(int *)(param_1 + 0x20) < *(int *)(param_4 + 0xc) - *(int *)(param_4 + 4))) {
          if (*(int *)(param_3 + 0x218) <= param_7 + iVar1) {
            return iVar3;
          }
          *(undefined1 *)(param_3 + 0x21c) = 1;
          *(int *)(param_3 + 0x218) = param_7 + iVar1;
          return iVar3;
        }
      }
    }
    else if (*(int *)(param_4 + 4) < param_8) {
      if (*(int *)(param_3 + 0x218) <= param_7 + iVar1) {
        return iVar3;
      }
      *(undefined1 *)(param_3 + 0x21c) = 1;
      *(int *)(param_3 + 0x218) = param_7 + iVar1;
      return iVar3;
    }
  }
  if (((*(char *)(param_3 + 0x92) == '\0') || (100 < *(int *)(param_1 + 0x2c))) ||
     (param_7 + *(int *)(param_1 + 0x2c) <= *(int *)(param_3 + 0x218))) {
    if (((*(int *)(param_4 + 4) <= param_8 + *(int *)(param_1 + 0x2c)) &&
        (param_8 < *(int *)(param_4 + 0xc))) &&
       ((*(char *)(param_3 + 0x92) == '\0' || (param_7 < *(int *)(param_3 + 0x218))))) {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar1 + -1) {
        do {
          plVar2 = (longlong *)FUN_004aeac0(param_1,iVar4);
          if (((plVar2 != (longlong *)0x0) && (0 < (int)plVar2[1])) &&
             (0 < *(int *)((longlong)plVar2 + 0xc))) {
            (**(code **)(*plVar2 + 8))
                      (plVar2,param_2,param_4,param_6,param_7,param_9,param_10,param_11,param_12,
                       param_13);
          }
          param_6 = param_6 + *(int *)(param_5 + (longlong)iVar4 * 4);
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  else if (param_7 < *(int *)(param_3 + 0x218)) {
    *(undefined1 *)(param_3 + 0x21c) = 1;
    *(int *)(param_3 + 0x218) = param_7;
  }
  return iVar3;
}

