/* Ghidra address: 017bf050 */
/* Ghidra symbol: FUN_017bf050 */


void FUN_017bf050(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = *(char *)(param_1 + 0x91);
  if (cVar1 != '\0') {
    FUN_017befb0(param_1,param_2);
  }
  FUN_00414ad0(param_1 + 0x98,local_res18[0]);
  if (cVar1 != '\0') {
    FUN_017bead0(param_1,param_2,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,
                 PTR_DAT_02004010[0x815],*PTR_DAT_02005310,0);
  }
  FUN_00414480(local_res18);
  return;
}

