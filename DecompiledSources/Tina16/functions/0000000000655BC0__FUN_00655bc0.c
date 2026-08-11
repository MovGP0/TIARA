/* Ghidra address: 00655bc0 */
/* Ghidra symbol: FUN_00655bc0 */


void FUN_00655bc0(longlong *param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_19;
  
  local_30 = auStack_58;
  pcVar1 = (code *)FUN_00411550(param_1,0xffb0);
  local_19 = (*pcVar1)(param_1);
  FUN_0065ed10(param_1,1);
  (**(code **)(*param_1 + 0x1e8))(param_1);
  FUN_00655e40(param_1);
  FUN_0065ed10(param_1,0);
  if ((local_19 != '\0') && (param_1[0x8d] != 0)) {
    thunk_FUN_03c244fb(param_1[0x8d]);
  }
  return;
}

