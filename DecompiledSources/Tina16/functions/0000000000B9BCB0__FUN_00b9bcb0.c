/* Ghidra address: 00b9bcb0 */
/* Ghidra symbol: FUN_00b9bcb0 */


longlong * FUN_00b9bcb0(undefined8 param_1,longlong *param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  short local_3a [5];
  
  if (param_3 < 1) {
    FUN_00414480(param_2);
  }
  else {
    iVar5 = param_3;
    if (0x2000 < param_3) {
      iVar5 = 0x2000;
    }
    FUN_004169f0(param_2,iVar5);
    iVar4 = 0;
    while (iVar4 < param_3) {
      cVar1 = FUN_00b9baf0(param_1,local_3a);
      if (cVar1 == '\0') break;
      if ((param_4 != '\0') && ((local_3a[0] == 10 || (local_3a[0] == 0xd)))) {
        FUN_00b9be80(param_1);
        break;
      }
      iVar4 = iVar4 + 1;
      if (iVar5 == 0) {
        iVar5 = 0;
        lVar3 = *param_2;
        if (lVar3 != 0) {
          iVar5 = *(int *)(lVar3 + -4);
        }
        iVar2 = 0;
        if (lVar3 != 0) {
          iVar2 = *(int *)(lVar3 + -4);
        }
        FUN_004169f0(param_2,iVar2 + iVar5);
      }
      lVar3 = FUN_00414de0(param_2);
      *(short *)(lVar3 + -2 + (longlong)iVar4 * 2) = local_3a[0];
      iVar5 = iVar5 + -1;
    }
    if (iVar4 < param_3) {
      FUN_004169f0(param_2,iVar4);
    }
  }
  return param_2;
}

