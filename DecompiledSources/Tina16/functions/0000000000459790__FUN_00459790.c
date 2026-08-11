/* Ghidra address: 00459790 */
/* Ghidra symbol: FUN_00459790 */


undefined8 * FUN_00459790(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00459280(param_1,param_3,param_4);
  FUN_00419260(param_2,&DAT_00406578,1,(longlong)iVar1);
  FUN_004598a0(param_1,param_3,param_4,0,param_4 + 1,*param_2,0);
  return param_2;
}

