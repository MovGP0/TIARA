/* Ghidra address: 00e81760 */
/* Ghidra symbol: FUN_00e81760 */


undefined8 FUN_00e81760(longlong param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0xac) * -2);
  if (puVar1 < *(undefined2 **)(param_1 + 0x80)) {
LAB_00e81793:
    if (*(ulonglong *)(param_1 + 0x78) < *(ulonglong *)(param_1 + 0x88)) {
      cVar2 = FUN_00e81700(*(undefined2 *)(*(ulonglong *)(param_1 + 0x78) + 2));
      if (cVar2 == '\0') goto LAB_00e817ae;
    }
    uVar3 = 1;
  }
  else {
    cVar2 = FUN_00e81700(*puVar1);
    if (cVar2 != '\0') goto LAB_00e81793;
LAB_00e817ae:
    uVar3 = 0;
  }
  return uVar3;
}

