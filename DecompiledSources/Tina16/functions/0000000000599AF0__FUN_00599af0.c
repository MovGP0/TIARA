/* Ghidra address: 00599af0 */
/* Ghidra symbol: FUN_00599af0 */


void FUN_00599af0(longlong *param_1,uint param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_70;
  undefined1 *local_68;
  undefined1 local_60 [64];
  undefined1 *local_20;
  
  local_80 = auStack_a8;
  puVar1 = auStack_a8;
  if (*(uint *)(param_1 + 1) <= param_2) {
    FUN_00594f90();
    puVar1 = local_80;
  }
  local_80 = puVar1;
  local_20 = (undefined1 *)0x0;
  local_68 = local_60;
  local_70 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
  if (param_1[4] != 0) {
    if (0x40 < local_70) {
      local_68 = (undefined1 *)FUN_004095c0(local_70);
      local_20 = local_68;
    }
    FUN_00409a70(*param_1 + (int)param_2 * local_70,local_68,local_70);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (int)(param_2 + 1) * local_70,*param_1 + (int)param_2 * local_70,
                 (int)(*(uint *)(param_1 + 1) - param_2) * local_70);
  }
  FUN_0040d200(*param_1 + (int)param_1[1] * local_70,local_70,0);
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],local_68,param_3);
  }
  if (param_1[4] != 0) {
    FUN_004095f0(local_20);
  }
  return;
}

