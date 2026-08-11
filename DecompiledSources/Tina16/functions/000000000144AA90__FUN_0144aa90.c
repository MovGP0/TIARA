/* Ghidra address: 0144aa90 */
/* Ghidra symbol: FUN_0144aa90 */


void FUN_0144aa90(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uVar1 = *param_2;
  dVar2 = (double)param_2[1];
  if (dVar2 == 0.0) {
    FUN_014496a0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_48,0,uVar1,0,0,
                 param_10);
  }
  else {
    dVar3 = (double)FUN_00c44590(&local_48);
    uVar4 = FUN_00c445d0(&local_48);
    FUN_014496a0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,dVar3 * 2.0,0,uVar1,dVar2,
                 uVar4,param_10);
  }
  return;
}

