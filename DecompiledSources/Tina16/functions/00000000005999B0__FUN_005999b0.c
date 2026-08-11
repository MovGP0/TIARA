/* Ghidra address: 005999b0 */
/* Ghidra symbol: FUN_005999b0 */


void FUN_005999b0(longlong *param_1,uint param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  puVar1 = auStack_58;
  if (*(uint *)(param_1 + 1) <= param_2) {
    FUN_00594f90();
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_38 = (longlong)(int)param_2;
  local_20[0] = *(undefined8 *)(*param_1 + local_38 * 8);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1) * 8,*param_1 + local_38 * 8,
                 (longlong)(int)((*(uint *)(param_1 + 1) - param_2) * 8));
  }
  *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8) = 0;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],local_20,param_3);
  }
  FUN_004185d0(local_20,**(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),1);
  return;
}

