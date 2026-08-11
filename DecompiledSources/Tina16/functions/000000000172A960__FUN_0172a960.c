/* Ghidra address: 0172a960 */
/* Ghidra symbol: FUN_0172a960 */


void FUN_0172a960(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_30 [2];
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x140))
                    (*(longlong **)(param_1 + 0x1e0),local_res10,local_1c);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x18))
              (*(longlong **)(param_1 + 0x1e0),local_30,local_1c[0]);
    FUN_00416ad0(local_30,local_res18);
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x40))
              (*(longlong **)(param_1 + 0x1e0),local_1c[0],local_30[0]);
  }
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,2);
  return;
}

