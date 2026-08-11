/* Ghidra address: 00836610 */
/* Ghidra symbol: FUN_00836610 */


void FUN_00836610(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_008355d0(param_1);
  if ((cVar1 == '\0') || ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)) {
    FUN_00681fb0(param_1,param_2);
  }
  else {
    if ((*(byte *)(param_1 + 0x4e9) & 2) == 0) {
      FUN_008350c0(param_1,&local_10);
      FUN_00414ad0(param_1 + 0x4f8,local_10);
      FUN_00681fb0(param_1,param_2);
    }
    *(byte *)(param_1 + 0x4e9) = *(byte *)(param_1 + 0x4e9) & 0xfd;
    FUN_00835cc0(param_1);
  }
  FUN_00414480(&local_10);
  return;
}

