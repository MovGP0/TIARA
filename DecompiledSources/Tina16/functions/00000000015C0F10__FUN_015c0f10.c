/* Ghidra address: 015c0f10 */
/* Ghidra symbol: FUN_015c0f10 */


void FUN_015c0f10(longlong *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 local_20;
  
  local_20 = 0;
  if (-1 < param_2 + -1) {
    do {
      bVar2 = *(byte *)(*param_1 + (longlong)local_20);
      bVar1 = FUN_015c0e60(param_3);
      bVar2 = bVar2 ^ bVar1;
      FUN_015c0dd0(bVar2,param_3);
      *(byte *)(*param_1 + (longlong)local_20) = bVar2;
      local_20 = local_20 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

