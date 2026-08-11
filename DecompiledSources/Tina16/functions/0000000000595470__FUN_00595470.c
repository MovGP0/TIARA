/* Ghidra address: 00595470 */
/* Ghidra symbol: FUN_00595470 */


void FUN_00595470(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_78;
  undefined1 local_70 [64];
  undefined1 *local_30;
  undefined1 *local_20;
  
  local_80 = auStack_a8;
  puVar1 = auStack_a8;
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
    puVar1 = local_80;
  }
  local_80 = puVar1;
  lVar2 = param_1[2] + (ulonglong)*(byte *)(param_1[2] + 1);
  local_78 = (longlong)*(int *)(lVar2 + 2);
  if (param_1[4] == 0) {
    FUN_004185b0(*param_1 + (int)param_3 * local_78,param_2,**(undefined8 **)(lVar2 + 6),1);
  }
  else {
    local_30 = (undefined1 *)0x0;
    local_20 = local_70;
    FUN_0040d200(local_70,0x40,0);
    if (0x40 < local_78) {
      local_30 = (undefined1 *)FUN_00409570(local_78);
      local_20 = local_30;
    }
    lVar2 = (int)param_3 * local_78;
    FUN_004185b0(local_20,*param_1 + lVar2,
                 **(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),1);
    FUN_004185b0(*param_1 + lVar2,param_2,
                 **(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),1);
    (*(code *)param_1[4])(param_1[3],local_20,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
    FUN_004185d0(local_20,**(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),1
                );
    FUN_004095f0(local_30);
  }
  return;
}

