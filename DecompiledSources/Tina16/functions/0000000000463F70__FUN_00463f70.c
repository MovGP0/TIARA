/* Ghidra address: 00463f70 */
/* Ghidra symbol: FUN_00463f70 */


undefined1 FUN_00463f70(ushort *param_1)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 local_19 [9];
  
  uVar3 = *param_1;
  if (uVar3 < 0xd) {
    if (uVar3 == 0xc) {
      uVar1 = FUN_00463f70(*(undefined8 *)(param_1 + 4));
      return uVar1;
    }
    if (uVar3 < 6) {
      if (uVar3 == 5) {
        return *(double *)(param_1 + 4) != 0.0;
      }
      if (uVar3 < 3) {
        if (uVar3 == 2) {
          return param_1[4] != 0;
        }
        if (uVar3 == 0) {
          return false;
        }
        if (uVar3 == 1) {
          if (DAT_01dc436a != '\0') {
            FUN_00460110(1,0xb);
          }
          return false;
        }
      }
      else {
        if (uVar3 == 3) {
          return *(int *)(param_1 + 4) != 0;
        }
        if (uVar3 == 4) {
          return *(float *)(param_1 + 4) != 0.0;
        }
      }
    }
    else if (uVar3 < 9) {
      if (uVar3 == 8) {
        uVar1 = FUN_00463bb0(param_1);
        return uVar1;
      }
      if (uVar3 == 6) {
        return *(longlong *)(param_1 + 4) != 0;
      }
      if (uVar3 == 7) {
        return *(double *)(param_1 + 4) != 0.0;
      }
    }
    else {
      if (uVar3 == 9) {
LAB_00464218:
        uVar1 = FUN_00463e30(param_1);
        return uVar1;
      }
      if (uVar3 == 0xb) {
        return param_1[4] != 0;
      }
    }
  }
  else if (uVar3 < 0x15) {
    if (uVar3 == 0x14) {
      return *(longlong *)(param_1 + 4) != 0;
    }
    if (uVar3 < 0x12) {
      if (uVar3 == 0x11) {
        return (char)param_1[4] != '\0';
      }
      if (uVar3 == 0xd) goto LAB_00464218;
      if (uVar3 == 0x10) {
        return (char)param_1[4] != '\0';
      }
    }
    else {
      if (uVar3 == 0x12) {
        return param_1[4] != 0;
      }
      if (uVar3 == 0x13) {
        return *(int *)(param_1 + 4) != 0;
      }
    }
  }
  else {
    if (uVar3 == 0x15) {
      return *(longlong *)(param_1 + 4) != 0;
    }
    if (uVar3 == 0x100) {
      uVar1 = FUN_00463bb0(param_1);
      return uVar1;
    }
    if (uVar3 == 0x101) {
      uVar1 = FUN_00463e90(param_1);
      return uVar1;
    }
    if (uVar3 == 0x102) {
      uVar1 = FUN_00463bb0(param_1);
      return uVar1;
    }
  }
  if ((uVar3 & 0x4000) == 0) {
    cVar2 = FUN_00463f10(param_1,local_19);
    if (cVar2 != '\0') {
      return local_19[0];
    }
    uVar1 = FUN_00463e30(param_1);
    return uVar1;
  }
  uVar3 = uVar3 & 0xbfff;
  if (uVar3 < 0xc) {
    if (uVar3 == 0xb) {
      return **(short **)(param_1 + 4) != 0;
    }
    if (uVar3 < 6) {
      if (uVar3 == 5) {
        return **(double **)(param_1 + 4) != 0.0;
      }
      if (uVar3 == 2) {
        return **(short **)(param_1 + 4) != 0;
      }
      if (uVar3 == 3) {
        return **(int **)(param_1 + 4) != 0;
      }
      if (uVar3 == 4) {
        return **(float **)(param_1 + 4) != 0.0;
      }
    }
    else {
      if (uVar3 == 6) {
        return **(longlong **)(param_1 + 4) != 0;
      }
      if (uVar3 == 7) {
        return **(double **)(param_1 + 4) != 0.0;
      }
      if (uVar3 == 8) {
        uVar1 = FUN_00463bb0(param_1);
        return uVar1;
      }
    }
  }
  else if (uVar3 < 0x13) {
    if (uVar3 == 0x12) {
      return **(short **)(param_1 + 4) != 0;
    }
    if (uVar3 == 0xc) {
      uVar1 = FUN_00463f70(*(undefined8 *)(param_1 + 4));
      return uVar1;
    }
    if (uVar3 == 0x10) {
      return **(char **)(param_1 + 4) != '\0';
    }
    if (uVar3 == 0x11) {
      return **(char **)(param_1 + 4) != '\0';
    }
  }
  else {
    if (uVar3 == 0x13) {
      return **(int **)(param_1 + 4) != 0;
    }
    if (uVar3 == 0x14) {
      return **(longlong **)(param_1 + 4) != 0;
    }
    if (uVar3 == 0x15) {
      return **(longlong **)(param_1 + 4) != 0;
    }
  }
  uVar1 = FUN_00463e30(param_1);
  return uVar1;
}

