/* Ghidra address: 004634b0 */
/* Ghidra symbol: FUN_004634b0 */


ulonglong FUN_004634b0(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  ulonglong local_10;
  
  local_20 = auStack_48;
  uVar2 = *param_1;
  if (uVar2 < 0xd) {
    if (uVar2 == 0xc) {
      local_20 = auStack_48;
      uVar3 = FUN_004634b0(*(undefined8 *)(param_1 + 4));
      return uVar3;
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        local_20 = auStack_48;
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 4));
        return uVar3;
      }
      if (uVar2 < 3) {
        if (uVar2 == 2) {
          return (longlong)(short)param_1[4];
        }
        if (uVar2 == 0) {
          return 0;
        }
        if (uVar2 == 1) {
          if (DAT_01dc436a != '\0') {
            local_20 = auStack_48;
            FUN_00460110(1,0x14);
          }
          return 0;
        }
      }
      else {
        if (uVar2 == 3) {
          return (longlong)*(int *)(param_1 + 4);
        }
        if (uVar2 == 4) {
          local_20 = auStack_48;
          uVar3 = FUN_0040c770((double)*(float *)(param_1 + 4));
          return uVar3;
        }
      }
    }
    else if (uVar2 < 9) {
      if (uVar2 == 8) {
        local_20 = auStack_48;
        uVar3 = FUN_00463250(param_1);
        return uVar3;
      }
      if (uVar2 == 6) {
        local_20 = auStack_48;
        uVar3 = FUN_0040c780(*(undefined8 *)(param_1 + 4));
        return uVar3;
      }
      if (uVar2 == 7) {
        local_20 = auStack_48;
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 4));
        return uVar3;
      }
    }
    else {
      if (uVar2 == 9) {
LAB_00463775:
        local_20 = auStack_48;
        uVar3 = FUN_004631b0(param_1);
        return uVar3;
      }
      if (uVar2 == 0xb) {
        return (longlong)(short)param_1[4];
      }
    }
  }
  else if (uVar2 < 0x15) {
    if (uVar2 == 0x14) {
      return *(ulonglong *)(param_1 + 4);
    }
    if (uVar2 < 0x12) {
      if (uVar2 == 0x11) {
        return (ulonglong)(byte)param_1[4];
      }
      if (uVar2 == 0xd) goto LAB_00463775;
      if (uVar2 == 0x10) {
        return (longlong)(char)param_1[4];
      }
    }
    else {
      if (uVar2 == 0x12) {
        return (ulonglong)param_1[4];
      }
      if (uVar2 == 0x13) {
        return (ulonglong)*(uint *)(param_1 + 4);
      }
    }
  }
  else {
    if (uVar2 == 0x15) {
      return *(ulonglong *)(param_1 + 4);
    }
    if (uVar2 == 0x100) {
      uVar3 = FUN_00463250(param_1);
      return uVar3;
    }
    if (uVar2 == 0x101) {
      local_20 = auStack_48;
      uVar3 = FUN_004633d0(param_1);
      return uVar3;
    }
    if (uVar2 == 0x102) {
      local_20 = auStack_48;
      uVar3 = FUN_00463250(param_1);
      return uVar3;
    }
  }
  if ((uVar2 & 0x4000) == 0) {
    local_20 = auStack_48;
    cVar1 = FUN_00463450(param_1,&local_10);
    if (cVar1 != '\0') {
      return local_10;
    }
    uVar3 = FUN_004631b0(param_1);
    return uVar3;
  }
  uVar2 = uVar2 & 0xbfff;
  if (uVar2 < 0xc) {
    if (uVar2 == 0xb) {
      return (longlong)(int)**(short **)(param_1 + 4);
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        local_20 = auStack_48;
        uVar3 = FUN_0040c770(**(undefined8 **)(param_1 + 4));
        return uVar3;
      }
      if (uVar2 == 2) {
        return (longlong)**(short **)(param_1 + 4);
      }
      if (uVar2 == 3) {
        return (longlong)**(int **)(param_1 + 4);
      }
      if (uVar2 == 4) {
        local_20 = auStack_48;
        uVar3 = FUN_0040c770((double)**(float **)(param_1 + 4));
        return uVar3;
      }
    }
    else {
      if (uVar2 == 6) {
        local_20 = auStack_48;
        uVar3 = FUN_0040c780(**(undefined8 **)(param_1 + 4));
        return uVar3;
      }
      if (uVar2 == 7) {
        local_20 = auStack_48;
        uVar3 = FUN_0040c770(**(undefined8 **)(param_1 + 4));
        return uVar3;
      }
      if (uVar2 == 8) {
        local_20 = auStack_48;
        uVar3 = FUN_00463250(param_1);
        return uVar3;
      }
    }
  }
  else if (uVar2 < 0x13) {
    if (uVar2 == 0x12) {
      return (ulonglong)**(ushort **)(param_1 + 4);
    }
    if (uVar2 == 0xc) {
      local_20 = auStack_48;
      uVar3 = FUN_004634b0(*(undefined8 *)(param_1 + 4));
      return uVar3;
    }
    if (uVar2 == 0x10) {
      return (longlong)**(char **)(param_1 + 4);
    }
    if (uVar2 == 0x11) {
      return (ulonglong)**(byte **)(param_1 + 4);
    }
  }
  else {
    if (uVar2 == 0x13) {
      return (ulonglong)**(uint **)(param_1 + 4);
    }
    if (uVar2 == 0x14) {
      return **(ulonglong **)(param_1 + 4);
    }
    if (uVar2 == 0x15) {
      return **(ulonglong **)(param_1 + 4);
    }
  }
  local_20 = auStack_48;
  uVar3 = FUN_004631b0(param_1);
  return uVar3;
}

