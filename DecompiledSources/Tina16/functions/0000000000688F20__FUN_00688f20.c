/* Ghidra address: 00688f20 */
/* Ghidra symbol: FUN_00688f20 */


void FUN_00688f20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(param_1,local_20);
  cVar1 = FUN_007f9a80(*(undefined2 *)(param_2 + 8),local_20[0]);
  if (cVar1 != '\0') {
    pcVar2 = (code *)FUN_00411550(param_1,0xffb3);
    cVar1 = (*pcVar2)(param_1);
    if (cVar1 != '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar2)(param_1);
      *(undefined8 *)(param_2 + 0x18) = 1;
      goto code_r0x00688fa6;
    }
  }
  FUN_0065a1c0(param_1,param_2);
code_r0x00688fa6:
  FUN_00414480(local_20);
  return;
}

