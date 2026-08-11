/* Ghidra address: 0064b9e0 */
/* Ghidra symbol: FUN_0064b9e0 */


undefined8 FUN_0064b9e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005b4bf0(param_1);
  if ((((cVar1 != '\0') &&
       (*(int *)(*(longlong *)(param_1 + 0x20) + 0x2a8) ==
        *(int *)(*(longlong *)(param_1 + 0x18) + 0xe0))) &&
      (iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x2a0),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xe8)), iVar2 == 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x298) ==
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf0))) {
    return 1;
  }
  return 0;
}

