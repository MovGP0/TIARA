/* Ghidra address: 004237f0 */
/* Ghidra symbol: FUN_004237f0 */


undefined8 FUN_004237f0(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2[2] + *param_2) / 2;
  iVar1 = (param_2[1] + param_2[3]) / 2;
  FUN_004238d0(param_1,iVar2 - (param_3[2] - *param_3) / 2,iVar1 - (param_3[3] - param_3[1]) / 2,
               iVar2 + ((param_3[2] - *param_3) + 1) / 2,iVar1 + ((param_3[3] - param_3[1]) + 1) / 2
              );
  return param_1;
}

