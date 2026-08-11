/* Ghidra address: 00aa8de0 */
/* Ghidra symbol: FUN_00aa8de0 */


undefined4 FUN_00aa8de0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00aa8d00(param_1);
  }
  if ((param_2 < *(int *)(param_1 + 0x10)) && (-1 < param_2)) {
    lVar2 = FUN_004aeac0(param_1,param_2);
    uVar1 = *(undefined4 *)(lVar2 + 0xc);
  }
  else {
    uVar1 = 99999999;
  }
  return uVar1;
}

