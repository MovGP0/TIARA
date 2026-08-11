/* Ghidra address: 01c77ab0 */
/* Ghidra symbol: FUN_01c77ab0 */


void FUN_01c77ab0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x9e8) + 0x80) != '\0') {
    lVar1 = FUN_01c7da00(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_01c7da00(param_1);
      uVar3 = *(undefined4 *)(lVar1 + 0xc);
      goto LAB_01c77af0;
    }
  }
  lVar1 = FUN_01c7d9d0(param_1);
  uVar3 = *(undefined4 *)(lVar1 + 0xc);
LAB_01c77af0:
  uVar2 = FUN_019a4600();
  FUN_0153be60(uVar2,param_2,uVar3);
  return;
}

