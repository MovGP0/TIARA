/* Ghidra address: 00687910 */
/* Ghidra symbol: FUN_00687910 */


void FUN_00687910(longlong param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  iVar1 = *param_2;
  if ((iVar1 == 0x201) || (iVar1 == 0x203)) {
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
      cVar2 = (*pcVar3)(param_1);
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x490) = 1;
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_03c244fb(uVar4);
        *(undefined1 *)(param_1 + 0x490) = 0;
        pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
        cVar2 = (*pcVar3)(param_1);
        if (cVar2 == '\0') {
          return;
        }
      }
    }
  }
  else if ((iVar1 == 0xbd11) && (*(char *)(param_1 + 0x490) != '\0')) {
    return;
  }
  FUN_00656570(param_1,param_2);
  return;
}

