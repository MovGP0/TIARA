/* Ghidra address: 00b6cd40 */
/* Ghidra symbol: FUN_00b6cd40 */


undefined8 * FUN_00b6cd40(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + -4);
  }
  FUN_004169f0(param_2,uVar1);
  uVar2 = FUN_00414de0(param_2);
  iVar4 = 0;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_3 + -4);
  }
  uVar3 = FUN_00416740(param_3);
  (**(code **)(*param_1 + 0x130))(param_1,uVar3,uVar2,iVar4 * 2);
  FUN_00b696b0(local_30,*param_2);
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414480(local_30);
  return param_2;
}

