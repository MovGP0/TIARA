/* Ghidra address: 017befb0 */
/* Ghidra symbol: FUN_017befb0 */


void FUN_017befb0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    FUN_017bead0(param_1,param_2,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,
                 PTR_DAT_02004010[0x815],*PTR_DAT_02005310,0);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
    *(undefined1 *)((longlong)param_1 + 0x91) = 0;
  }
  return;
}

