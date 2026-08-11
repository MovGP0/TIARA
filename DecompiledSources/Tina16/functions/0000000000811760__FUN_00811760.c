/* Ghidra address: 00811760 */
/* Ghidra symbol: FUN_00811760 */


longlong FUN_00811760(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_008117e0(param_1,param_2);
  iVar1 = FUN_004230c0(param_2);
  if (iVar1 < 1) {
    FUN_004238d0(param_2,0,0,0,0);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,9);
    iVar3 = FUN_004230c0(param_2);
    iVar1 = iVar3 / 2;
    if (iVar2 < iVar3 / 2) {
      iVar1 = iVar2;
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 0xc) - iVar1;
  }
  return param_2;
}

