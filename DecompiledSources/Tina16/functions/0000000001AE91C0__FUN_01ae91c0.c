/* Ghidra address: 01ae91c0 */
/* Ghidra symbol: FUN_01ae91c0 */


undefined8 FUN_01ae91c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x10) < 1) {
    lVar3 = FUN_01ad0c80(param_1,0);
    uVar2 = 0;
    if (lVar3 != 0) {
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01aae560);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01aaff18);
        uVar2 = 0;
        if (cVar1 != '\0') {
          uVar2 = *(undefined8 *)(lVar3 + 0x88);
        }
      }
      else {
        uVar2 = *(undefined8 *)(lVar3 + 0xd0);
      }
    }
  }
  else {
    uVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x90),0);
  }
  return uVar2;
}

