/* Ghidra address: 012c6130 */
/* Ghidra symbol: FUN_012c6130 */


void FUN_012c6130(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
  if (lVar4 != 0) {
    lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
    if ((*(uint *)(*(longlong *)(lVar4 + 0x18) + 0x62c) & 0x20) == 0x20) {
      uVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))
                        (*(longlong **)(param_1 + 0x7d8));
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x260))
                        (*(longlong **)(param_1 + 0x858));
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x260))
                        (*(longlong **)(param_1 + 0x8c8));
      FUN_012cb590(param_1,uVar5,0,0,1,0,uVar1,uVar2,uVar3);
    }
  }
  return;
}

