/* Ghidra address: 010254a0 */
/* Ghidra symbol: FUN_010254a0 */


undefined1 FUN_010254a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  char *pcVar3;
  char local_4b0;
  char local_4af;
  
  pcVar3 = &local_4b0;
  for (lVar2 = 0x93; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pcVar3 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 8;
  }
  FUN_004179d0(&local_4b0,&DAT_00f68330);
  if ((local_4b0 == '\0') || (local_4af != '\x0e')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00417740(&local_4b0,&DAT_00f68330);
  return uVar1;
}

