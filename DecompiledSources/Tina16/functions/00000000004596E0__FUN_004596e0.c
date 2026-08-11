/* Ghidra address: 004596e0 */
/* Ghidra symbol: FUN_004596e0 */


undefined8 *
FUN_004596e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_004593b0(param_1,param_3,param_4,param_5);
  FUN_00419260(param_2,&DAT_00406578,1,(longlong)iVar1);
  FUN_00459ab0(param_1,param_3,param_4,param_5,*param_2,0);
  return param_2;
}

