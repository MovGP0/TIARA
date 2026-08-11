/* Ghidra address: 0068fbb0 */
/* Ghidra symbol: FUN_0068fbb0 */


undefined8 * FUN_0068fbb0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_0064d000(param_1[2],&local_38);
  cVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar1 != '\0') {
    FUN_00423b10(&local_38,1,1);
  }
  *param_2 = local_38;
  param_2[1] = uStack_30;
  return param_2;
}

