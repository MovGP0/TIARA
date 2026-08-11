/* Ghidra address: 008734d0 */
/* Ghidra symbol: FUN_008734d0 */


undefined8 *
FUN_008734d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00414480(param_2);
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4);
  if (0 < iVar1) {
    FUN_004169f0(param_2,iVar1);
    uVar2 = FUN_00416740(*param_2);
    (**(code **)(*param_1 + 0x18))(param_1,param_3,param_4,uVar2,iVar1);
  }
  return param_2;
}

