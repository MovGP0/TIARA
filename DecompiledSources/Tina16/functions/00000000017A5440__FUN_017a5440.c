/* Ghidra address: 017a5440 */
/* Ghidra symbol: FUN_017a5440 */


void FUN_017a5440(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6f0);
  lVar3 = FUN_006e2530(uVar1);
  if (lVar3 == 0) {
LAB_017a5480:
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_006e2530(uVar1);
    lVar5 = FUN_006dd390(uVar4);
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = FUN_006e2530(uVar1);
      if (*(int *)(lVar3 + 0x18) != 0x65) goto LAB_017a5480;
    }
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0xe8))(*(longlong **)(param_1 + 0x728),uVar2);
  return;
}

