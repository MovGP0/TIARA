/* Ghidra address: 004576f0 */
/* Ghidra symbol: FUN_004576f0 */


longlong * FUN_004576f0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00414ad0(param_2,*param_1);
  if (*param_2 != 0) {
    FUN_00414e00(param_2);
    uVar4 = 0;
    if (*param_1 != 0) {
      uVar4 = *(undefined4 *)(*param_1 + -4);
    }
    uVar5 = 0;
    if (*param_2 != 0) {
      uVar5 = *(undefined4 *)(*param_2 + -4);
    }
    uVar2 = FUN_00416740(*param_1);
    uVar3 = FUN_00416740(*param_2);
    iVar1 = thunk_FUN_04015c37(param_3,0x1000100,uVar2,uVar4,uVar3,uVar5);
    if (iVar1 == 0) {
      FUN_00451a00();
    }
  }
  return param_2;
}

