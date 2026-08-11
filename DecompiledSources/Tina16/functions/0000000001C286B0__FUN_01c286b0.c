/* Ghidra address: 01c286b0 */
/* Ghidra symbol: FUN_01c286b0 */


longlong * FUN_01c286b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  while (*(short *)*param_2 == 0x20) {
    FUN_00416e20(param_2,1,1);
  }
  while( true ) {
    iVar2 = 0;
    lVar1 = *param_2;
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + -4);
    }
    if (*(short *)(*param_2 + -2 + (longlong)iVar2 * 2) != 0x20) break;
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar3 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416e20(param_2,uVar3,1);
  }
  FUN_00414ad0(param_1,*param_2);
  uVar3 = FUN_004170c0(&LAB_01c28790,*param_1,1);
  FUN_00416e20(param_2,1,uVar3);
  uVar4 = FUN_004170c0(&LAB_01c28790,*param_1,1);
  uVar3 = 0;
  if (*param_1 != 0) {
    uVar3 = *(undefined4 *)(*param_1 + -4);
  }
  FUN_00416e20(param_1,uVar4,uVar3);
  return param_1;
}

