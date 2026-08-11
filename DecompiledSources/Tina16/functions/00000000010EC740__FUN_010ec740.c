/* Ghidra address: 010ec740 */
/* Ghidra symbol: FUN_010ec740 */


void FUN_010ec740(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (0 < iVar3) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      lVar4 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x30))(*(longlong **)(lVar2 + 0xd8),0);
      lVar5 = FUN_010e7720(param_1,param_3);
      if (lVar5 != 0) {
        if (*(longlong *)(lVar2 + 0xf0) != 0) {
          iVar3 = FUN_004aeba0(*(undefined8 *)(lVar5 + 0x108),*(undefined8 *)(lVar2 + 0xf0));
          if (iVar3 != -1) {
            iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))
                              (*(longlong **)(lVar4 + 0x80));
            if (iVar3 < 2) {
              FUN_01ae2980(lVar2,1);
            }
            else {
              FUN_010e7ef0(param_1,1,1);
            }
          }
        }
        if (*(longlong *)(lVar2 + 0xf8) != 0) {
          iVar3 = FUN_004aeba0(*(undefined8 *)(lVar5 + 0x108),*(undefined8 *)(lVar2 + 0xf8));
          if (iVar3 != -1) {
            iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))
                              (*(longlong **)(lVar4 + 0x80));
            if (iVar3 < 2) {
              FUN_01ae2980(lVar2,0);
            }
            else {
              FUN_010e7ef0(param_1,0,1);
            }
          }
        }
        FUN_010ebfc0(param_1,lVar4,param_3);
      }
    }
  }
  return;
}

