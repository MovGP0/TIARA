/* Ghidra address: 01cd6de0 */
/* Ghidra symbol: FUN_01cd6de0 */


undefined1 FUN_01cd6de0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)(param_1 + 0xf8) + 0x10) < 1) {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0xf8),0);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aae560);
    if (cVar1 == '\0') {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aaff18);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
        uVar2 = *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0x88) + 8) + 0x434);
      }
    }
    else {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      uVar2 = *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0xd0) + 8) + 0x434);
    }
  }
  return uVar2;
}

