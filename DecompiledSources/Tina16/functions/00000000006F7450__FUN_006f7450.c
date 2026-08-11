/* Ghidra address: 006f7450 */
/* Ghidra symbol: FUN_006f7450 */


undefined4 FUN_006f7450(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_0065b870(param_1);
  uVar3 = FUN_00416740(local_res10[0]);
  uVar1 = thunk_FUN_041b2403(uVar2,0x1057,0,uVar3);
  FUN_00414480(local_res10);
  return uVar1;
}

