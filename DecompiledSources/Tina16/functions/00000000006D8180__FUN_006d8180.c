/* Ghidra address: 006d8180 */
/* Ghidra symbol: FUN_006d8180 */


void FUN_006d8180(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((-1 < param_2) && (iVar2 = FUN_006d7630(param_1), param_2 < iVar2)) {
    uVar1 = FUN_006d7610(param_1,param_2);
    FUN_006d78a0(param_1,uVar1);
    return;
  }
  FUN_006d78a0(param_1,0);
  return;
}

