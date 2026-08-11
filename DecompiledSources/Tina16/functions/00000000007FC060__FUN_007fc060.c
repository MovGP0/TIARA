/* Ghidra address: 007fc060 */
/* Ghidra symbol: FUN_007fc060 */


void FUN_007fc060(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_19;
  
  local_30 = auStack_58;
  local_19 = FUN_0065be20(param_1);
  if (local_19 != 0) {
    FUN_0065ed10(param_1,1);
  }
  if ((local_19 & param_1[0xf] == 0) != 0) {
    (**(code **)(*param_1 + 0x1e8))(param_1);
  }
  FUN_0065f000(param_1,param_2);
  if ((1.0 < *(float *)(param_1 + 0x61)) && (param_1[0xf] != 0)) {
    FUN_007fbfd0(auStack_58,param_1);
  }
  if (local_19 != 0) {
    FUN_0065ed10(param_1,0);
  }
  return;
}

