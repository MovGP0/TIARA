/* Ghidra address: 00809d40 */
/* Ghidra symbol: FUN_00809d40 */


void FUN_00809d40(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    param_1[2] = 0;
  }
  else {
    if (param_2 == *param_1) {
      bVar4 = true;
    }
    else if ((param_2 == 0) || (*param_1 == 0)) {
      bVar4 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_2,*param_1);
      bVar4 = iVar1 == 0;
    }
    if (!bVar4) {
      uVar2 = FUN_00416740(param_2);
      lVar3 = thunk_FUN_0415c2a5(uVar2,0);
      param_1[2] = lVar3;
    }
  }
  FUN_00414ad0(param_1,param_2);
  return;
}

