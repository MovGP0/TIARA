/* Ghidra address: 0159f500 */
/* Ghidra symbol: FUN_0159f500 */


undefined8 FUN_0159f500(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar4 = 0xfffffffe;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x28);
    if ((piVar1[2] == 0) || (*piVar1 == 10)) {
      if (*piVar1 == 10) {
        uVar2 = FUN_015a5730(0,0,0);
        iVar3 = FUN_015a5730(uVar2,param_2,param_3);
        if (iVar3 != piVar1[6]) {
          return 0xfffffffd;
        }
      }
      iVar3 = FUN_015a02e0(param_1,param_2 + (ulonglong)param_3,param_3);
      if (iVar3 == 0) {
        piVar1[3] = 1;
        uVar4 = 0;
      }
      else {
        *piVar1 = 0x1e;
        uVar4 = 0xfffffffc;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  return uVar4;
}

