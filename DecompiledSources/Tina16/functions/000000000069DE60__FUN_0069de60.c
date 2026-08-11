/* Ghidra address: 0069de60 */
/* Ghidra symbol: FUN_0069de60 */


void FUN_0069de60(longlong param_1,byte param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0069d4b0(param_1,0);
  FUN_0069df70(param_1);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005ae0);
    FUN_0069c390(local_10);
  }
  FUN_0069d2f0(param_1,0);
  *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x4c) =
       *(undefined2 *)(&DAT_01dfc8e8 + (ulonglong)param_2 * 4);
  FUN_00414480(&local_10);
  return;
}

