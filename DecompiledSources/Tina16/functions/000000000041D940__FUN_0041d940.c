/* Ghidra address: 0041d940 */
/* Ghidra symbol: FUN_0041d940 */


undefined1 * FUN_0041d940(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  uVar2 = FUN_00415f70(param_2);
  iVar1 = FUN_0041d670(param_1 + 1,0xff,uVar2,uVar3);
  iVar1 = iVar1 + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *param_1 = (char)iVar1;
  return param_1;
}

