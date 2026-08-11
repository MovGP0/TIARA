/* Ghidra address: 0046e4c0 */
/* Ghidra symbol: FUN_0046e4c0 */


void FUN_0046e4c0(longlong param_1,byte param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00411a80(param_1,param_2);
  FUN_00411e10(DAT_020115c0,0xffffffff);
  if (*(ushort *)(param_1 + 8) != 0) {
    *(undefined8 *)(DAT_020115b8 + (longlong)(int)(*(ushort *)(param_1 + 8) - 0x100) * 8) = 0;
    *(undefined8 *)(DAT_020115b8 + (longlong)(int)(*(ushort *)(param_1 + 8) - 0x100) * 8) =
         DAT_01dc4398;
  }
  FUN_00412130(DAT_020115c0);
  FUN_00410ef0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

