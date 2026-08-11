/* Ghidra address: 014cfd80 */
/* Ghidra symbol: FUN_014cfd80 */


int FUN_014cfd80(undefined8 param_1,longlong param_2,double param_3,double param_4,double param_5,
                byte param_6)

{
  int iVar1;
  int iVar2;
  undefined8 unaff_R13;
  ulonglong uVar3;
  
  uVar3 = CONCAT62((int6)((ulonglong)unaff_R13 >> 0x10),(ushort)param_6);
  FUN_016eebe0(param_1,param_2 + 0x1b8,0,uVar3 & 0xffffffff,0);
  iVar1 = FUN_0040c770();
  if (param_3 <= param_4 + param_5) {
    iVar2 = iVar1;
    if (param_3 < param_4 - param_5) {
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar3 & 0xffffffff,0,0);
      iVar2 = 0;
    }
  }
  else {
    FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar3 & 0xffffffff,0x3ff0000000000000,0);
    iVar2 = 1;
  }
  if (iVar2 != iVar1) {
    FUN_016e9f80(param_1,param_2,1,0);
  }
  return iVar2;
}

