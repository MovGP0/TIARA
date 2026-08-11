/* Ghidra address: 00acbfd0 */
/* Ghidra symbol: FUN_00acbfd0 */


void FUN_00acbfd0(longlong *param_1,uint param_2)

{
  char cVar1;
  
  FUN_00411a80(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x130))((longlong *)param_1[0x2b],0);
    FUN_00410f20(param_1[0x2b]);
  }
  FUN_00acd500(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

