/* Ghidra address: 01368900 */
/* Ghidra symbol: FUN_01368900 */


bool FUN_01368900(undefined8 param_1,longlong *param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_40;
  uint local_3c [3];
  
  iVar3 = 0;
  iVar1 = (**(code **)(*param_2 + 0x1c8))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x1f0))(param_2,iVar2,local_3c,&local_40);
      if (((local_3c[0] == param_3) && (local_40 == param_4)) ||
         ((local_3c[0] == param_5 && (local_40 == param_6)))) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3 == 2;
}

