/* Ghidra address: 00411050 */
/* Ghidra symbol: FUN_00411050 */


undefined8 FUN_00411050(undefined8 param_1,longlong *param_2,code *param_3)

{
  if (((ulonglong)param_3 & 0xff00000000000000) == 0xff00000000000000) {
    FUN_0041b840(param_1,*(undefined8 *)
                          ((longlong)param_2 + ((ulonglong)param_3 & 0xffffffffffffff)));
  }
  else if (((ulonglong)param_3 & 0xff00000000000000) == 0xfe00000000000000) {
    (**(code **)(*param_2 + (longlong)(short)param_3))(param_2,param_1);
  }
  else {
    (*param_3)(param_2,param_1);
  }
  return param_1;
}

