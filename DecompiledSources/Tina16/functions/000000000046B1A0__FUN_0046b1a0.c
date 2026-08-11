/* Ghidra address: 0046b1a0 */
/* Ghidra symbol: FUN_0046b1a0 */


void FUN_0046b1a0(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  
  uVar2 = *param_1;
  if (uVar2 < 0xd) {
    if (uVar2 == 0xc) {
      FUN_0046b040(*(undefined8 *)(param_1 + 4),param_1);
      return;
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        *(ulonglong *)(param_1 + 4) = *(ulonglong *)(param_1 + 4) ^ 0x8000000000000000;
        return;
      }
      if (uVar2 < 3) {
        if (uVar2 == 2) {
          param_1[4] = -param_1[4];
          return;
        }
        if (uVar2 == 0) {
          FUN_0046b0c0(0,param_1);
          return;
        }
        if (uVar2 == 1) {
          return;
        }
      }
      else {
        if (uVar2 == 3) {
          *(int *)(param_1 + 4) = -*(int *)(param_1 + 4);
          return;
        }
        if (uVar2 == 4) {
          *(float *)(param_1 + 4) = -*(float *)(param_1 + 4);
          return;
        }
      }
    }
    else if (uVar2 < 9) {
      if (uVar2 == 8) {
        FUN_0046afd0(param_1);
        return;
      }
      if (uVar2 == 6) {
        *(longlong *)(param_1 + 4) = -*(longlong *)(param_1 + 4);
        return;
      }
      if (uVar2 == 7) {
        *(ulonglong *)(param_1 + 4) = *(ulonglong *)(param_1 + 4) ^ 0x8000000000000000;
        return;
      }
    }
    else {
      if (uVar2 == 9) {
LAB_0046b414:
        FUN_0046b010(param_1);
        return;
      }
      if (uVar2 == 0xb) {
        FUN_0046b0c0((&DAT_01dc474e)[param_1[4] != 0],param_1);
        return;
      }
    }
  }
  else if (uVar2 < 0x15) {
    if (uVar2 == 0x14) {
      *(longlong *)(param_1 + 4) = -*(longlong *)(param_1 + 4);
      return;
    }
    if (uVar2 < 0x12) {
      if (uVar2 == 0x11) {
        FUN_0046b0c0((char)param_1[4],param_1);
        return;
      }
      if (uVar2 == 0xd) goto LAB_0046b414;
      if (uVar2 == 0x10) {
        *(char *)(param_1 + 4) = -(char)param_1[4];
        return;
      }
    }
    else {
      if (uVar2 == 0x12) {
        FUN_0046b0e0(param_1[4],param_1);
        return;
      }
      if (uVar2 == 0x13) {
        FUN_0046b0f0(*(undefined4 *)(param_1 + 4),param_1);
        return;
      }
    }
  }
  else {
    if (uVar2 == 0x15) {
      FUN_0046b120(*(undefined8 *)(param_1 + 4),param_1);
      return;
    }
    if (uVar2 == 0x100) {
      FUN_0046afd0(param_1);
      return;
    }
    if (uVar2 == 0x101) {
      FUN_0046b130(param_1);
      return;
    }
    if (uVar2 == 0x102) {
      FUN_0046afd0(param_1);
      return;
    }
  }
  if ((uVar2 & 0x4000) == 0) {
    cVar1 = FUN_0046b150(param_1);
    if (cVar1 != '\0') {
      return;
    }
    FUN_0046b010(param_1);
    return;
  }
  uVar2 = uVar2 & 0xbfff;
  if (uVar2 < 0xc) {
    if (uVar2 == 0xb) {
      FUN_0046b0c0((&DAT_01dc474e)[**(short **)(param_1 + 4) != 0],param_1);
      return;
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        FUN_00468860(param_1,**(ulonglong **)(param_1 + 4) ^ 0x8000000000000000);
        return;
      }
      if (uVar2 == 2) {
        FUN_00468530(param_1,-(int)**(short **)(param_1 + 4),0xfffffffffffffffc);
        return;
      }
      if (uVar2 == 3) {
        FUN_00468530(param_1,-**(int **)(param_1 + 4),0xfffffffffffffffc);
        return;
      }
      if (uVar2 == 4) {
        FUN_00468860(param_1,-(double)**(float **)(param_1 + 4));
        return;
      }
    }
    else {
      if (uVar2 == 6) {
        FUN_004688e0(param_1,-**(longlong **)(param_1 + 4));
        return;
      }
      if (uVar2 == 7) {
        FUN_00468860(param_1,**(ulonglong **)(param_1 + 4) ^ 0x8000000000000000);
        return;
      }
      if (uVar2 == 8) {
        FUN_0046afd0(param_1);
        return;
      }
    }
  }
  else if (uVar2 < 0x13) {
    if (uVar2 == 0x12) {
      FUN_0046b0e0(**(undefined2 **)(param_1 + 4),param_1);
      return;
    }
    if (uVar2 == 0xc) {
      FUN_0046b040(*(undefined8 *)(param_1 + 4),param_1);
      return;
    }
    if (uVar2 == 0x10) {
      FUN_00468530(param_1,-(int)**(char **)(param_1 + 4),0xfffffffffffffffc);
      return;
    }
    if (uVar2 == 0x11) {
      FUN_0046b0c0(**(undefined1 **)(param_1 + 4),param_1);
      return;
    }
  }
  else {
    if (uVar2 == 0x13) {
      FUN_0046b0f0(**(undefined4 **)(param_1 + 4),param_1);
      return;
    }
    if (uVar2 == 0x14) {
      FUN_00468700(param_1,-**(longlong **)(param_1 + 4));
      return;
    }
    if (uVar2 == 0x15) {
      FUN_0046b120(**(undefined8 **)(param_1 + 4),param_1);
      return;
    }
  }
  FUN_0046b010(param_1);
  return;
}

