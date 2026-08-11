/* Ghidra address: 00464710 */
/* Ghidra symbol: FUN_00464710 */


double FUN_00464710(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  double dVar3;
  double local_20 [2];
  
  uVar2 = *param_1;
  if (uVar2 < 0xd) {
    if (uVar2 == 0xc) {
      dVar3 = (double)FUN_00464710(*(undefined8 *)(param_1 + 4));
      return dVar3;
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        return *(double *)(param_1 + 4);
      }
      if (uVar2 < 3) {
        if (uVar2 == 2) {
          return (double)(int)(short)param_1[4];
        }
        if (uVar2 == 0) {
          return 0.0;
        }
        if (uVar2 == 1) {
          if (DAT_01dc436a != '\0') {
            FUN_00460110(1,5);
          }
          return 0.0;
        }
      }
      else {
        if (uVar2 == 3) {
          return (double)*(int *)(param_1 + 4);
        }
        if (uVar2 == 4) {
          return (double)*(float *)(param_1 + 4);
        }
      }
    }
    else if (uVar2 < 9) {
      if (uVar2 == 8) {
        dVar3 = (double)FUN_004644c0(param_1);
        return dVar3;
      }
      if (uVar2 == 6) {
        return (double)*(longlong *)(param_1 + 4) / 10000.0;
      }
      if (uVar2 == 7) {
        return *(double *)(param_1 + 4);
      }
    }
    else {
      if (uVar2 == 9) {
LAB_004649c3:
        dVar3 = (double)FUN_004645d0(param_1);
        return dVar3;
      }
      if (uVar2 == 0xb) {
        return (double)(int)(short)param_1[4];
      }
    }
  }
  else if (uVar2 < 0x15) {
    if (uVar2 == 0x14) {
      return (double)*(longlong *)(param_1 + 4);
    }
    if (uVar2 < 0x12) {
      if (uVar2 == 0x11) {
        return (double)(byte)param_1[4];
      }
      if (uVar2 == 0xd) goto LAB_004649c3;
      if (uVar2 == 0x10) {
        return (double)(int)(char)param_1[4];
      }
    }
    else {
      if (uVar2 == 0x12) {
        return (double)param_1[4];
      }
      if (uVar2 == 0x13) {
        return (double)*(uint *)(param_1 + 4);
      }
    }
  }
  else {
    if (uVar2 == 0x15) {
      dVar3 = (double)*(longlong *)(param_1 + 4);
      if (-1 < *(longlong *)(param_1 + 4)) {
        return dVar3;
      }
      return dVar3 + 1.8446744073709552e+19;
    }
    if (uVar2 == 0x100) {
      dVar3 = (double)FUN_004644c0(param_1);
      return dVar3;
    }
    if (uVar2 == 0x101) {
      dVar3 = (double)FUN_00464630(param_1);
      return dVar3;
    }
    if (uVar2 == 0x102) {
      dVar3 = (double)FUN_004644c0(param_1);
      return dVar3;
    }
  }
  if ((uVar2 & 0x4000) == 0) {
    cVar1 = FUN_004646b0(param_1,local_20);
    if (cVar1 != '\0') {
      return local_20[0];
    }
    dVar3 = (double)FUN_004645d0(param_1);
    return dVar3;
  }
  uVar2 = uVar2 & 0xbfff;
  if (uVar2 < 0xc) {
    if (uVar2 == 0xb) {
      return (double)(int)**(short **)(param_1 + 4);
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        return **(double **)(param_1 + 4);
      }
      if (uVar2 == 2) {
        return (double)(int)**(short **)(param_1 + 4);
      }
      if (uVar2 == 3) {
        return (double)**(int **)(param_1 + 4);
      }
      if (uVar2 == 4) {
        return (double)**(float **)(param_1 + 4);
      }
    }
    else {
      if (uVar2 == 6) {
        return (double)**(longlong **)(param_1 + 4) / 10000.0;
      }
      if (uVar2 == 7) {
        return **(double **)(param_1 + 4);
      }
      if (uVar2 == 8) {
        dVar3 = (double)FUN_004644c0(param_1);
        return dVar3;
      }
    }
  }
  else if (uVar2 < 0x13) {
    if (uVar2 == 0x12) {
      return (double)**(ushort **)(param_1 + 4);
    }
    if (uVar2 == 0xc) {
      dVar3 = (double)FUN_00464710(*(undefined8 *)(param_1 + 4));
      return dVar3;
    }
    if (uVar2 == 0x10) {
      return (double)(int)**(char **)(param_1 + 4);
    }
    if (uVar2 == 0x11) {
      return (double)**(byte **)(param_1 + 4);
    }
  }
  else {
    if (uVar2 == 0x13) {
      return (double)**(uint **)(param_1 + 4);
    }
    if (uVar2 == 0x14) {
      return (double)**(longlong **)(param_1 + 4);
    }
    if (uVar2 == 0x15) {
      dVar3 = (double)**(longlong **)(param_1 + 4);
      if (-1 < **(longlong **)(param_1 + 4)) {
        return dVar3;
      }
      return dVar3 + 1.8446744073709552e+19;
    }
  }
  dVar3 = (double)FUN_004645d0(param_1);
  return dVar3;
}

