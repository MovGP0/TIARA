/* Ghidra address: 00cc1a10 */
/* Ghidra symbol: FUN_00cc1a10 */


void FUN_00cc1a10(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = (undefined8 *)param_1[10];
  (**(code **)*local_28)(local_28);
  cVar1 = FUN_00cc1ad0(param_1);
  if (cVar1 == '\0') {
    if ((char)param_1[0xd] == '\0') {
      (**(code **)(*param_1 + 0x80))(param_1);
    }
    *(byte *)((longlong)param_1 + 0x69) = *(byte *)((longlong)param_1 + 0x69) | 1;
  }
  local_20 = (longlong *)param_1[10];
  (**(code **)(*local_20 + 8))(local_20);
  return;
}

