/* Ghidra address: 010e97a0 */
/* Ghidra symbol: FUN_010e97a0 */


void FUN_010e97a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (0 < iVar4) {
      lVar6 = 0;
      lVar3 = *(longlong *)(param_1 + 0x50);
      lVar5 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x30))(*(longlong **)(lVar3 + 0xd8),0);
      iVar4 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x28))(*(longlong **)(lVar3 + 0xd8));
      if (iVar4 == 2) {
        lVar6 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x30))(*(longlong **)(lVar3 + 0xd8),1);
      }
      lVar7 = FUN_010e7720(param_1,param_2);
      if (lVar7 != 0) {
        cVar1 = *(char *)(lVar5 + 0x58);
        if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\x05')) {
          if (*(longlong *)(lVar3 + 0xf0) != 0) {
            iVar4 = FUN_004aeba0(*(undefined8 *)(lVar7 + 0x108),*(undefined8 *)(lVar3 + 0xf0));
            if (iVar4 != -1) {
              iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))
                                (*(longlong **)(lVar5 + 0x80));
              if (iVar4 < 2) {
                FUN_01ae2980(lVar3,1);
              }
              else {
                FUN_010e7ef0(param_1,1,1);
              }
            }
          }
          if (*(longlong *)(lVar3 + 0xf8) != 0) {
            iVar4 = FUN_004aeba0(*(undefined8 *)(lVar7 + 0x108),*(undefined8 *)(lVar3 + 0xf8));
            if (iVar4 != -1) {
              iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))
                                (*(longlong **)(lVar5 + 0x80));
              if (iVar4 < 2) {
                FUN_01ae2980(lVar3,0);
              }
              else {
                FUN_010e7ef0(param_1,0,1);
              }
            }
          }
        }
        else {
          iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))(*(longlong **)(lVar5 + 0x80));
          if (iVar4 < 2) {
            if (*(longlong *)(lVar3 + 0xf0) != 0) {
              FUN_01ae2980(lVar3,1);
            }
            if (*(longlong *)(lVar3 + 0xf8) != 0) {
              FUN_01ae2980(lVar3,0);
            }
          }
        }
        *param_4 = 1;
        FUN_00f1d350(lVar5,param_2);
        if (lVar6 != 0) {
          FUN_00f1d350(lVar6,param_2);
        }
      }
    }
  }
  return;
}

