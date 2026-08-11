/* Ghidra address: 0068c040 */
/* Ghidra symbol: FUN_0068c040 */


void FUN_0068c040(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  if (*(byte *)((longlong)param_1 + 0x4cc) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
             (*(byte *)((longlong)param_1 + 0x4cc) & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (param_1[0xa3] != 0) {
      iVar1 = (**(code **)(*param_1 + 0x298))(param_1);
      if (*(ulonglong *)(param_2 + 8) < (ulonglong)(longlong)iVar1) {
        FUN_00414480(local_20);
        (*(code *)param_1[0xa3])(param_1[0xa4],param_1,*(undefined4 *)(param_2 + 8),local_20);
        iVar1 = 0;
        if (local_20[0] != 0) {
          iVar1 = *(int *)(local_20[0] + -4);
        }
        *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
        goto code_r0x0068c115;
      }
    }
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
code_r0x0068c115:
  FUN_00414480(local_20);
  return;
}

