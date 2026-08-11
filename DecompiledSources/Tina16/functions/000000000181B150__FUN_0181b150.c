/* Ghidra address: 0181b150 */
/* Ghidra symbol: FUN_0181b150 */


void FUN_0181b150(longlong *param_1,char param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  if (((char)param_1[0xd9] != '\0') && (*(char *)((longlong)param_1 + 0x6cc) == '\0')) {
    local_28 = (**(code **)(*param_1 + 0x330))(param_1,1);
    local_20 = (**(code **)(*param_1 + 0x330))(param_1,0);
    if (local_20 != 0) {
      *(undefined1 *)((longlong)param_1 + 0x6cc) = 1;
      if (param_2 == '\0') {
        (**(code **)(*param_1 + 0x308))(param_1,local_20,local_28);
        *(undefined1 *)((longlong)param_1 + 0x6ca) = 1;
      }
      else if (param_2 == '\x01') {
        (**(code **)(*param_1 + 0x310))(param_1,local_20,local_28);
        *(undefined1 *)((longlong)param_1 + 0x6cb) = 1;
      }
      else if (param_2 == '\x02') {
        (**(code **)(*param_1 + 0x318))(param_1,local_20);
      }
      *(undefined1 *)((longlong)param_1 + 0x6cc) = 0;
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
    }
  }
  return;
}

