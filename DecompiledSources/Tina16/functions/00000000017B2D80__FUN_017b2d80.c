/* Ghidra address: 017b2d80 */
/* Ghidra symbol: FUN_017b2d80 */


undefined8 FUN_017b2d80(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20;
  
  if ((param_2 < -1) || (6 < param_2)) {
    local_20 = FUN_00498310(0xffffd499,0xffffd499);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x18);
    uVar1 = (longlong)iVar3 / 2 & 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1c);
    uVar2 = (longlong)iVar4 / 2 & 0xffffffff;
    if (param_2 + 1 < 5) {
      if (param_2 + 1 == 4) {
        local_20 = FUN_00498310(iVar3,uVar2);
      }
      else if (param_2 == -1) {
        local_20 = FUN_00498310(0,0);
      }
      else if (param_2 == 0) {
        local_20 = FUN_00498310(uVar1,0);
      }
      else if (param_2 == 1) {
        local_20 = FUN_00498310(iVar3,0);
      }
      else if (param_2 == 2) {
        local_20 = FUN_00498310(0,uVar2);
      }
    }
    else if (param_2 == 4) {
      local_20 = FUN_00498310(0,iVar4);
    }
    else if (param_2 == 5) {
      local_20 = FUN_00498310(uVar1,iVar4);
    }
    else if (param_2 == 6) {
      local_20 = FUN_00498310(iVar3,iVar4);
    }
    local_20 = CONCAT44(local_20._4_4_ + *(int *)(param_1 + 0x1c),
                        (int)local_20 + *(int *)(param_1 + 0x18));
  }
  return local_20;
}

