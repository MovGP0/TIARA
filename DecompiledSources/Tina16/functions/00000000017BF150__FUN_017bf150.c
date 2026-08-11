/* Ghidra address: 017bf150 */
/* Ghidra symbol: FUN_017bf150 */


void FUN_017bf150(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x91);
  if (cVar1 != '\0') {
    FUN_017befb0(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  *(undefined4 *)(param_1 + 0xa4) = param_4;
  if (cVar1 != '\0') {
    FUN_017bead0(param_1,param_2,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,
                 PTR_DAT_02004010[0x815],*PTR_DAT_02005310,0);
  }
  return;
}

