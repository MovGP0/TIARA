/* Ghidra address: 00ce2500 */
/* Ghidra symbol: FUN_00ce2500 */


void FUN_00ce2500(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_00879070(param_2,*(undefined8 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00414ad0(param_1 + 0x20,param_2);
  return;
}

