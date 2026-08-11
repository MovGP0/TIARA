/* Ghidra address: 012c5b60 */
/* Ghidra symbol: FUN_012c5b60 */


void FUN_012c5b60(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
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
      local_30[0] = 0;
      local_38[0] = 0;
      local_40[0] = 0;
      FUN_012ca200(param_1,uVar5,1,0,0,uVar1,uVar2,uVar3,local_30,local_38,local_40);
    }
  }
  return;
}

