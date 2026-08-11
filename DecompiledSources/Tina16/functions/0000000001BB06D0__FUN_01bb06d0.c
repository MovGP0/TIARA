/* Ghidra address: 01bb06d0 */
/* Ghidra symbol: FUN_01bb06d0 */


undefined8 FUN_01bb06d0(longlong param_1,ushort param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ushort local_3a [5];
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = iVar1 + *(int *)(param_1 + 0x20);
  while( true ) {
    if (iVar2 <= iVar1) {
      return 0;
    }
    FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)iVar1,local_3a,2);
    if (59999 < local_3a[0]) {
      FUN_00413fb0();
    }
    *param_3 = iVar1 + 2;
    if (local_3a[0] < 15000) {
      iVar1 = 4;
    }
    else {
      iVar1 = 1;
    }
    *param_4 = 0;
    FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)*param_3,param_4,iVar1);
    *param_3 = *param_3 + iVar1;
    if (local_3a[0] == param_2) break;
    iVar1 = *param_3 + *param_4;
  }
  return 1;
}

