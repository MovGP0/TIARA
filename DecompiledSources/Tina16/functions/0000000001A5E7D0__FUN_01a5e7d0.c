/* Ghidra address: 01a5e7d0 */
/* Ghidra symbol: FUN_01a5e7d0 */


undefined8
FUN_01a5e7d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  
  FUN_00414480(param_2);
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_3,param_4,param_5);
  if (cVar1 != '\0') {
    FUN_01d1e300(param_1[0x12],param_2,param_3,(int)param_1[9],
                 *(undefined4 *)((longlong)param_1 + 0x4c),param_4,param_5);
  }
  return param_2;
}

