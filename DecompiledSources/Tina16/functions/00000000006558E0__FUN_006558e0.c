/* Ghidra address: 006558e0 */
/* Ghidra symbol: FUN_006558e0 */


void FUN_006558e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1[0x8d] == 0) {
    (**(code **)(*param_1 + 0x1d0))(param_1);
    thunk_FUN_03ea0151(param_1[0x8d],DAT_020122da,param_1);
    thunk_FUN_03ea0151(param_1[0x8d],DAT_020122d8,param_1);
    if (param_1[0xf] != 0) {
      uVar2 = FUN_00655880(param_1[0xf],param_1);
      thunk_FUN_041cc6e2(param_1[0x8d],uVar2,0,0,0,0,0x13);
    }
    iVar1 = FUN_00654c00();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_00654bc0(param_1,iVar3);
        FUN_0064c920(uVar2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

