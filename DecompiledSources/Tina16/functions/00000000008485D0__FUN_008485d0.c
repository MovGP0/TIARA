/* Ghidra address: 008485d0 */
/* Ghidra symbol: FUN_008485d0 */


void FUN_008485d0(longlong *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (param_1[0xa6] != 0) {
    FUN_0083da60(param_1 + 0xa6,0,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x4b4) = param_2;
  pcVar1 = (code *)FUN_00411550(param_1,0xff9c);
  (*pcVar1)(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

