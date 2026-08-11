/* Ghidra address: 0161eb00 */
/* Ghidra symbol: FUN_0161eb00 */


void FUN_0161eb00(longlong param_1)

{
  int *piVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_015f0590(&local_10,*(undefined8 *)(param_1 + 0x78),*(longlong *)(param_1 + 0x70) + 0xdc);
  FUN_00414b50(param_1 + 0x48,local_10);
  FUN_015ef8b0(*(undefined8 *)(param_1 + 0x78),*(longlong *)(param_1 + 0x70) + 0xdc);
  uVar3 = FUN_00448650(*(undefined8 *)(param_1 + 0x48),PTR_DAT_02004830);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  if ((((0 < *(int *)(*(longlong *)(param_1 + 0x70) + 0xd8)) &&
       (*(int *)(*(longlong *)(param_1 + 0x70) + 0xd8) % 2 == 0)) &&
      (1 < *(int *)(*(longlong *)(param_1 + 0x70) + 0xd4))) &&
     ((*(int *)(*(longlong *)(param_1 + 0x70) + 0xd4) <
       *(int *)(*(longlong *)(param_1 + 0x70) + 0xd0) &&
      (dVar2 = *(double *)
                (*(longlong *)(*(longlong *)(param_1 + 0x70) + 200) +
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x70) + 0xd4) + -2) * 8),
      *(double *)(param_1 + 0x40) <= dVar2 && dVar2 != *(double *)(param_1 + 0x40))))) {
    FUN_0041ddd0(&local_18,PTR_PTR_020021b8);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_18);
    FUN_004134c0(uVar3);
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x70) + 200) +
   (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0xd4) * 8) = *(undefined8 *)(param_1 + 0x40);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0xd4);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0xd8);
  *piVar1 = *piVar1 + 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  FUN_00414560(&local_18,2);
  return;
}

