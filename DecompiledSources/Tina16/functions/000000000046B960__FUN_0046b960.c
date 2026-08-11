/* Ghidra address: 0046b960 */
/* Ghidra symbol: FUN_0046b960 */


void FUN_0046b960(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar4 = (ulonglong)uVar1;
  if (uVar4 < 0xe) {
    if (uVar4 == 0xd) {
LAB_0046bb2f:
      FUN_0046b840(param_1);
      return;
    }
    if (uVar4 < 4) {
      if (uVar4 == 0) {
        FUN_00468530(param_1,0xffffffff,0xffffffffffffffff);
        return;
      }
      if (uVar4 == 1) {
        return;
      }
      if (uVar4 == 2) {
        param_1[4] = ~param_1[4];
        return;
      }
      if (uVar4 == 3) {
        *(uint *)(param_1 + 4) = ~*(uint *)(param_1 + 4);
        return;
      }
    }
    else if (uVar4 < 10) {
      if (uVar4 == 9) goto LAB_0046bb2f;
      if (uVar4 - 4 < 4) {
        FUN_0046b7f0(param_1);
        return;
      }
      if (uVar4 - 4 == 4) {
        FUN_0046b6c0(param_1);
        return;
      }
    }
    else {
      if (uVar4 == 0xb) {
        param_1[4] = -(ushort)(param_1[4] == 0);
        return;
      }
      if (uVar4 == 0xc) {
        FUN_0046b870(*(undefined8 *)(param_1 + 4),param_1);
        return;
      }
    }
  }
  else if (uVar4 < 0x15) {
    if (uVar4 == 0x14) {
      *(ulonglong *)(param_1 + 4) = ~*(ulonglong *)(param_1 + 4);
      return;
    }
    if (uVar4 == 0x10) {
      *(byte *)(param_1 + 4) = ~(byte)param_1[4];
      return;
    }
    if (uVar4 == 0x11) {
      *(byte *)(param_1 + 4) = ~(byte)param_1[4];
      return;
    }
    if (uVar4 == 0x12) {
      param_1[4] = ~param_1[4];
      return;
    }
    if (uVar4 == 0x13) {
      *(uint *)(param_1 + 4) = ~*(uint *)(param_1 + 4);
      return;
    }
  }
  else {
    if (uVar4 == 0x15) {
      *(ulonglong *)(param_1 + 4) = ~*(ulonglong *)(param_1 + 4);
      return;
    }
    if (uVar4 == 0x100) {
      FUN_0046b6c0(param_1);
      return;
    }
    if (uVar4 == 0x101) {
      FUN_0046b8f0(param_1);
      return;
    }
    if (uVar4 == 0x102) {
      FUN_0046b6c0(param_1);
      return;
    }
  }
  if ((uVar1 & 0x4000) == 0) {
    cVar2 = FUN_0046b910(param_1);
    if (cVar2 != '\0') {
      return;
    }
    FUN_0046b840(param_1);
    return;
  }
  uVar3 = uVar1 & 0xffffbfff;
  if (uVar3 < 0x11) {
    if (uVar3 == 0x10) {
      FUN_00468530(param_1,(longlong)(char)~**(byte **)(param_1 + 4),0xffffffffffffffff);
      return;
    }
    if (uVar3 < 9) {
      if (uVar3 == 8) {
        FUN_0046b6c0(param_1);
        return;
      }
      if (uVar3 == 2) {
        FUN_00468530(param_1,(longlong)(short)~**(ushort **)(param_1 + 4),0xfffffffffffffffe);
        return;
      }
      if (uVar3 == 3) {
        FUN_00468530(param_1,~**(uint **)(param_1 + 4),0xfffffffffffffffc);
        return;
      }
      if (uVar3 - 4 < 4) {
        FUN_0046b7f0(param_1);
        return;
      }
    }
    else {
      if (uVar3 == 0xb) {
        FUN_00468820(param_1,**(short **)(param_1 + 4) == 0);
        return;
      }
      if (uVar3 == 0xc) {
        FUN_0046b870(*(undefined8 *)(param_1 + 4),param_1);
        return;
      }
    }
  }
  else if (uVar3 < 0x14) {
    if (uVar3 == 0x13) {
      FUN_00468530(param_1,~**(uint **)(param_1 + 4),4);
      return;
    }
    if (uVar3 == 0x11) {
      FUN_00468530(param_1,~**(byte **)(param_1 + 4),1);
      return;
    }
    if (uVar3 == 0x12) {
      FUN_00468530(param_1,~**(ushort **)(param_1 + 4),2);
      return;
    }
  }
  else {
    if (uVar3 == 0x14) {
      FUN_00468700(param_1,~**(ulonglong **)(param_1 + 4));
      return;
    }
    if (uVar3 == 0x15) {
      FUN_00468670(param_1,~**(ulonglong **)(param_1 + 4));
      return;
    }
  }
  FUN_0046b840(param_1);
  return;
}

