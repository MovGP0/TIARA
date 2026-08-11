/* Ghidra address: 009db9f0 */
/* Ghidra symbol: FUN_009db9f0 */


undefined4 FUN_009db9f0(undefined8 param_1,undefined8 param_2,short param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  *param_4 = 0;
  plVar1 = (longlong *)FUN_009dab20(param_1);
  uVar2 = FUN_009d3290(local_res10[0]);
  uVar2 = (**(code **)(*plVar1 + 0x330))(plVar1,uVar2,param_3 != 0);
  FUN_009d3370(param_4,uVar2,param_1,0);
  FUN_0041b800(local_res10);
  return 0;
}

