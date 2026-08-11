/* Ghidra address: 00f010b0 */
/* Ghidra symbol: FUN_00f010b0 */


void FUN_00f010b0(longlong param_1,undefined8 param_2,undefined2 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  if ((((param_4 < 0) || (param_5 < 0)) || (*(int *)(param_1 + 0x98) <= param_4)) ||
     (*(int *)(param_1 + 0x9c) <= param_5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((uint7)(uint3)((uint)param_5 >> 8),1);
  }
  FUN_00f012b0(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}

