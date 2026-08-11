/* Ghidra address: 0176a500 */
/* Ghidra symbol: FUN_0176a500 */


undefined8 FUN_0176a500(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_1 + 0x38));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x40)),
       iVar1 == 0)) &&
      (iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_1 + 0x48)),
      iVar1 == 0)) &&
     (((*(char *)(param_2 + 99) == *(char *)(param_1 + 99) &&
       (*(char *)(param_2 + 0x70) == *(char *)(param_1 + 0x70))) &&
      (iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x10),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10)), iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

