/* Ghidra address: 00c8b450 */
/* Ghidra symbol: FUN_00c8b450 */


void FUN_00c8b450(longlong param_1,char param_2)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    FUN_00874e50(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x1c),param_1 + 8,0,
                 *(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (param_2 != '\0') {
      iVar1 = FUN_00c8ba00(param_1);
      if (*(int *)(param_1 + 0x18) < (iVar1 - *(int *)(param_1 + 0x30)) - *(int *)(param_1 + 0x1c))
      {
        FUN_00419260(param_1 + 8,&DAT_0086e978,1,
                     (longlong)
                     (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x18)
                     ));
      }
    }
  }
  return;
}

