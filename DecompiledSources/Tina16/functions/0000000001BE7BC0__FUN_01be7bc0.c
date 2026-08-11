/* Ghidra address: 01be7bc0 */
/* Ghidra symbol: FUN_01be7bc0 */


void FUN_01be7bc0(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 local_2c;
  
  local_2c = 0;
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    do {
      iVar2 = 0;
      iVar7 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
      bVar1 = false;
      if (-1 < iVar7 + -1) {
        do {
          uVar3 = FUN_01bfb960(param_2,iVar2);
          lVar4 = FUN_01bfd980(uVar3);
          uVar3 = FUN_01bfb960(param_3,local_2c);
          lVar5 = FUN_01bfd980(uVar3);
          if (lVar4 == lVar5) {
            bVar1 = true;
            break;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + -1;
          bVar1 = false;
        } while (iVar7 != 0);
      }
      if (!bVar1) {
        plVar6 = (longlong *)FUN_01bfb850(param_2);
        uVar3 = FUN_01bfb960(param_3,local_2c);
        (**(code **)(*plVar6 + 0x10))(plVar6,uVar3);
        FUN_01bfae80(plVar6,0);
        FUN_01bfe550(plVar6,0xffffffff);
      }
      local_2c = local_2c + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

