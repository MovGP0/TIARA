/* Ghidra address: 013b4a50 */
/* Ghidra symbol: FUN_013b4a50 */


void FUN_013b4a50(longlong param_1,undefined8 *param_2,char *param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  do {
    uVar1 = FUN_00b94e60(param_1,iVar2);
    *param_2 = uVar1;
    FUN_013b49d0(param_1,*param_2,param_3);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0 && *param_3 != '\x03');
  return;
}

