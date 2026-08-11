/* Ghidra address: 009504f0 */
/* Ghidra symbol: FUN_009504f0 */


void FUN_009504f0(longlong *param_1,byte param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  FUN_00411a80(param_1,param_2);
  local_20 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
  if (local_20 != (longlong *)0x0) {
    local_21 = (**(code **)(*local_20 + 0xa0))(local_20);
    (**(code **)(*local_20 + 0xe0))(local_20,0);
    (**(code **)(*local_20 + 800))(local_20,param_1);
    (**(code **)(*local_20 + 0xe0))(local_20,local_21);
  }
  FUN_0094c630(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

