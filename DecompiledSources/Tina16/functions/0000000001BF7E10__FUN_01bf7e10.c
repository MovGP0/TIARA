/* Ghidra address: 01bf7e10 */
/* Ghidra symbol: FUN_01bf7e10 */


void FUN_01bf7e10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
  if ((iVar6 != 0) && (iVar5 = 0, -1 < iVar6 + -1)) {
    do {
      lVar1 = FUN_01bf9610(param_2,iVar5);
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FUN_01bf9980(param_2,1);
        lVar1 = FUN_01bf9610(param_2,iVar5);
        uVar2 = FUN_01bf9610(param_2,iVar5);
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x308))(*(longlong **)(lVar1 + 0x18),uVar2);
        lVar1 = FUN_01bf9610(param_2,iVar5);
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
        pcVar3 = (code *)FUN_00411550(uVar2,0xffce);
        (*pcVar3)(uVar2);
        lVar1 = FUN_01bf9610(param_2,iVar5);
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x108))(*(longlong **)(lVar1 + 0x18));
        lVar1 = FUN_01bf9610(param_2,iVar5);
        lVar4 = FUN_01bf9610(param_2,iVar5);
        FUN_0064dbe0(*(undefined8 *)(lVar1 + 0x18),*(undefined1 *)(lVar4 + 0x58));
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

