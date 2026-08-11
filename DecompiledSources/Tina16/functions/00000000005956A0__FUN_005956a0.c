/* Ghidra address: 005956a0 */
/* Ghidra symbol: FUN_005956a0 */


void FUN_005956a0(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined1 local_61 [65];
  undefined1 *local_20;
  
  local_80 = auStack_a8;
  puVar1 = auStack_a8;
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
    puVar1 = local_80;
  }
  local_80 = puVar1;
  local_78 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
  if (param_1[4] == 0) {
    FUN_00409a70(param_2,*param_1 + (int)param_3 * local_78,local_78);
  }
  else {
    local_20 = (undefined1 *)0x0;
    local_70 = local_61;
    if (0x41 < local_78) {
      local_70 = (undefined1 *)FUN_004095c0(local_78);
      local_20 = local_70;
    }
    puVar1 = local_70;
    lVar2 = (int)param_3 * local_78;
    FUN_00409a70(*param_1 + lVar2,local_70,local_78);
    FUN_00409a70(param_2,*param_1 + lVar2,local_78);
    (*(code *)param_1[4])(param_1[3],puVar1,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
    FUN_004095f0(local_20);
  }
  return;
}

