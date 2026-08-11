/* Ghidra address: 00809db0 */
/* Ghidra symbol: FUN_00809db0 */


void FUN_00809db0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_2 == lVar1) {
      bVar4 = true;
    }
    else if ((param_2 == 0) || (lVar1 == 0)) {
      bVar4 = false;
    }
    else {
      iVar2 = FUN_0043e420(param_2,lVar1);
      bVar4 = iVar2 == 0;
    }
    if (!bVar4) {
      uVar3 = FUN_00416740(param_2);
      uVar3 = thunk_FUN_0415c2a5(uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
  }
  FUN_00414ad0(param_1 + 8,param_2);
  return;
}

