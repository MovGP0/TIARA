/* Ghidra address: 00469670 */
/* Ghidra symbol: FUN_00469670 */


void FUN_00469670(ushort *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  uVar1 = FUN_00462650(param_1);
  uVar2 = FUN_00462650(param_2);
  if (param_3 < 6) {
    if (param_3 == 5) {
      uVar1 = (int)uVar1 % (int)uVar2;
      goto LAB_004697ba;
    }
    if (param_3 < 3) {
      if (param_3 == 2) {
        lVar3 = (longlong)(int)uVar1;
        uVar1 = (uint)(lVar3 * (int)uVar2);
        bVar4 = lVar3 * (int)uVar2 - (longlong)(int)uVar1 != 0;
        goto LAB_004697ba;
      }
      if (param_3 == 0) {
        lVar3 = (longlong)(int)uVar1;
        uVar1 = (uint)(lVar3 + (int)uVar2);
        bVar4 = lVar3 + (int)uVar2 != (longlong)(int)uVar1;
        goto LAB_004697ba;
      }
      if (param_3 == 1) {
        lVar3 = (longlong)(int)uVar1;
        uVar1 = (uint)(lVar3 - (int)uVar2);
        bVar4 = lVar3 - (int)uVar2 != (longlong)(int)uVar1;
        goto LAB_004697ba;
      }
    }
    else {
      if (param_3 == 3) {
        bVar4 = true;
        goto LAB_004697ba;
      }
      if (param_3 == 4) {
        uVar1 = (int)uVar1 / (int)uVar2;
        goto LAB_004697ba;
      }
    }
  }
  else if (param_3 < 9) {
    if (param_3 == 8) {
      uVar1 = uVar1 & uVar2;
      goto LAB_004697ba;
    }
    if (param_3 == 6) {
      uVar1 = uVar1 << ((byte)uVar2 & 0x1f);
      goto LAB_004697ba;
    }
    if (param_3 == 7) {
      uVar1 = uVar1 >> ((byte)uVar2 & 0x1f);
      goto LAB_004697ba;
    }
  }
  else {
    if (param_3 == 9) {
      uVar1 = uVar1 | uVar2;
      goto LAB_004697ba;
    }
    if (param_3 == 10) {
      uVar1 = uVar1 ^ uVar2;
      goto LAB_004697ba;
    }
  }
  FUN_00460210();
LAB_004697ba:
  if (bVar4) {
    FUN_00469560(param_1,param_2,param_3);
  }
  else {
    if ((*param_1 & 0xbfe8) != 0) {
      FUN_00460ac0(param_1);
    }
    *(uint *)(param_1 + 4) = uVar1;
    *param_1 = 3;
  }
  return;
}

