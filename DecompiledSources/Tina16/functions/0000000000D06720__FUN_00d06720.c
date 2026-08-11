/* Ghidra address: 00d06720 */
/* Ghidra symbol: FUN_00d06720 */


void FUN_00d06720(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414ad0(param_1 + 0x108,param_2);
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x120) = 0;
  FUN_00416dc0(&local_20,*(undefined8 *)(param_1 + 0x108),6,3);
  cVar2 = '\0';
  ppuVar3 = &PTR_DAT_01eb2cc8;
  do {
    cVar1 = FUN_00879070(*ppuVar3,local_20);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0x120) = cVar2;
      break;
    }
    cVar2 = cVar2 + '\x01';
    ppuVar3 = ppuVar3 + 1;
  } while (cVar2 != '\x02');
  FUN_00414480(&local_20);
  return;
}

