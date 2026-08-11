/* Ghidra address: 01177d80 */
/* Ghidra symbol: FUN_01177d80 */


int FUN_01177d80(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong local_28;
  longlong local_20;
  
  local_20 = *param_1;
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0);
  iVar1 = FUN_01177e70(&local_20,0,param_2);
  if (iVar1 == 0) {
    local_20 = *param_1 + 0x20;
    iVar1 = FUN_01177e70(&local_20,0,param_2);
    if (iVar1 == 0) {
      local_20 = *param_1 + 0x40;
      iVar1 = FUN_01177e70(&local_20,1,param_2);
      if (iVar1 == 0) {
        local_28 = *param_1 + 0x60;
        iVar1 = FUN_01177ba0(&local_28,param_2);
        if (iVar1 == 0) {
          local_28 = *param_1 + 0xb20;
          iVar1 = FUN_01177ba0(&local_28,param_2);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = iVar1 * 10 + 5;
          }
        }
        else {
          iVar1 = iVar1 * 10 + 4;
        }
      }
      else {
        iVar1 = iVar1 * 10 + 3;
      }
    }
    else {
      iVar1 = iVar1 * 10 + 2;
    }
  }
  else {
    iVar1 = iVar1 * 10 + 1;
  }
  return iVar1;
}

