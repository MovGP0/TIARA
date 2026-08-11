/* Ghidra address: 00bd4840 */
/* Ghidra symbol: FUN_00bd4840 */


bool FUN_00bd4840(longlong param_1,uint param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  
  if (param_2 < 0x80) {
    puVar1 = (undefined8 *)(param_1 + 0x58 + (ulonglong)param_2 * 0xc);
    *(undefined8 *)param_3 = *puVar1;
    param_3[2] = *(int *)(puVar1 + 1);
    if ((*param_3 == 0 && param_3[1] == 0) && param_3[2] == 0) {
      iVar2 = thunk_FUN_0419b8dc(*(undefined8 *)(param_1 + 8),param_2,param_2,param_3);
      bVar3 = iVar2 != 0;
      if (bVar3) {
        puVar1 = (undefined8 *)(param_1 + 0x58 + (ulonglong)param_2 * 0xc);
        *puVar1 = *(undefined8 *)param_3;
        *(int *)(puVar1 + 1) = param_3[2];
      }
    }
    else {
      bVar3 = true;
    }
  }
  else {
    iVar2 = thunk_FUN_0419b8dc(*(undefined8 *)(param_1 + 8),param_2,param_2,param_3);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}

