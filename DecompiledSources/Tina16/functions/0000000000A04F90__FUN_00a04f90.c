/* Ghidra address: 00a04f90 */
/* Ghidra symbol: FUN_00a04f90 */


void FUN_00a04f90(longlong param_1)

{
  longlong lVar1;
  uint local_1c;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_00a05950(param_1,2,lVar1);
  FUN_00a05950(param_1,2,lVar1 + 4);
  FUN_00a05950(param_1,1,&local_1c);
  *(bool *)(lVar1 + 8) = (local_1c & 0x80) != 0;
  *(uint *)(lVar1 + 0xc) = (local_1c >> 4 & 7) + 1;
  *(bool *)(lVar1 + 0x10) = (local_1c & 8) != 0;
  local_1c = local_1c & 7;
  if (local_1c == 0) {
    *(undefined4 *)(lVar1 + 0x14) = 2;
  }
  else if (local_1c == 1) {
    *(undefined4 *)(lVar1 + 0x14) = 4;
  }
  else if (local_1c == 2) {
    *(undefined4 *)(lVar1 + 0x14) = 8;
  }
  else if (local_1c == 3) {
    *(undefined4 *)(lVar1 + 0x14) = 0x10;
  }
  else if (local_1c == 4) {
    *(undefined4 *)(lVar1 + 0x14) = 0x20;
  }
  else if (local_1c == 5) {
    *(undefined4 *)(lVar1 + 0x14) = 0x40;
  }
  else if (local_1c == 6) {
    *(undefined4 *)(lVar1 + 0x14) = 0x80;
  }
  else if (local_1c == 7) {
    *(undefined4 *)(lVar1 + 0x14) = 0x100;
  }
  else {
    *(undefined4 *)(lVar1 + 0x14) = 0x100;
  }
  FUN_00a05950(param_1,1,lVar1 + 0x18);
  FUN_00a05950(param_1,1,lVar1 + 0x1c);
  *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
  if (*(char *)(lVar1 + 8) != '\0') {
    FUN_00a050d0(param_1,*(undefined4 *)(lVar1 + 0x14),lVar1 + 0x20);
  }
  return;
}

