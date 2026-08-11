/* Ghidra address: 00c0dad0 */
/* Ghidra symbol: FUN_00c0dad0 */


void FUN_00c0dad0(longlong param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 != *(char *)(param_1 + 0x5e0)) {
    *(char *)(param_1 + 0x5e0) = param_2;
    uVar2 = FUN_00c09df0(param_1);
    if (((uVar2 & 0x100) != 0) && (param_2 == '\0')) {
      cVar1 = FUN_00bd10c0(*(undefined8 *)(param_1 + 0x550));
      if (cVar1 != '\0') {
        FUN_00bd1210(*(undefined8 *)(param_1 + 0x550));
      }
    }
    FUN_00bd1250(*(undefined8 *)(param_1 + 0x550),param_2 == '\0');
    FUN_00c0a950(param_1,0x40);
  }
  return;
}

