/* Ghidra address: 008494d0 */
/* Ghidra symbol: FUN_008494d0 */


void FUN_008494d0(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  
  FUN_006586f0(param_1);
  FUN_008458c0(param_1);
  pcVar1 = (code *)FUN_00411550(param_1,0xffc5);
  cVar2 = (*pcVar1)(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

