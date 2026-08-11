/* Ghidra address: 00c7a720 */
/* Ghidra symbol: FUN_00c7a720 */


void FUN_00c7a720(longlong param_1,uint *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x220);
  if (*(char *)(lVar1 + 10) == '\x01') {
    *param_2 = *param_2 | 8;
  }
  if ((*(byte *)(lVar1 + 0xe) & 1) == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x220) + 0xe) & 6) != 0) {
      *param_2 = *param_2 | 0x80;
    }
  }
  else {
    *param_2 = *param_2 | 0x40;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x220) + 0xe) & 4) != 0) {
    *param_2 = *param_2 | 0x800;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x220) + 0xe) & 2) != 0) {
    *param_2 = *param_2 | 0x1000;
  }
  if (*(char *)(lVar1 + 9) != '\0') {
    *param_2 = *param_2 | 0x20;
  }
  if (*(char *)(lVar1 + 0xd) != '\0') {
    *param_2 = *param_2 | 1;
  }
  if (*(char *)(lVar1 + 8) != '\0') {
    *param_2 = *param_2 | 0x100;
  }
  return;
}

