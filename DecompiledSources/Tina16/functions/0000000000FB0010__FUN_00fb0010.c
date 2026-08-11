/* Ghidra address: 00fb0010 */
/* Ghidra symbol: FUN_00fb0010 */


void FUN_00fb0010(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x731) == '\x01') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0xfffc | uVar1;
  }
  if (*(char *)(param_1 + 0x731) == '\x02') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0xfff3 | iVar2 * 4;
  }
  if (*(char *)(param_1 + 0x731) == '\x11') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0xffcf | iVar2 << 4;
  }
  if (*(char *)(param_1 + 0x731) == '\x12') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0xff3f | iVar2 << 6;
  }
  if (*(char *)(param_1 + 0x731) == '\x13') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0xfcff | iVar2 << 8;
  }
  if (*(char *)(param_1 + 0x731) == '\x14') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0xf3ff | iVar2 << 10;
  }
  if (*(char *)(param_1 + 0x731) == '\x15') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0xcfff | iVar2 << 0xc;
  }
  if (*(char *)(param_1 + 0x731) == '\x16') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) & 0x3fff | iVar2 << 0xe;
  }
  return;
}

