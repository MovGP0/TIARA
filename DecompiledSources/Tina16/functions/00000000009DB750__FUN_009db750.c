/* Ghidra address: 009db750 */
/* Ghidra symbol: FUN_009db750 */


undefined4 FUN_009db750(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_3 = 0;
  plVar1 = (longlong *)FUN_009dab20(param_1);
  FUN_004168e0(&local_28,param_2);
  uVar2 = (**(code **)(*plVar1 + 0x328))(plVar1,local_28);
  lVar3 = FUN_009d4b10(&PTR_FUN_009ce020,1,uVar2,param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x68;
  }
  FUN_0041b840(param_3,lVar3);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

