/* Ghidra address: 014c9130 */
/* Ghidra symbol: FUN_014c9130 */


void FUN_014c9130(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short sVar1;
  longlong lVar2;
  
  FUN_00414610(param_5);
  lVar2 = *(longlong *)(param_2 + 0x570);
  sVar1 = *(short *)(lVar2 + 0x13a);
  if (sVar1 == 0x40b) {
    FUN_016eeca0(lVar2,param_1 + 0x1b8,0,*(short *)(*(longlong *)(lVar2 + 0x60) + 2) + 3,
                 (double)param_3,0);
    *(char *)(*(longlong *)(lVar2 + 0x60) + 0x18) = (char)param_3;
  }
  if (sVar1 == 0x40a) {
    FUN_016eeca0(lVar2,param_1 + 0x1b8,0,*(short *)(*(longlong *)(lVar2 + 0x60) + 2) + 3,
                 (double)param_3,0);
    *(char *)(*(longlong *)(lVar2 + 0x60) + 0xe) = (char)param_3;
  }
  FUN_00414480(&param_5);
  return;
}

