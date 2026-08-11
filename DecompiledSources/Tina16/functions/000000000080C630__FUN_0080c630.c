/* Ghidra address: 0080c630 */
/* Ghidra symbol: FUN_0080c630 */


void FUN_0080c630(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x118),param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x158) != '\0') {
      if (*(char *)(param_1 + 0x193) == '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x2d0);
        uVar2 = FUN_00416740(param_2);
        thunk_FUN_0418144e(uVar1,uVar2);
      }
      else {
        thunk_FUN_0418144e(*(undefined8 *)(param_1 + 0x2d0),0);
      }
    }
    FUN_00414ad0(param_1 + 0x118,param_2);
  }
  return;
}

