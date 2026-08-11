/* Ghidra address: 01c92e80 */
/* Ghidra symbol: FUN_01c92e80 */


void FUN_01c92e80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint in_stack_ffffffffffffff98;
  
  if (PTR_DAT_02004010[0x8bc] != '\0') {
    in_stack_ffffffffffffff98 = 0;
    cVar2 = FUN_01349310(0,0,*(undefined8 *)(param_1 + 0x2788),0,1,0,0,0,0,0,0,0,0,0,0,0,0,0x1c7,0,0
                         ,0,0,0,0);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x2788);
      if (*(char *)(lVar1 + 0xe28) == '\0') {
        FUN_013d2f60(*(undefined8 *)(lVar1 + 0xe00),0,0);
      }
      else {
        FUN_013e5a30(*(undefined8 *)(lVar1 + 0xe00),*(undefined8 *)(lVar1 + 0xe10),0,0);
      }
    }
  }
  if (PTR_DAT_02004010[0x8bd] != '\0') {
    cVar2 = FUN_01394040(0,*(undefined8 *)(param_1 + 0x2788),1,0,0,0,0,0,0,0,0x1c7,0,
                         in_stack_ffffffffffffff98 & 0xffffff00);
    if (cVar2 == '\0') {
      FUN_013d4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),
                   *(undefined2 *)(PTR_DAT_02004010 + 0x39e),0,0,1);
    }
  }
  if (PTR_DAT_02004010[0x8be] != '\0') {
    cVar2 = FUN_01324990(0,*(undefined8 *)(param_1 + 0x2788),1,0,0,0,0,0,0);
    if (cVar2 == '\0') {
      FUN_013d3ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),1);
    }
  }
  if (PTR_DAT_02004010[0x8bf] != '\0') {
    cVar2 = FUN_014f6590(*(undefined8 *)(param_1 + 0x2788),1,0,0);
    if (cVar2 == '\0') {
      FUN_013d8d70(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),PTR_DAT_02004010[0x3ba],
                   1);
    }
  }
  return;
}

