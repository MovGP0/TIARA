/* Ghidra address: 01be8760 */
/* Ghidra symbol: FUN_01be8760 */


undefined8 FUN_01be8760(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01be1d70(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
  uVar2 = FUN_004113f0(uVar1,uVar2);
  FUN_01c06820(uVar2,2);
  return uVar1;
}

