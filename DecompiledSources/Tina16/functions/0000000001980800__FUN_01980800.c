/* Ghidra address: 01980800 */
/* Ghidra symbol: FUN_01980800 */


void FUN_01980800(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *local_res10 [3];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    (**(code **)(*local_res10[0] + 0x20))(local_res10[0],local_20);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                      (*(longlong **)(param_1 + 8),local_20[0]);
    if (-1 < iVar1) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
      FUN_0041b840(&local_28,uVar2);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),iVar1);
      (**(code **)(*local_28 + 0x10))(local_28);
    }
    (**(code **)(*local_res10[0] + 8))(local_res10[0]);
    (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_30);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
              (*(longlong **)(param_1 + 8),local_30,local_res10[0]);
  }
  FUN_00414480(&local_30);
  FUN_0041b800(&local_28);
  FUN_00414480(local_20);
  FUN_0041b800(local_res10);
  return;
}

