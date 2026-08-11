/* Ghidra address: 0044b770 */
/* Ghidra symbol: FUN_0044b770 */


uint FUN_0044b770(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ushort local_1c [6];
  
  iVar1 = thunk_FUN_039c31b1(param_1,param_2,local_1c,2);
  if (0 < iVar1) {
    param_3 = (uint)local_1c[0];
  }
  return param_3;
}

