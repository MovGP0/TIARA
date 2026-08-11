/* Ghidra address: 00689f10 */
/* Ghidra symbol: FUN_00689f10 */


void FUN_00689f10(longlong *param_1,longlong param_2)

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
      (**(code **)(*param_1 + 600))(param_1);
      pcVar2 = (code *)FUN_00411550(param_1,0xffb0);
      cVar1 = (*pcVar2)(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x270))(param_1);
      }
      *(undefined8 *)(param_2 + 0x18) = 1;
      goto code_r0x00689fb7;
    }
  }
  FUN_0065a1c0(param_1,param_2);
code_r0x00689fb7:
  FUN_00414480(local_20);
  return;
}

