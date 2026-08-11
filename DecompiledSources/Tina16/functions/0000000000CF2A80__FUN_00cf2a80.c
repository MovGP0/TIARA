/* Ghidra address: 00cf2a80 */
/* Ghidra symbol: FUN_00cf2a80 */


void FUN_00cf2a80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004170c0(&DAT_00cf2b1c,param_1,1);
  if (iVar1 < 0) {
    FUN_00414ad0(param_3,&DAT_00cf2b2c);
    FUN_00414ad0(param_2,param_1);
  }
  else {
    FUN_00416dc0(param_3,param_1,1,iVar1 + -1);
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + -4);
    }
    FUN_00416dc0(param_2,param_1,iVar1 + 1,uVar2);
  }
  return;
}

