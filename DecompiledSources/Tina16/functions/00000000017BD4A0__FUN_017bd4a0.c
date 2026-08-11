/* Ghidra address: 017bd4a0 */
/* Ghidra symbol: FUN_017bd4a0 */


undefined8 FUN_017bd4a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_017bd460(param_1,param_2,param_3);
  if (((double)iVar2 < 2.0) &&
     (cVar1 = FUN_00b91850(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),param_2,
                           param_3), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

