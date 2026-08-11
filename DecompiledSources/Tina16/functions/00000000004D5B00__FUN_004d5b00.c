/* Ghidra address: 004d5b00 */
/* Ghidra symbol: FUN_004d5b00 */


void FUN_004d5b00(longlong *param_1,byte param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00411a80(param_1,param_2);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0) {
    (**(code **)(*DAT_020115f0 + 0x28))(DAT_020115f0);
  }
  if ((char)param_1[0x15] != '\0') {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  if (PTR_FUN_01dc64c0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_01dc64c0)(DAT_01dc64c8,param_1);
  }
  FUN_004d23a0(param_1,param_2 & 0xfc);
  (**(code **)(*DAT_020115f0 + 0x30))(DAT_020115f0);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

