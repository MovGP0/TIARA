/* Ghidra address: 00c3ff40 */
/* Ghidra symbol: FUN_00c3ff40 */


undefined8 * FUN_00c3ff40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414ad0(param_2,param_3);
  iVar2 = 0;
  while( true ) {
    sVar1 = FUN_00c3fec0(param_1,*param_2);
    if (sVar1 == -1) break;
    iVar2 = iVar2 + 1;
    FUN_0043f750(local_20,iVar2);
    FUN_00416cd0(param_2,3,param_3,&LAB_00c3fff4,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_2;
}

