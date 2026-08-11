/* Ghidra address: 00a4de90 */
/* Ghidra symbol: FUN_00a4de90 */


void FUN_00a4de90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_009ec440(&local_10,*param_2);
  FUN_005fcd80(param_1,local_10);
  iVar1 = FUN_0040c770(((double)param_2[1] * (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98))
                       / 72.0);
  FUN_005fcc80(param_1,-iVar1);
  FUN_005fce70(param_1,*(undefined1 *)(param_2 + 2));
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 3);
  FUN_005fc860(param_1,*(undefined4 *)((longlong)param_2 + 0x14));
  FUN_005fcfa0(param_1,*(undefined1 *)((longlong)param_2 + 0x1c));
  FUN_00414480(&local_10);
  return;
}

