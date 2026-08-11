/* Ghidra address: 00805200 */
/* Ghidra symbol: FUN_00805200 */


void FUN_00805200(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  char local_19;
  
  if ((*(byte *)(param_1 + 0xd5) & 8) == 0) {
    cVar1 = (**(code **)(*param_1 + 0x2c0))(param_1);
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x4d6) == '\x01') {
        if ((*(byte *)(param_1 + 0x9a) & 2) == 0) {
          local_19 = '\0';
        }
        else {
          local_19 = '\x03';
        }
      }
      else {
        local_19 = '\x01';
      }
      pcVar2 = (code *)FUN_00411550(param_1,0xffa9);
      (*pcVar2)(param_1,&local_19);
      if (local_19 != '\0') {
        if (*(longlong **)(DAT_02012668 + 0xa8) == param_1) {
          FUN_0080d170(DAT_02012668);
        }
        else if (local_19 == '\x01') {
          FUN_00805990(param_1);
        }
        else if (local_19 == '\x03') {
          FUN_00800700(param_1,1);
        }
        else {
          FUN_00805ad0(param_1);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa1) = 2;
  }
  return;
}

