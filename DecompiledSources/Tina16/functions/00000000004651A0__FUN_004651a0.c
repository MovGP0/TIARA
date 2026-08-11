/* Ghidra address: 004651a0 */
/* Ghidra symbol: FUN_004651a0 */


double FUN_004651a0(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  double dVar5;
  double local_20 [2];
  
  uVar1 = *param_1;
  uVar4 = (ulonglong)uVar1;
  if (uVar4 < 0xe) {
    if (uVar4 == 0xd) {
LAB_00465415:
      dVar5 = (double)FUN_00465060(param_1);
      return dVar5;
    }
    if (uVar4 < 8) {
      if (uVar4 == 7) {
        return *(double *)(param_1 + 4);
      }
      if (uVar4 < 3) {
        if (uVar4 == 2) {
          return (double)(int)(short)param_1[4];
        }
        if (uVar4 == 0) {
          return 0.0;
        }
        if (uVar4 == 1) {
          if (DAT_01dc436a != '\0') {
            FUN_00460110(1,7);
          }
          return 0.0;
        }
      }
      else {
        if (uVar4 == 3) {
          return (double)*(int *)(param_1 + 4);
        }
        if (uVar4 - 4 < 3) {
          dVar5 = (double)FUN_00465060(param_1);
          return dVar5;
        }
      }
    }
    else {
      if (uVar4 == 8) {
        dVar5 = (double)FUN_00464ea0(param_1);
        return dVar5;
      }
      if (uVar4 == 9) goto LAB_00465415;
      if (uVar4 == 0xb) {
        return (double)(int)(short)param_1[4];
      }
      if (uVar4 == 0xc) {
        dVar5 = (double)FUN_004651a0(*(undefined8 *)(param_1 + 4));
        return dVar5;
      }
    }
  }
  else if (uVar4 < 0x15) {
    if (uVar4 == 0x14) {
      dVar5 = (double)FUN_00464ff0(param_1,(double)*(longlong *)(param_1 + 4));
      return dVar5;
    }
    if (uVar4 == 0x10) {
      return (double)(int)(char)param_1[4];
    }
    if (uVar4 == 0x11) {
      return (double)(byte)param_1[4];
    }
    if (uVar4 == 0x12) {
      return (double)param_1[4];
    }
    if (uVar4 == 0x13) {
      return (double)*(uint *)(param_1 + 4);
    }
  }
  else {
    if (uVar4 == 0x15) {
      dVar5 = (double)*(longlong *)(param_1 + 4);
      if (*(longlong *)(param_1 + 4) < 0) {
        dVar5 = dVar5 + 1.8446744073709552e+19;
      }
      dVar5 = (double)FUN_00464ff0(param_1,dVar5);
      return dVar5;
    }
    if (uVar4 == 0x100) {
      dVar5 = (double)FUN_00464ea0(param_1);
      return dVar5;
    }
    if (uVar4 == 0x101) {
      dVar5 = (double)FUN_004650c0(param_1);
      return dVar5;
    }
    if (uVar4 == 0x102) {
      dVar5 = (double)FUN_00464ea0(param_1);
      return dVar5;
    }
  }
  if ((uVar1 & 0x4000) == 0) {
    cVar2 = FUN_00465140(param_1,local_20);
    if (cVar2 != '\0') {
      return local_20[0];
    }
    dVar5 = (double)FUN_00465060(param_1);
    return dVar5;
  }
  uVar3 = uVar1 & 0xffffbfff;
  if (uVar3 < 0xd) {
    if (uVar3 == 0xc) {
      dVar5 = (double)FUN_004651a0(*(undefined8 *)(param_1 + 4));
      return dVar5;
    }
    if (uVar3 < 8) {
      if (uVar3 == 7) {
        return **(double **)(param_1 + 4);
      }
      if (uVar3 == 2) {
        return (double)(int)**(short **)(param_1 + 4);
      }
      if (uVar3 == 3) {
        return (double)**(int **)(param_1 + 4);
      }
      if (uVar3 - 4 < 3) {
        dVar5 = (double)FUN_00465060(param_1);
        return dVar5;
      }
    }
    else {
      if (uVar3 == 8) {
        dVar5 = (double)FUN_00464ea0(param_1);
        return dVar5;
      }
      if (uVar3 == 0xb) {
        return (double)(int)**(short **)(param_1 + 4);
      }
    }
  }
  else if (uVar3 < 0x14) {
    if (uVar3 == 0x13) {
      return (double)**(uint **)(param_1 + 4);
    }
    if (uVar3 == 0x10) {
      return (double)(int)**(char **)(param_1 + 4);
    }
    if (uVar3 == 0x11) {
      return (double)**(byte **)(param_1 + 4);
    }
    if (uVar3 == 0x12) {
      return (double)**(ushort **)(param_1 + 4);
    }
  }
  else {
    if (uVar3 == 0x14) {
      dVar5 = (double)FUN_00464ff0(param_1,(double)**(longlong **)(param_1 + 4));
      return dVar5;
    }
    if (uVar3 == 0x15) {
      dVar5 = (double)**(longlong **)(param_1 + 4);
      if (**(longlong **)(param_1 + 4) < 0) {
        dVar5 = dVar5 + 1.8446744073709552e+19;
      }
      dVar5 = (double)FUN_00464ff0(param_1,dVar5);
      return dVar5;
    }
  }
  dVar5 = (double)FUN_00465060(param_1);
  return dVar5;
}

