/* Ghidra address: 0040c2f0 */
/* Ghidra symbol: FUN_0040c2f0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0040c2f0(ulonglong param_1)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  double dVar4;
  double local_28;
  ulonglong local_20 [2];
  
  local_20[0] = param_1;
  uVar1 = FUN_0040a160(local_20,3);
  if (uVar1 < 0x8000) {
    if (param_1 == 0) {
      FUN_00409f50(4,1);
      dVar4 = -INFINITY;
    }
    else if (param_1 < 0x7ff0000000000000) {
      uVar1 = (uVar1 & 0x7ff0) >> 4;
      if (uVar1 == 0) {
        uVar3 = param_1 & 0xfffffffffffff;
        iVar2 = -0x3fe;
        if ((param_1 & 0xfffffffe00000) == 0) {
          uVar3 = uVar3 << 0x20;
          iVar2 = -0x41e;
        }
        if ((uVar3 & 0x1fffe000000000) == 0) {
          uVar3 = uVar3 << 0x10;
          iVar2 = iVar2 + -0x10;
        }
        if ((uVar3 & 0x1fe00000000000) == 0) {
          uVar3 = uVar3 << 8;
          iVar2 = iVar2 + -8;
        }
        if ((uVar3 & 0x1e000000000000) == 0) {
          uVar3 = uVar3 << 4;
          iVar2 = iVar2 + -4;
        }
        if ((uVar3 & 0x18000000000000) == 0) {
          uVar3 = uVar3 * 4;
          iVar2 = iVar2 + -2;
        }
        if ((uVar3 & 0x10000000000000) == 0) {
          uVar3 = uVar3 * 2;
          iVar2 = iVar2 + -1;
        }
      }
      else {
        iVar2 = uVar1 - 0x3ff;
        uVar3 = param_1;
      }
      uVar3 = uVar3 & 0xfffffffffffff;
      if (uVar3 < 0x6a09e667f3bcd) {
        local_28 = (double)(uVar3 + 0x3ff0000000000000);
      }
      else {
        local_28 = (double)(uVar3 + 0x3fe0000000000000);
        iVar2 = iVar2 + 1;
      }
      dVar4 = (double)FUN_0040c200(local_28 - 1.0);
      dVar4 = dVar4 + (double)iVar2 * _DAT_01dbabf8 + (double)iVar2 * _DAT_01dbabf0;
    }
    else if (param_1 == 0x7ff0000000000000) {
      dVar4 = INFINITY;
    }
    else {
      dVar4 = -NAN;
    }
  }
  else if (param_1 == 0x8000000000000000) {
    FUN_00409f50(4,1);
    dVar4 = -INFINITY;
  }
  else {
    if (param_1 < 0xfff0000000000001) {
      FUN_00409f50(1,1);
    }
    dVar4 = -NAN;
  }
  return dVar4;
}

