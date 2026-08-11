/* Ghidra address: 00616e30 */
/* Ghidra symbol: FUN_00616e30 */


longlong FUN_00616e30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((char)param_1[1] != '\0') {
    lVar1 = FUN_00616e60();
    lVar2 = (lVar2 + lVar1) - param_1[2];
  }
  return lVar2;
}

