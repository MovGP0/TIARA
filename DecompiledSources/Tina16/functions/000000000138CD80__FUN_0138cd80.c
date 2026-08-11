/* Ghidra address: 0138cd80 */
/* Ghidra symbol: FUN_0138cd80 */


void FUN_0138cd80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_2c [3];
  
  cVar1 = *(char *)(param_1 + 0xe74);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x128))
            (*(longlong **)(param_1 + 0xe88),local_2c,param_1 + 0xe74);
  *(undefined1 *)(param_1 + 0xe74) = *(undefined1 *)(*(longlong *)(param_1 + 0xd38) + 0x328);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x130))
            (*(longlong **)(param_1 + 0xe88),local_2c,param_1 + 0xe74,1);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x120))
            (*(longlong **)(param_1 + 0xe88),local_2c[0],*(undefined1 *)(param_1 + 0xe74));
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0xd38),*(undefined1 *)(param_1 + 0xe74));
  lVar2 = *(longlong *)(param_1 + 0xd38);
  if (*(char *)(lVar2 + 0x328) == '\0') {
    FUN_0064de00(lVar2,&LAB_0138ceb4);
  }
  else {
    FUN_0064de00(lVar2,&DAT_0138cea0);
  }
  if (*(char *)(param_1 + 0xe74) != cVar1) {
    FUN_01389820(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
              (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
    FUN_010f67e0(param_1,1,1);
    FUN_01389900(param_1);
  }
  return;
}

