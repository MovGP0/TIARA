/* Ghidra address: 00611500 */
/* Ghidra symbol: FUN_00611500 */


void FUN_00611500(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = FUN_004d22d0(&PTR_FUN_00611108,1,0);
    *(longlong *)(param_1 + 0x20) = lVar2;
    *(longlong *)(lVar2 + 0x80) = param_1;
    *(code **)(lVar2 + 0x78) = FUN_006114a0;
  }
  bVar1 = (char)param_3 - 1;
  if (bVar1 == 0xff) {
    if (param_2 != 0) {
      FUN_004d26c0(param_2,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if ((bVar1 < 2) && (param_2 != 0)) {
    FUN_004d2d90(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  FUN_00610f20(param_1,param_2,param_3);
  return;
}

