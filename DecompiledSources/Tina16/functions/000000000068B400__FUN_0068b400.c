/* Ghidra address: 0068b400 */
/* Ghidra symbol: FUN_0068b400 */


void FUN_0068b400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_00416740(local_res10[0]);
  uVar1 = FUN_00414d00(uVar2);
  FUN_00414740(local_20,uVar2,uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x80))
            (*(longlong **)(param_1 + 0x4a0),local_20[0],param_3);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

