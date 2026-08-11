/* Ghidra address: 00b8a7d0 */
/* Ghidra symbol: FUN_00b8a7d0 */


longlong * FUN_00b8a7d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_0043ea00(local_20,local_res20);
  if (local_20[0] == 0) {
    FUN_00414ad0(param_2,local_res20);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))
                      (*(longlong **)(param_1 + 0x18),local_res18,&local_c);
    if (cVar1 == '\0') {
      FUN_00414ad0(param_2,local_res20);
    }
    else {
      FUN_004b5390(*(undefined8 *)(param_1 + 0x18),param_2,local_c);
      if (*param_2 == 0) {
        FUN_004b5390(*(undefined8 *)(param_1 + 0x20),param_2,local_c);
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414560(&local_res18,2);
  return param_2;
}

