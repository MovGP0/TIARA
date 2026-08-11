/* Ghidra address: 00cea5b0 */
/* Ghidra symbol: FUN_00cea5b0 */


void FUN_00cea5b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = *param_2;
  local_20 = (longlong *)(**(code **)(local_28 + 0x38))(local_28,1,param_1[0x15]);
  (**(code **)(*local_20 + 0x10))(local_20,param_2);
  if (local_20[3] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xa0))(param_1,local_20);
    if (cVar1 != '\0') {
      cVar1 = FUN_00ce8d90(param_1[0x15],local_20,0,1);
      if (cVar1 != '\0') {
        local_20 = (longlong *)0x0;
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,0);
    FUN_00410f20(local_20);
  }
  return;
}

