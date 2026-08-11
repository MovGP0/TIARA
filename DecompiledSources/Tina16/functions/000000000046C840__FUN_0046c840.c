/* Ghidra address: 0046c840 */
/* Ghidra symbol: FUN_0046c840 */


undefined8 FUN_0046c840(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int local_38 [2];
  undefined4 local_30;
  int local_2c;
  
  local_30 = 0;
  local_2c = param_3;
  FUN_0046c750(param_1,&local_30,1,0xc);
  iVar1 = 0;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      local_38[0] = iVar1;
      FUN_0046ccc0(param_1,param_2,1,local_38);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}

