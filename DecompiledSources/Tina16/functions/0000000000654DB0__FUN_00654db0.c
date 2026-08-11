/* Ghidra address: 00654db0 */
/* Ghidra symbol: FUN_00654db0 */


void FUN_00654db0(undefined8 param_1,uint *param_2)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = FUN_0064e930(param_1);
  if (cVar1 != '\0') {
    *param_2 = *param_2 | 0x2000;
  }
  cVar1 = FUN_0064e970(param_1);
  if (cVar1 != '\0') {
    *param_2 = *param_2 | 0x4000;
  }
  pcVar2 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar2)(param_1);
  if (cVar1 != '\0') {
    pcVar2 = (code *)FUN_00411550(param_1,0xffc8);
    cVar1 = (*pcVar2)(param_1);
    if (cVar1 == '\0') {
      *param_2 = *param_2 | 0x1000;
    }
    else {
      pcVar2 = (code *)FUN_00411550(param_1,0xffc8);
      cVar1 = (*pcVar2)(param_1);
      if (cVar1 == '\x01') {
        *param_2 = *param_2;
      }
    }
  }
  return;
}

