/* Ghidra address: 018bd100 */
/* Ghidra symbol: FUN_018bd100 */


void FUN_018bd100(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)*param_1)(param_1);
  if (1 < iVar1) {
    uVar2 = FUN_018039f0(param_1[0xf],param_2);
    FUN_00410f20(uVar2);
    FUN_018b7df0(param_1);
  }
  return;
}

