/* Ghidra address: 017b1d00 */
/* Ghidra symbol: FUN_017b1d00 */


int * FUN_017b1d00(longlong param_1,int *param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_00498350(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  FUN_017ad620(&local_38,param_2);
  *(undefined8 *)param_2 = local_38;
  *(undefined8 *)(param_2 + 2) = uStack_30;
  FUN_00498350(&local_38,*param_2 + -3,param_2[1] + -3,param_2[2] + 3,param_2[3] + 3);
  *(undefined8 *)param_2 = local_38;
  *(undefined8 *)(param_2 + 2) = uStack_30;
  return param_2;
}

