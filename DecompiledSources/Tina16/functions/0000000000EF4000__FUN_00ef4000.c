/* Ghidra address: 00ef4000 */
/* Ghidra symbol: FUN_00ef4000 */


void FUN_00ef4000(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = FUN_004170c0(&DAT_00ef405c,*param_1,1);
    if (iVar2 == 0) break;
    uVar1 = FUN_004170c0(&DAT_00ef405c,*param_1,1);
    FUN_00416e20(param_1,uVar1,1);
  }
  return;
}

