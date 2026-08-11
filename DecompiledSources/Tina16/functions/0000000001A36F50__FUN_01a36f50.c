/* Ghidra address: 01a36f50 */
/* Ghidra symbol: FUN_01a36f50 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01a36f50(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *local_res10 [3];
  longlong local_38 [3];
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  local_38[2] = 0;
  local_38[1] = 0;
  local_38[0] = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  (**(code **)(*local_res10[0] + 0x100))(local_res10[0],local_20);
  (**(code **)(*local_20[0] + 0x100))(local_20[0],local_38,L"error");
  if (local_38[0] != 0) {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_38[0]);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(local_38);
  FUN_00417840(local_38 + 1,&LAB_00b9fca0,3);
  FUN_0041b800(local_res10);
  return;
}

