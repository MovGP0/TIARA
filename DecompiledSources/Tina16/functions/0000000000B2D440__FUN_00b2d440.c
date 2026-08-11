/* Ghidra address: 00b2d440 */
/* Ghidra symbol: FUN_00b2d440 */


void FUN_00b2d440(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_2[2];
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_2,iVar2);
      FUN_00b2d400(param_1,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

