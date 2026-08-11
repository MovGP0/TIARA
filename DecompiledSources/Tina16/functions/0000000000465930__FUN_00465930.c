/* Ghidra address: 00465930 */
/* Ghidra symbol: FUN_00465930 */


longlong FUN_00465930(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  longlong local_20 [2];
  
  uVar1 = *param_1;
  uVar5 = (ulonglong)uVar1;
  if (uVar5 < 0xd) {
    if (uVar5 == 0xc) {
      lVar4 = FUN_00465930(*(undefined8 *)(param_1 + 4));
      return lVar4;
    }
    if (uVar5 < 7) {
      if (uVar5 == 6) {
        return *(longlong *)(param_1 + 4);
      }
      if (uVar5 < 3) {
        if (uVar5 == 2) {
          return (longlong)(short)param_1[4] * 10000;
        }
        if (uVar5 == 0) {
          return 0;
        }
        if (uVar5 == 1) {
          if (DAT_01dc436a != '\0') {
            FUN_00460110(1,6);
          }
          return 0;
        }
      }
      else {
        if (uVar5 == 3) {
          return (longlong)*(int *)(param_1 + 4) * 10000;
        }
        if (uVar5 - 4 < 2) {
          lVar4 = FUN_00465800(param_1);
          return lVar4;
        }
      }
    }
    else {
      if (uVar5 == 7) {
        lVar4 = FUN_00465800(param_1);
        return lVar4;
      }
      if (uVar5 == 8) {
        lVar4 = FUN_00465680(param_1);
        return lVar4;
      }
      if (uVar5 == 9) {
LAB_00465bda:
        lVar4 = FUN_00465800(param_1);
        return lVar4;
      }
      if (uVar5 == 0xb) {
        return (longlong)(int)(short)param_1[4] * 10000;
      }
    }
  }
  else if (uVar5 < 0x15) {
    if (uVar5 == 0x14) {
      lVar4 = FUN_00465790(param_1,(double)*(longlong *)(param_1 + 4));
      return lVar4;
    }
    if (uVar5 < 0x12) {
      if (uVar5 == 0x11) {
        return (ulonglong)(byte)param_1[4] * 10000;
      }
      if (uVar5 == 0xd) goto LAB_00465bda;
      if (uVar5 == 0x10) {
        return (longlong)(char)param_1[4] * 10000;
      }
    }
    else {
      if (uVar5 == 0x12) {
        return (ulonglong)param_1[4] * 10000;
      }
      if (uVar5 == 0x13) {
        return (ulonglong)*(uint *)(param_1 + 4) * 10000;
      }
    }
  }
  else {
    if (uVar5 == 0x15) {
      dVar6 = (double)*(longlong *)(param_1 + 4);
      if (*(longlong *)(param_1 + 4) < 0) {
        dVar6 = dVar6 + 1.8446744073709552e+19;
      }
      lVar4 = FUN_00465790(param_1,dVar6);
      return lVar4;
    }
    if (uVar5 == 0x100) {
      lVar4 = FUN_00465680(param_1);
      return lVar4;
    }
    if (uVar5 == 0x101) {
      lVar4 = FUN_00465850(param_1);
      return lVar4;
    }
    if (uVar5 == 0x102) {
      lVar4 = FUN_00465680(param_1);
      return lVar4;
    }
  }
  if ((uVar1 & 0x4000) == 0) {
    cVar2 = FUN_004658d0(param_1,local_20);
    if (cVar2 != '\0') {
      return local_20[0];
    }
    lVar4 = FUN_00465800(param_1);
    return lVar4;
  }
  uVar3 = uVar1 & 0xffffbfff;
  if (uVar3 < 0xd) {
    if (uVar3 == 0xc) {
      lVar4 = FUN_00465930(*(undefined8 *)(param_1 + 4));
      return lVar4;
    }
    if (uVar3 < 7) {
      if (uVar3 == 6) {
        return **(longlong **)(param_1 + 4);
      }
      if (uVar3 == 2) {
        return (longlong)**(short **)(param_1 + 4) * 10000;
      }
      if (uVar3 == 3) {
        return (longlong)**(int **)(param_1 + 4) * 10000;
      }
      if (uVar3 - 4 < 2) {
        lVar4 = FUN_00465800(param_1);
        return lVar4;
      }
    }
    else {
      if (uVar3 == 7) {
        lVar4 = FUN_00465800(param_1);
        return lVar4;
      }
      if (uVar3 == 8) {
        lVar4 = FUN_00465680(param_1);
        return lVar4;
      }
      if (uVar3 == 0xb) {
        return (longlong)(int)**(short **)(param_1 + 4) * 10000;
      }
    }
  }
  else if (uVar3 < 0x14) {
    if (uVar3 == 0x13) {
      return (ulonglong)**(uint **)(param_1 + 4) * 10000;
    }
    if (uVar3 == 0x10) {
      return (longlong)**(char **)(param_1 + 4) * 10000;
    }
    if (uVar3 == 0x11) {
      return (ulonglong)**(byte **)(param_1 + 4) * 10000;
    }
    if (uVar3 == 0x12) {
      return (ulonglong)**(ushort **)(param_1 + 4) * 10000;
    }
  }
  else {
    if (uVar3 == 0x14) {
      lVar4 = FUN_00465790(param_1,(double)**(longlong **)(param_1 + 4));
      return lVar4;
    }
    if (uVar3 == 0x15) {
      dVar6 = (double)**(longlong **)(param_1 + 4);
      if (**(longlong **)(param_1 + 4) < 0) {
        dVar6 = dVar6 + 1.8446744073709552e+19;
      }
      lVar4 = FUN_00465790(param_1,dVar6);
      return lVar4;
    }
  }
  lVar4 = FUN_00465800(param_1);
  return lVar4;
}

