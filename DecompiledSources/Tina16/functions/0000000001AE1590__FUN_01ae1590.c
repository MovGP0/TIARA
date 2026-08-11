/* Ghidra address: 01ae1590 */
/* Ghidra symbol: FUN_01ae1590 */


void FUN_01ae1590(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00414610(param_5);
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(param_2,iVar2);
        FUN_01adfeb0(param_1,uVar1,0,0,param_5,0,0);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414480(&param_5);
  return;
}

