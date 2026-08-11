/* Ghidra address: 006ed630 */
/* Ghidra symbol: FUN_006ed630 */


void FUN_006ed630(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong local_20;
  
  local_20 = 0;
  FUN_004b1a10(param_1,param_2);
  FUN_00419260(&local_20,&DAT_006ed5f0,1,
               (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10));
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004b2070(*(undefined8 *)(param_1 + 8),iVar3);
      *(undefined4 *)(local_20 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar1 + 0x3c);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_006edb60(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_0065b870(uVar2);
  thunk_FUN_041b2403(uVar2,0x103a,
                     (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10),
                     local_20);
  FUN_00419430(&local_20,&DAT_006ed5f0);
  return;
}

