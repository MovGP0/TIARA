/* Ghidra address: 00d40f50 */
/* Ghidra symbol: FUN_00d40f50 */


void FUN_00d40f50(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 8) = 0;
  cVar2 = FUN_00788df0(param_1);
  if (((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x2a) != '\0')) &&
     ((iVar1 = param_2[2], iVar1 == 0x14 || (((iVar1 == 9 || (iVar1 == 8)) || (iVar1 == 0x15)))))) {
    *(int *)((longlong)param_1 + 0xc4) = iVar1;
    (**(code **)(*param_1 + 0x68))(param_1);
    *(undefined8 *)(param_2 + 6) = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

