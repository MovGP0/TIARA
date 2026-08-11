/* Ghidra address: 0140af60 */
/* Ghidra symbol: FUN_0140af60 */


ulonglong FUN_0140af60(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 local_40;
  
  uVar3 = 0;
  local_40 = (int)*param_1;
  if (local_40 < 5) {
    if (local_40 == 4) {
      uVar3 = FUN_0140a660(1,param_2);
    }
    else if (local_40 == 0) {
      uVar3 = 0;
    }
    else if (local_40 == 1) {
      iVar1 = FUN_0140a5b0(param_2);
      uVar3 = (ulonglong)(iVar1 - 1);
    }
    else if (local_40 == 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (local_40 == 3) {
        uVar3 = FUN_0140a5b0(param_2 + -1);
      }
    }
  }
  else if (local_40 == 5) {
    uVar2 = FUN_0140a5b0(param_2 + -1);
    uVar3 = FUN_0140a660(uVar2,param_2);
  }
  else if (local_40 == 6) {
    uVar3 = 0;
  }
  else if (local_40 == 7) {
    iVar1 = FUN_0140a5b0(param_2);
    uVar3 = (ulonglong)(iVar1 - 1);
  }
  return uVar3;
}

