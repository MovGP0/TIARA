/* Ghidra address: 0195e0a0 */
/* Ghidra symbol: FUN_0195e0a0 */


undefined8 * FUN_0195e0a0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0195b240(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x2ac) != *(char *)(param_3 + 0x2ac)) {
    FUN_00468530(&local_38,*(char *)(param_1 + 0x2ac),1);
    FUN_018036e0(local_20,&local_38);
    FUN_00416cd0(param_2,4,*param_2,L" Shape=\"",local_20[0],&LAB_0195e1c4);
  }
  FUN_00460ba0(&local_38);
  FUN_00414480(local_20);
  return param_2;
}

