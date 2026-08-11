/* Ghidra address: 008062c0 */
/* Ghidra symbol: FUN_008062c0 */


undefined8 FUN_008062c0(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  
  if (param_2 != 0) {
    pcVar2 = (code *)FUN_00411550(param_2,0xfff2);
    cVar1 = (*pcVar2)(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

