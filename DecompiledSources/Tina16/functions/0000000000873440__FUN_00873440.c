/* Ghidra address: 00873440 */
/* Ghidra symbol: FUN_00873440 */


undefined8 *
FUN_00873440(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00414480(param_2);
  iVar1 = FUN_00873080(param_1,param_3,param_4,param_5);
  if (0 < iVar1) {
    FUN_004169f0(param_2,iVar1);
    uVar2 = FUN_00416740(*param_2);
    (**(code **)(*param_1 + 0x18))(param_1,param_3 + param_4,param_5,uVar2,iVar1);
  }
  return param_2;
}

