/* Ghidra address: 012845f0 */
/* Ghidra symbol: FUN_012845f0 */


undefined8 FUN_012845f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *local_res10 [3];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00414480(param_1);
  local_28 = FUN_004ba720(&PTR_FUN_0047d288,1);
  local_48 = FUN_0045ae90();
  local_40 = 0;
  local_20 = FUN_00bad320(&PTR_FUN_00b9f300,1,local_28,1);
  if (local_20 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = local_20 + 0x60;
  }
  (**(code **)(*local_res10[0] + 200))(local_res10[0],lVar1);
  FUN_00410f20(local_20);
  FUN_004ba980(local_28,param_1);
  FUN_00410f20(local_28);
  FUN_0041b800(local_res10);
  return param_1;
}

