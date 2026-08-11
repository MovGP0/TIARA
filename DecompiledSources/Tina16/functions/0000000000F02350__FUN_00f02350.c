/* Ghidra address: 00f02350 */
/* Ghidra symbol: FUN_00f02350 */


void FUN_00f02350(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  iVar1 = *param_2;
  if (((iVar1 == 0x100) || (iVar1 == 0x102)) || (iVar1 == 0x104)) {
    if (*(byte *)(param_1 + 0x530) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
               (*(byte *)(param_1 + 0x530) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (((bVar3) && ((short)param_2[2] != 0)) && (*(char *)(param_1 + 0x531) != '\0')) {
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x528));
      thunk_FUN_041b2403(uVar2,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      return;
    }
  }
  FUN_0083e4f0(param_1,param_2);
  return;
}

