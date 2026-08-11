/* Ghidra address: 0058f530 */
/* Ghidra symbol: FUN_0058f530 */


void FUN_0058f530(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 local_res18 [2];
  
  pcVar1 = (code *)param_2[2];
  local_res18[0] = param_3;
  if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xff00000000000000) {
    FUN_004185b0((longlong)param_1 + ((ulonglong)pcVar1 & 0xffffffffffffff),local_res18,
                 *(undefined8 *)*param_2,1);
  }
  else {
    if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar1 = *(code **)(*param_1 + ((ulonglong)pcVar1 & 0xffff));
    }
    if (*(int *)(param_2 + 4) == -0x80000000) {
      (*pcVar1)(param_1,param_3);
    }
    else {
      (*pcVar1)(param_1,*(int *)(param_2 + 4),param_3);
    }
  }
  return;
}

