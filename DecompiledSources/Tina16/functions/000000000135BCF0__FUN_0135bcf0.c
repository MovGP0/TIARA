/* Ghidra address: 0135bcf0 */
/* Ghidra symbol: FUN_0135bcf0 */


void FUN_0135bcf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_30;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_0135bb30(param_1,&local_10,local_res10,local_res18,&local_18,&local_1c,&local_20);
  iVar2 = FUN_00416db0(local_10,local_res20);
  if (iVar2 != 0) {
    if (local_1c < 1) {
      FUN_00416ad0(&local_18,local_res20);
    }
    else {
      FUN_00416e20(&local_18,local_1c,local_20);
      FUN_00416ea0(local_res20,&local_18,local_1c);
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                      (*(longlong **)(param_1 + 8),local_res10,&local_24);
    if (cVar1 == '\0') {
      FUN_00416cd0(&local_30,3,local_res10,&LAB_0135bee8,local_18);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),local_30);
    }
    else {
      FUN_004b5450(*(undefined8 *)(param_1 + 8),local_24,local_18);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
              (*(longlong **)(param_1 + 0x10),local_res20);
  }
  FUN_00414480(&local_30);
  FUN_00414560(&local_18,2);
  FUN_00414560(&local_res10,3);
  return;
}

