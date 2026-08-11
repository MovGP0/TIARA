/* Ghidra address: 01d06e20 */
/* Ghidra symbol: FUN_01d06e20 */


longlong FUN_01d06e20(longlong *param_1)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    local_18 = param_1[0xa2];
    if (local_18 == 0) {
      if (DAT_01ff0568 == 0) {
        local_18 = 0;
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
        FUN_0043f750(&local_10,uVar2);
        sVar3 = FUN_00c40790(DAT_01ff0568,local_10);
        if (sVar3 == -1) {
          local_18 = 0;
        }
        else {
          local_18 = FUN_004aeac0(DAT_01ff0568,(int)sVar3);
        }
      }
    }
  }
  else {
    local_18 = FUN_01768e50(param_1[0x35],0);
  }
  FUN_00414480(&local_10);
  return local_18;
}

