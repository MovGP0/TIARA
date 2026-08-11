/* Ghidra address: 014cfc00 */
/* Ghidra symbol: FUN_014cfc00 */


int FUN_014cfc00(undefined8 param_1,longlong param_2,double param_3,double param_4,double param_5,
                byte param_6)

{
  int iVar1;
  undefined8 unaff_R13;
  ulonglong uVar2;
  
  uVar2 = CONCAT62((int6)((ulonglong)unaff_R13 >> 0x10),(ushort)param_6);
  FUN_016eebe0(param_1,param_2 + 0x1b8,1,uVar2 & 0xffffffff,0);
  iVar1 = FUN_0040c770();
  if (param_3 <= param_4 + param_5) {
    if (param_3 < param_4 - param_5) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
  }
  if (iVar1 == 0) {
    FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar2 & 0xffffffff,0,0);
  }
  else {
    FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar2 & 0xffffffff,0x3ff0000000000000,0);
  }
  return iVar1;
}

