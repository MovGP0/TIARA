/* Ghidra address: 00c41210 */
/* Ghidra symbol: FUN_00c41210 */


undefined8 FUN_00c41210(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  FUN_00414480(param_1);
  uVar1 = FUN_00416740(*param_2);
  lVar2 = FUN_004429a0(uVar1,param_3);
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*param_2 != 0) {
      uVar4 = *(undefined4 *)(*param_2 + -4);
    }
    lVar3 = FUN_00416740(*param_2);
    FUN_00416dc0(param_1,*param_2,(lVar2 - lVar3) / 2 + 2U & 0xffffffff,uVar4);
    uVar4 = 0;
    if (*param_2 != 0) {
      uVar4 = *(undefined4 *)(*param_2 + -4);
    }
    lVar3 = FUN_00416740(*param_2);
    FUN_00416e20(param_2,(lVar2 - lVar3) / 2 + 1,uVar4);
  }
  return param_1;
}

