/* Ghidra address: 017b1c70 */
/* Ghidra symbol: FUN_017b1c70 */


undefined8 FUN_017b1c70(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_017b1c30(param_1,param_2,param_3);
  if (((double)iVar2 < 2.0) &&
     (cVar1 = FUN_017b17a0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),param_2,
                           param_3), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

