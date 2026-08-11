/* Ghidra address: 00b01180 */
/* Ghidra symbol: FUN_00b01180 */


void FUN_00b01180(longlong param_1,undefined8 param_2,short *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  if (*param_3 == 0x23) {
    *param_4 = 0;
  }
  else {
    FUN_00441640(local_30,*(undefined8 *)(param_1 + 0x748));
    FUN_00a29300(&local_38,param_3);
    FUN_00416ad0(local_30,local_38);
    FUN_00441b80(local_20,local_30[0]);
    cVar1 = FUN_00440a20(local_20[0],1);
    if (cVar1 == '\0') {
      FUN_00416ba0(&local_40,L"Unknown location: ",param_3);
      FUN_0072d440(local_40,0,4,0);
      *param_4 = 1;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0x90))(*(longlong **)(param_1 + 0x740));
      (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
                (*(longlong **)(param_1 + 0x738),local_20[0]);
      FUN_00414ad0(param_1 + 0x748,local_20[0]);
    }
    FUN_00b01b00(param_1);
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

