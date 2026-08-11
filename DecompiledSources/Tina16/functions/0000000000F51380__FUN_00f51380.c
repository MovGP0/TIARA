/* Ghidra address: 00f51380 */
/* Ghidra symbol: FUN_00f51380 */


void FUN_00f51380(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*PTR_DAT_020052b8 == '\0') {
    uVar2 = FUN_019a45d0();
    FUN_0199dd30(uVar2,0,1);
    if (param_1 != 0) {
      cVar1 = FUN_01b07dd0(param_1);
      if (cVar1 != '\0') {
        uVar2 = FUN_019a45d0();
        FUN_0199ddf0(uVar2);
      }
    }
  }
  if (param_1 != 0) {
    FUN_019af4b0(*(undefined8 *)(param_1 + 0xa0));
  }
  if (param_2 != '\0') {
    FUN_00410f20(param_1);
  }
  return;
}

