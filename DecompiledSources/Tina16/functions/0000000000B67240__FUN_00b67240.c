/* Ghidra address: 00b67240 */
/* Ghidra symbol: FUN_00b67240 */


void FUN_00b67240(undefined8 param_1,undefined8 *param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = *param_2;
  uStack_28 = param_2[1];
  uStack_20 = param_2[2];
  FUN_0046bd60(&local_30);
  uVar1 = FUN_00464c60(&local_30);
  uVar1 = FUN_00b66b60(param_1,uVar1);
  FUN_00468860(&local_50,uVar1);
  FUN_00b671b0(param_1,&local_50,param_3,param_4,param_5);
  FUN_00460ba0(&local_50);
  FUN_00460ba0(&local_30);
  return;
}

