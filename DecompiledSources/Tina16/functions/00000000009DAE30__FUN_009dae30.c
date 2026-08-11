/* Ghidra address: 009dae30 */
/* Ghidra symbol: FUN_009dae30 */


undefined4 FUN_009dae30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_3 = 0;
  uVar1 = FUN_009dab20(param_1);
  plVar2 = (longlong *)FUN_009534b0(&PTR_FUN_0090ba08,1,uVar1);
  FUN_004168e0(&local_28,param_2);
  (**(code **)(*plVar2 + 0x2c0))(plVar2,local_28);
  lVar3 = FUN_009d4b10(&PTR_FUN_009ce858,1,plVar2,param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x70;
  }
  FUN_0041b840(param_3,lVar3);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

