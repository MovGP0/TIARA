/* Ghidra address: 0069ddc0 */
/* Ghidra symbol: FUN_0069ddc0 */


bool FUN_0069ddc0(longlong param_1)

{
  short sVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0069df70(param_1);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005ae0);
    FUN_0069c390(local_10);
  }
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x50) + 0x4c);
  FUN_00414480(&local_10);
  return sVar1 != 1;
}

