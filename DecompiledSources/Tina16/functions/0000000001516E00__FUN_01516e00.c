/* Ghidra address: 01516e00 */
/* Ghidra symbol: FUN_01516e00 */


undefined8 FUN_01516e00(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_004170c0(&LAB_01516e70,*param_1,1);
    if (iVar1 < 1) break;
    iVar1 = FUN_004170c0(&LAB_01516e70,*param_1,1);
    FUN_00416dc0(param_1,*param_1,1,iVar1 + -1);
    uVar2 = 1;
  }
  return uVar2;
}

