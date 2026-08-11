/* Ghidra address: 006dbe00 */
/* Ghidra symbol: FUN_006dbe00 */


undefined8 FUN_006dbe00(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30;
  longlong local_20;
  
  local_20 = 0;
  FUN_00419260(&local_20,&DAT_004066f0,1,
               (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10));
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0x1211,
                     (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10)
                     ,local_20);
  local_30 = 0;
  iVar3 = 0;
  if (local_20 != 0) {
    iVar3 = (int)*(undefined8 *)(local_20 + -8);
  }
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if (*(int *)(local_20 + (longlong)iVar2 * 4) == param_2) {
        local_30 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),iVar2);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00419430(&local_20,&DAT_004066f0);
  return local_30;
}

