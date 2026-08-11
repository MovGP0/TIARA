/* Ghidra address: 01ce7b20 */
/* Ghidra symbol: FUN_01ce7b20 */


undefined8 FUN_01ce7b20(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_004170c0(&LAB_01ce7b90,*param_1,1);
    if (iVar1 < 1) break;
    iVar1 = FUN_004170c0(&LAB_01ce7b90,*param_1,1);
    FUN_00416dc0(param_1,*param_1,1,iVar1 + -1);
    uVar2 = 1;
  }
  return uVar2;
}

