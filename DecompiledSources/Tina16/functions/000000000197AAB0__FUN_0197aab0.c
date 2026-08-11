/* Ghidra address: 0197aab0 */
/* Ghidra symbol: FUN_0197aab0 */


void FUN_0197aab0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong local_30;
  
  local_30 = 0;
  iVar1 = FUN_00414cb0(param_2);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xe0);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 200);
    FUN_00414480(&local_30);
    iVar1 = FUN_00414cb0(param_2);
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        if ((*(short *)(param_2 + -2 + (longlong)iVar4 * 2) == 0x5c) ||
           (iVar2 = FUN_00414cb0(param_2), iVar2 == iVar4)) {
          FUN_00416dc0(&local_30,param_2,1,iVar4 + -1);
          if (local_30 == 0) {
            lVar3 = *(longlong *)(param_1 + 0xe0);
          }
          else {
            lVar3 = FUN_0197d480(lVar3,local_30,0);
          }
          if (lVar3 == 0) goto LAB_0197abbc;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    lVar3 = FUN_0197d480(*(undefined8 *)(param_1 + 200),param_2,0);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 200) = lVar3;
    }
  }
LAB_0197abbc:
  FUN_00414480(&local_30);
  return;
}

