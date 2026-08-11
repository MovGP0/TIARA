/* Ghidra address: 004ae080 */
/* Ghidra symbol: FUN_004ae080 */


char FUN_004ae080(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  char local_1a;
  char local_19;
  
  local_30 = auStack_58;
  (**(code **)(*DAT_020115f0 + 0x28))(DAT_020115f0);
  local_19 = (*(ushort *)((longlong)param_1 + 0x34) & 0x201) == 0;
  if ((bool)local_19) {
    FUN_004ade40();
  }
  local_28 = *param_1;
  local_1a = FUN_004adfb0(auStack_58,local_28);
  if (local_1a != '\0') {
    FUN_004d2760(param_1);
  }
  if (local_19 != '\0') {
    FUN_004adec0();
  }
  if (local_19 != '\0') {
    FUN_004adf20();
  }
  (**(code **)(*DAT_020115f0 + 0x30))(DAT_020115f0);
  return local_1a;
}

