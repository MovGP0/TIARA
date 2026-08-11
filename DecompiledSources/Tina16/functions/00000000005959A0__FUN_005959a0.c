/* Ghidra address: 005959a0 */
/* Ghidra symbol: FUN_005959a0 */


void FUN_005959a0(longlong *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + (longlong)param_2 * 8);
  *(undefined8 *)(*param_1 + (longlong)param_2 * 8) =
       *(undefined8 *)(*param_1 + (longlong)param_3 * 8);
  *(undefined8 *)(*param_1 + (longlong)param_3 * 8) = uVar1;
  return;
}

