/* Ghidra address: 00b6cc10 */
/* Ghidra symbol: FUN_00b6cc10 */


undefined8 * FUN_00b6cc10(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + -4);
  }
  FUN_00415d10(param_2,uVar1,0);
  uVar2 = FUN_00414df0(param_2);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + -4);
  }
  uVar3 = FUN_00415ab0(param_3);
  (**(code **)(*param_1 + 0x130))(param_1,uVar3,uVar2,uVar1);
  FUN_00b69630(local_30,*param_2);
  FUN_00414bf0(param_2,local_30[0]);
  FUN_004144d0(local_30);
  return param_2;
}

