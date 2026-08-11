/* Ghidra address: 00462650 */
/* Ghidra symbol: FUN_00462650 */


uint FUN_00462650(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  uint local_c;
  
  local_20 = auStack_48;
  uVar2 = *param_1;
  if (uVar2 < 0xd) {
    if (uVar2 == 0xc) {
      local_20 = auStack_48;
      uVar3 = FUN_00462650(*(undefined8 *)(param_1 + 4));
      return uVar3;
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        local_20 = auStack_48;
        lVar4 = FUN_0040c770(*(undefined8 *)(param_1 + 4));
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (uint)lVar4;
      }
      if (uVar2 < 3) {
        if (uVar2 == 2) {
          return (int)(short)param_1[4];
        }
        if (uVar2 == 0) {
          return 0;
        }
        if (uVar2 == 1) {
          if (DAT_01dc436a != '\0') {
            local_20 = auStack_48;
            FUN_00460110(1,3);
          }
          return 0;
        }
      }
      else {
        if (uVar2 == 3) {
          return *(uint *)(param_1 + 4);
        }
        if (uVar2 == 4) {
          local_20 = auStack_48;
          lVar4 = FUN_0040c770((double)*(float *)(param_1 + 4));
          if (0xffffffff < lVar4 + 0x80000000U) {
            lVar4 = FUN_00410a90();
          }
          return (uint)lVar4;
        }
      }
    }
    else if (uVar2 < 9) {
      if (uVar2 == 8) {
        local_20 = auStack_48;
        uVar3 = FUN_00462400(param_1);
        return uVar3;
      }
      if (uVar2 == 6) {
        local_20 = auStack_48;
        lVar4 = FUN_0040c780(*(undefined8 *)(param_1 + 4));
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (uint)lVar4;
      }
      if (uVar2 == 7) {
        local_20 = auStack_48;
        lVar4 = FUN_0040c770(*(undefined8 *)(param_1 + 4));
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (uint)lVar4;
      }
    }
    else {
      if (uVar2 == 9) {
LAB_00462991:
        local_20 = auStack_48;
        uVar3 = FUN_00462530(param_1);
        return uVar3;
      }
      if (uVar2 == 0xb) {
        return (int)(short)param_1[4];
      }
    }
  }
  else if (uVar2 < 0x15) {
    if (uVar2 == 0x14) {
      lVar4 = *(longlong *)(param_1 + 4);
      if (0xffffffff < lVar4 + 0x80000000U) {
        local_20 = auStack_48;
        lVar4 = FUN_00410a90();
      }
      return (uint)lVar4;
    }
    if (uVar2 < 0x12) {
      if (uVar2 == 0x11) {
        return (uint)(byte)param_1[4];
      }
      if (uVar2 == 0xd) goto LAB_00462991;
      if (uVar2 == 0x10) {
        return (int)(char)param_1[4];
      }
    }
    else {
      if (uVar2 == 0x12) {
        return (uint)param_1[4];
      }
      if (uVar2 == 0x13) {
        if (-1 < (int)*(uint *)(param_1 + 4)) {
          return *(uint *)(param_1 + 4);
        }
        local_20 = auStack_48;
        uVar3 = FUN_00410a90();
        return uVar3;
      }
    }
  }
  else {
    if (uVar2 == 0x15) {
      uVar5 = *(ulonglong *)(param_1 + 4);
      if (0x7fffffff < uVar5) {
        uVar5 = FUN_00410a90();
      }
      return (uint)uVar5;
    }
    if (uVar2 == 0x100) {
      local_20 = auStack_48;
      uVar3 = FUN_00462400(param_1);
      return uVar3;
    }
    if (uVar2 == 0x101) {
      local_20 = auStack_48;
      uVar3 = FUN_00462580(param_1);
      return uVar3;
    }
    if (uVar2 == 0x102) {
      local_20 = auStack_48;
      uVar3 = FUN_00462400(param_1);
      return uVar3;
    }
  }
  if ((uVar2 & 0x4000) == 0) {
    local_20 = auStack_48;
    cVar1 = FUN_004625f0(param_1,&local_c);
    if (cVar1 != '\0') {
      return local_c;
    }
    uVar3 = FUN_00462530(param_1);
    return uVar3;
  }
  uVar2 = uVar2 & 0xbfff;
  if (uVar2 < 0xc) {
    if (uVar2 == 0xb) {
      return (int)**(short **)(param_1 + 4);
    }
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        local_20 = auStack_48;
        lVar4 = FUN_0040c770(**(undefined8 **)(param_1 + 4));
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (uint)lVar4;
      }
      if (uVar2 == 2) {
        return (int)**(short **)(param_1 + 4);
      }
      if (uVar2 == 3) {
        return **(uint **)(param_1 + 4);
      }
      if (uVar2 == 4) {
        local_20 = auStack_48;
        lVar4 = FUN_0040c770((double)**(float **)(param_1 + 4));
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (uint)lVar4;
      }
    }
    else {
      if (uVar2 == 6) {
        local_20 = auStack_48;
        lVar4 = FUN_0040c780(**(undefined8 **)(param_1 + 4));
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (uint)lVar4;
      }
      if (uVar2 == 7) {
        local_20 = auStack_48;
        lVar4 = FUN_0040c770(**(undefined8 **)(param_1 + 4));
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (uint)lVar4;
      }
      if (uVar2 == 8) {
        local_20 = auStack_48;
        uVar3 = FUN_00462400(param_1);
        return uVar3;
      }
    }
  }
  else if (uVar2 < 0x13) {
    if (uVar2 == 0x12) {
      return (uint)**(ushort **)(param_1 + 4);
    }
    if (uVar2 == 0xc) {
      local_20 = auStack_48;
      uVar3 = FUN_00462650(*(undefined8 *)(param_1 + 4));
      return uVar3;
    }
    if (uVar2 == 0x10) {
      return (int)**(char **)(param_1 + 4);
    }
    if (uVar2 == 0x11) {
      return (uint)**(byte **)(param_1 + 4);
    }
  }
  else {
    if (uVar2 == 0x13) {
      if (-1 < (int)**(uint **)(param_1 + 4)) {
        return **(uint **)(param_1 + 4);
      }
      local_20 = auStack_48;
      uVar3 = FUN_00410a90();
      return uVar3;
    }
    if (uVar2 == 0x14) {
      lVar4 = **(longlong **)(param_1 + 4);
      if (0xffffffff < lVar4 + 0x80000000U) {
        local_20 = auStack_48;
        lVar4 = FUN_00410a90();
      }
      return (uint)lVar4;
    }
    if (uVar2 == 0x15) {
      uVar5 = **(ulonglong **)(param_1 + 4);
      if (0x7fffffff < uVar5) {
        local_20 = auStack_48;
        uVar5 = FUN_00410a90();
      }
      return (uint)uVar5;
    }
  }
  local_20 = auStack_48;
  uVar3 = FUN_00462530(param_1);
  return uVar3;
}

