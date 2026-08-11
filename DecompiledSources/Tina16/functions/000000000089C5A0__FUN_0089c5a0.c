/* Ghidra address: 0089c5a0 */
/* Ghidra symbol: FUN_0089c5a0 */


longlong * FUN_0089c5a0(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  
  FUN_00414480(param_2);
  if (param_4 == '\0') {
    cVar1 = FUN_00879070(param_3,L"LOCALHOST");
    if (cVar1 == '\0') {
      cVar1 = FUN_0089c3d0(param_1,param_3);
      if (cVar1 == '\0') {
        (**(code **)*param_1)(param_1,param_2,param_3,0);
      }
      else {
        FUN_00414ad0(param_2,param_3);
      }
    }
    else {
      FUN_00414ad0(param_2,L"127.0.0.1");
    }
  }
  else if (param_4 == '\x01') {
    cVar1 = FUN_00879070(param_3,L"LOCALHOST");
    if (cVar1 == '\0') {
      FUN_008759b0(param_2,param_3);
      if (*param_2 == 0) {
        (**(code **)*param_1)(param_1,param_2,param_3,1);
      }
    }
    else {
      FUN_00414ad0(param_2,&LAB_0089c70c);
    }
  }
  else {
    FUN_0089bf30(param_1);
  }
  return param_2;
}

