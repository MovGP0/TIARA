/* Ghidra address: 016374b0 */
/* Ghidra symbol: FUN_016374b0 */


undefined8 FUN_016374b0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined1 local_118 [264];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416910(local_118,local_res8[0],0xff);
  uVar1 = FUN_016261e0(local_118);
  uVar2 = FUN_01698550((double)param_2);
  uVar1 = FUN_01698500(uVar1,uVar2,0x14f);
  FUN_00414480(local_res8);
  return uVar1;
}

