/* Ghidra address: 00599740 */
/* Ghidra symbol: FUN_00599740 */


void FUN_00599740(longlong *param_1,uint param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined1 local_70 [64];
  undefined1 *local_30;
  undefined1 *local_20;
  
  local_80 = auStack_a8;
  puVar1 = auStack_a8;
  if (*(uint *)(param_1 + 1) <= param_2) {
    FUN_00594f90();
    puVar1 = local_80;
  }
  local_80 = puVar1;
  local_88 = param_1[2] + (ulonglong)*(byte *)(param_1[2] + 1);
  local_78 = (longlong)*(int *)(local_88 + 2);
  local_30 = (undefined1 *)0x0;
  local_20 = local_70;
  if (param_1[4] == 0) {
    FUN_004185d0(*param_1 + (int)param_2 * local_78,**(undefined8 **)(local_88 + 6),1);
  }
  else {
    if (0x40 < local_78) {
      local_30 = (undefined1 *)FUN_004095c0(local_78);
      local_20 = local_30;
    }
    FUN_00409a70(*param_1 + (int)param_2 * local_78,local_20,local_78);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (int)(param_2 + 1) * local_78,*param_1 + (int)param_2 * local_78,
                 (int)(*(uint *)(param_1 + 1) - param_2) * local_78);
  }
  FUN_0040d200(*param_1 + (int)param_1[1] * local_78,local_78,0);
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],local_20,param_3);
  }
  if (param_1[4] != 0) {
    FUN_004185d0(local_20,**(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),1
                );
    FUN_004095f0(local_30);
  }
  return;
}

