/* Ghidra address: 01aad610 */
/* Ghidra symbol: FUN_01aad610 */


undefined8 FUN_01aad610(longlong param_1,char *param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 1;
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  while( true ) {
    if (uVar3 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    if ((param_4 < -1) || (iVar2 == param_4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((*param_2 != *param_3) && (bVar1)) break;
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 - 1;
  }
  return 1;
}

