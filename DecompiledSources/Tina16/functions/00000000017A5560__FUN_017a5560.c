/* Ghidra address: 017a5560 */
/* Ghidra symbol: FUN_017a5560 */


void FUN_017a5560(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x6f0);
  lVar2 = FUN_006e2530(uVar4);
  if (lVar2 != 0) {
    lVar2 = FUN_006e2530(uVar4);
    if (*(int *)(lVar2 + 0x18) == 0x66) {
LAB_017a55ba:
      uVar1 = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      goto LAB_017a55bc;
    }
    uVar3 = FUN_006e2530(uVar4);
    lVar2 = FUN_006dd580(uVar3);
    if (lVar2 != 0) {
      uVar4 = FUN_006e2530(uVar4);
      lVar2 = FUN_006dd580(uVar4);
      if (*(int *)(lVar2 + 0x18) == 0x66) goto LAB_017a55ba;
    }
  }
  uVar1 = 0;
LAB_017a55bc:
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0xe8))(*(longlong **)(param_1 + 0x740),uVar1);
  return;
}

