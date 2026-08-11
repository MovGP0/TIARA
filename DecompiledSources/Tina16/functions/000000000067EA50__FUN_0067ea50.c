/* Ghidra address: 0067ea50 */
/* Ghidra symbol: FUN_0067ea50 */


void FUN_0067ea50(undefined8 param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(param_1,&local_10);
  cVar1 = FUN_007f9a80(*(undefined2 *)(param_2 + 8),local_10);
  if (cVar1 != '\0') {
    pcVar2 = (code *)FUN_00411550(param_1,0xffb3);
    cVar1 = (*pcVar2)(param_1);
    if (cVar1 != '\0') {
      FUN_0065c230(param_1);
      *(undefined8 *)(param_2 + 0x18) = 1;
      goto code_r0x0067eac8;
    }
  }
  FUN_0065a1c0(param_1,param_2);
code_r0x0067eac8:
  FUN_00414480(&local_10);
  return;
}

