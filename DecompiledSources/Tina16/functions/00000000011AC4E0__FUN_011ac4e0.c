/* Ghidra address: 011ac4e0 */
/* Ghidra symbol: FUN_011ac4e0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011ac4e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  ushort *local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20 = (ushort *)0x0;
  FUN_00414480(&local_20);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),local_30);
  iVar2 = 0;
  if (local_30[0] != 0) {
    iVar2 = *(int *)(local_30[0] + -4);
  }
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_38);
      FUN_00416780(&local_40,*(undefined2 *)(local_38 + -2 + (longlong)iVar1 * 2));
      FUN_00416ad0(&local_20,local_40);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_48);
  iVar2 = 0;
  if (local_48 != 0) {
    iVar2 = *(int *)(local_48 + -4);
  }
  if (((0 < iVar2) && (0x2f < *local_20)) && (*local_20 < 0x3a)) {
    DAT_01f2a640 = FUN_0043fc00(local_20);
    if (DAT_01f2a640 < 6) {
      DAT_01f2a640 = 6;
    }
    if (0x10 < DAT_01f2a640) {
      DAT_01f2a640 = 0x10;
    }
  }
  FUN_0043f750(&local_50,DAT_01f2a640);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_50);
  _DAT_0210723c = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x71c);
  _DAT_02107240 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x718);
  FUN_00526500(0x4000000000000000,(double)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  _DAT_02107238 = FUN_0040c770();
  FUN_011abdd0(param_1,DAT_021071e0);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

