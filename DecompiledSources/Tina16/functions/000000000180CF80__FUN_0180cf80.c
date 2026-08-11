/* Ghidra address: 0180cf80 */
/* Ghidra symbol: FUN_0180cf80 */


uint FUN_0180cf80(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte local_29;
  
  iVar1 = FUN_004b6da0(param_1);
  FUN_004b6dc0(param_1,0);
  uVar2 = 0xffffffff;
  while( true ) {
    lVar3 = FUN_004b6da0(param_1);
    lVar4 = (**(code **)*param_1)(param_1);
    if (lVar4 <= lVar3) break;
    (**(code **)(*param_1 + 0x18))(param_1,&local_29,1);
    uVar2 = *(uint *)(&DAT_01fa84f4 + (ulonglong)((uVar2 ^ local_29) & 0xff) * 4) ^ uVar2 >> 8;
  }
  FUN_004b6dc0(param_1,(longlong)iVar1);
  return ~uVar2;
}

