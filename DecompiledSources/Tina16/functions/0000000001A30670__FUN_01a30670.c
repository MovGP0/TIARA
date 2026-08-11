/* Ghidra address: 01a30670 */
/* Ghidra symbol: FUN_01a30670 */


void FUN_01a30670(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x710);
  lVar2 = *(longlong *)(param_1 + 0x700);
  if (*(int *)(lVar2 + 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x70c) & 2) != 0) {
      uVar3 = FUN_01a2f040(&DAT_01a2e588,1,*(undefined8 *)(lVar1 + 0x2bb0));
      FUN_004ae7e0(lVar2,uVar3);
    }
    if ((*(uint *)(param_1 + 0x70c) & 8) != 0) {
      uVar3 = FUN_01a2f040(&DAT_01a2e588,1,*(undefined8 *)(lVar1 + 0x2bb8));
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x700),uVar3);
    }
    if ((*(uint *)(param_1 + 0x70c) & 0x10) != 0) {
      uVar3 = FUN_01a2f040(&DAT_01a2e588,1,*(undefined8 *)(param_1 + 0x718));
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x700),uVar3);
    }
    if (*(int *)(param_1 + 0x70c) == 4) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_20);
      uVar3 = FUN_01a2f040(&DAT_01a2e588,1,local_20);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x700),uVar3);
    }
    FUN_01a2f9d0(param_1,1);
  }
  FUN_00414480(&local_20);
  return;
}

