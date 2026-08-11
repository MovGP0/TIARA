/* Ghidra address: 00459650 */
/* Ghidra symbol: FUN_00459650 */


undefined8 *
FUN_00459650(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_004592c0(param_1,param_3,param_4,param_5,param_6);
  FUN_00419260(param_2,&DAT_00406578,1,(longlong)iVar1);
  FUN_004598a0(param_1,param_3,param_4,param_5,param_6,*param_2,0);
  return param_2;
}

