/* Ghidra address: 005959c0 */
/* Ghidra symbol: FUN_005959c0 */


void FUN_005959c0(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_80;
  undefined1 *local_78;
  undefined1 local_70 [64];
  undefined1 *local_30;
  
  local_90 = auStack_b8;
  local_30 = (undefined1 *)0x0;
  local_78 = local_70;
  local_80 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
  puVar1 = auStack_b8;
  if (0x40 < local_80) {
    local_78 = (undefined1 *)FUN_004095c0(local_80);
    puVar1 = local_90;
    local_30 = local_78;
  }
  local_90 = puVar1;
  puVar1 = local_78;
  lVar2 = param_2 * local_80;
  FUN_00409a70(*param_1 + lVar2,local_78,local_80);
  lVar3 = param_3 * local_80;
  FUN_00409a70(*param_1 + lVar3,*param_1 + lVar2,local_80);
  FUN_00409a70(puVar1,*param_1 + lVar3,local_80);
  FUN_004095f0(local_30);
  return;
}

