/* Ghidra address: 01a3c8e0 */
/* Ghidra symbol: FUN_01a3c8e0 */


undefined8 FUN_01a3c8e0(undefined8 param_1,longlong param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  bVar2 = false;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      if ((*(short *)(local_res10[0] + -2 + (longlong)iVar3 * 2) != 0x22) || (bVar2)) {
        sVar1 = *(short *)(local_res10[0] + -2 + (longlong)iVar3 * 2);
        if ((sVar1 == 0x22) || (!bVar2)) {
          if ((*(short *)(local_res10[0] + -2 + (longlong)iVar3 * 2) == 0x22) && (bVar2)) break;
        }
        else {
          FUN_00416780(local_40,sVar1);
          FUN_00416ad0(local_30,local_40[0]);
        }
      }
      else {
        bVar2 = true;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_1,local_30[0]);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return param_1;
}

