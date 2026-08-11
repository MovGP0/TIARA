/* Ghidra address: 00459ca0 */
/* Ghidra symbol: FUN_00459ca0 */


undefined8 * FUN_00459ca0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(param_3 + -4);
  }
  uVar2 = FUN_00416740(param_3);
  iVar1 = (**(code **)*param_1)(param_1,uVar2,uVar3);
  FUN_00419260(param_2,&DAT_00406578,1,(longlong)iVar1);
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(param_3 + -4);
  }
  FUN_00459d70(param_1,param_3,1,uVar3,*param_2,0,1);
  return param_2;
}

