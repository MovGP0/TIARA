/* Ghidra address: 01444a40 */
/* Ghidra symbol: FUN_01444a40 */


void FUN_01444a40(double *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  if (*(longlong *)(param_3 + 8) == 0) {
    FUN_00ef4260(8,param_3);
  }
  else {
    bVar2 = true;
    pcVar4 = *(char **)(param_3 + 8);
    while ((pcVar4 != (char *)0x0 && (*(char *)(param_3 + 0x92) == '\0'))) {
      if ((byte)(*pcVar4 - 0xfU) < 2) {
        lVar1 = *(longlong *)(pcVar4 + 0xa8);
        if (bVar2) {
          *param_1 = *(double *)(lVar1 + 0x48);
          FUN_004169a0(param_2,lVar1 + 2);
          iVar3 = 0;
          lVar1 = *param_2;
          if (lVar1 != 0) {
            iVar3 = *(int *)(lVar1 + -4);
          }
          if (1 < iVar3) {
            iVar3 = 0;
            if (lVar1 != 0) {
              iVar3 = *(int *)(lVar1 + -4);
            }
            FUN_00416780(&local_20,*(undefined2 *)*param_2);
            FUN_00416dc0(&local_28,*param_2,2,iVar3 + -1);
            FUN_00416cd0(param_2,5,&DAT_01444bd8,local_20,&DAT_01444bec,local_28,&DAT_01444bfc);
          }
          bVar2 = false;
        }
        else if (*(double *)(lVar1 + 0x48) <= *param_1 && *param_1 != *(double *)(lVar1 + 0x48)) {
          *param_1 = *(double *)(lVar1 + 0x48);
        }
      }
      pcVar4 = *(char **)(pcVar4 + 0xb0);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

