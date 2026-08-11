/* Ghidra address: 017bf210 */
/* Ghidra symbol: FUN_017bf210 */


void FUN_017bf210(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x91);
  if (cVar1 != '\0') {
    FUN_017befb0(param_1,param_2);
  }
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  if (cVar1 != '\0') {
    FUN_017bead0(param_1,param_2,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,
                 PTR_DAT_02004010[0x815],*PTR_DAT_02005310,0);
  }
  return;
}

