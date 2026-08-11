/* Ghidra address: 016d4dd0 */
/* Ghidra symbol: FUN_016d4dd0 */


void FUN_016d4dd0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  *(int *)((longlong)param_1 + 0x584) = *(int *)((longlong)param_1 + 0x584) + 1;
  iVar2 = *(int *)((longlong)param_1 + 0x57c) - *(int *)((longlong)param_1 + 0x584);
  *(int *)(param_1 + 0xb0) = iVar2;
  *(bool *)(param_1 + 0xaf) = 0 < iVar2;
  cVar1 = (**(code **)(*param_1 + 0x290))(param_1,(int)param_1[0xa4],(int)param_1[0x93]);
  if (cVar1 != '\0') {
    FUN_016d4b30(param_1);
  }
  if ((char)param_1[0xaf] == '\0') {
    *(undefined1 *)(param_1 + 0xad) = 0;
    (**(code **)(*param_1 + 0x280))(param_1);
  }
  return;
}

