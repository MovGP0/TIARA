/* Ghidra address: 00b4fc80 */
/* Ghidra symbol: FUN_00b4fc80 */


void FUN_00b4fc80(longlong *param_1,longlong *param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((char)param_2[1] != '\0') {
    (**(code **)(*param_1 + 8))(param_1,param_2,local_20);
    FUN_00b1ac40(param_1[3],local_20);
    (**(code **)(*param_2 + -0x20))(param_2,1);
  }
  FUN_004144d0(local_20);
  return;
}

