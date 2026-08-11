/* Ghidra address: 01b10200 */
/* Ghidra symbol: FUN_01b10200 */


uint FUN_01b10200(longlong param_1,double *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  double local_38;
  double dStack_30;
  
  local_38 = *param_2;
  dStack_30 = param_2[1];
  if (DAT_01fd1d80 == '\0') {
    uVar2 = 0;
    while( true ) {
      uVar3 = uVar2 + 1;
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (*(int *)(lVar1 + 0x10) <= (int)uVar3) break;
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      if (local_38 < *(double *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 0x10)) {
        lVar1 = *(longlong *)(param_1 + 0x58);
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        if (*(double *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 0x10) <= local_38) {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
    }
  }
  else {
    uVar2 = FUN_01b0fe40(param_1,&local_38);
  }
  return uVar2;
}

