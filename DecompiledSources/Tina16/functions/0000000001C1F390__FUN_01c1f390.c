/* Ghidra address: 01c1f390 */
/* Ghidra symbol: FUN_01c1f390 */


void FUN_01c1f390(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_20 = (longlong *)FUN_0061d050(&PTR_FUN_014bb5c0,1,param_1);
  FUN_014bbcc0(local_20,local_res10);
  FUN_01c1f360(param_1,&local_38);
  FUN_00416ad0(&local_38,local_res18);
  FUN_014bc020(local_20,local_38);
  local_20[0x29] = param_1;
  local_20[0x28] = (longlong)FUN_01c20ac0;
  *(undefined1 *)(param_1 + 0x718) = 1;
  (**(code **)(*local_20 + 0xb0))(local_20,0);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  FUN_00414560(&local_res10,2);
  return;
}

