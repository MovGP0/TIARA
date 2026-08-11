/* Ghidra address: 00c8ed10 */
/* Ghidra symbol: FUN_00c8ed10 */


void FUN_00c8ed10(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = (undefined8 *)param_1[0xb];
  (**(code **)*local_28)(local_28);
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00c8fd40(param_1,0xffffffffffffffff);
  }
  local_20 = (longlong *)param_1[0xb];
  (**(code **)(*local_20 + 8))(local_20);
  return;
}

