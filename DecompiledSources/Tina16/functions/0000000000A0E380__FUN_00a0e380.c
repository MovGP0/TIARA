/* Ghidra address: 00a0e380 */
/* Ghidra symbol: FUN_00a0e380 */


undefined8 FUN_00a0e380(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (iVar2 - 0xcdU < 2) {
    if ((int)param_1[0xb] != 0) {
      (**(code **)(param_1[0x44] + 8))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x24) = 0xd0;
      goto LAB_00a0e3d0;
    }
  }
  else if (iVar2 == 0xd0) goto LAB_00a0e3d0;
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x14;
  *(int *)(lVar1 + 0x2c) = iVar2;
  (**(code **)*param_1)(param_1);
LAB_00a0e3d0:
  while ((*(int *)((longlong)param_1 + 0xac) <= *(int *)((longlong)param_1 + 0xb4) &&
         (*(int *)(param_1[0x48] + 0x24) == 0))) {
    iVar2 = (**(code **)param_1[0x48])(param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xcf;
  return 1;
}

