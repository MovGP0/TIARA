/* Ghidra address: 00f2cc80 */
/* Ghidra symbol: FUN_00f2cc80 */


void FUN_00f2cc80(longlong param_1)

{
  short sVar1;
  short local_28 [4];
  undefined1 local_20;
  longlong *local_18;
  longlong *local_10;
  
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
  local_10 = (longlong *)(param_1 + 8);
  while (((ushort *)*local_10 < *(ushort **)(param_1 + 0x10) && (*(ushort *)*local_10 < 0x21))) {
    *local_10 = *local_10 + 2;
  }
  if (*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 8)) {
    FUN_00f2cc20(param_1,PTR_PTR_02002f20);
  }
  sVar1 = **(short **)(param_1 + 8);
  if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
    FUN_00f2cac0(param_1,sVar1);
  }
  else {
    FUN_00f2c9c0(param_1);
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
  local_18 = (longlong *)(param_1 + 8);
  while (((ushort *)*local_18 < *(ushort **)(param_1 + 0x10) && (*(ushort *)*local_18 < 0x21))) {
    *local_18 = *local_18 + 2;
  }
  local_28[0] = **(short **)(param_1 + 8);
  if (local_28[0] != 0x5d) {
    local_20 = 9;
    FUN_00f2cc40(param_1,PTR_PTR_02005930,local_28,0);
  }
  return;
}

