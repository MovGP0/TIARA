/* Ghidra address: 01b9aa40 */
/* Ghidra symbol: FUN_01b9aa40 */


void FUN_01b9aa40(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))
                     (*(longlong **)(param_1 + 0x880),uVar1);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  (**(code **)(*plVar4 + 0x120))
            (plVar4,
             L"; TINA Component Registry V2.0\r; Copyright (c) 1993-2017 DesignSoft, Inc.\r\r");
  iVar2 = FUN_006decb0();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar6);
      if (*(short *)**(undefined8 **)(lVar5 + 0x18) == 0x5b) {
        (**(code **)(*plVar4 + 0x78))(plVar4,0);
      }
      lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar6);
      iVar3 = FUN_004170c0(L"id_group",*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 8),1);
      if (iVar3 == 0) {
        lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar6);
        iVar3 = FUN_004170c0(L"id_component",*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 8),1);
        if (iVar3 != 0) goto LAB_01b9ab77;
        lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar6);
        (**(code **)(*plVar4 + 0x78))(plVar4,**(undefined8 **)(lVar5 + 0x18));
      }
      else {
LAB_01b9ab77:
        lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar6);
        if (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x10) == '\0') {
          lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar6);
          (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 8));
        }
        else {
          lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar6);
          (**(code **)(*plVar4 + 0x78))(plVar4,**(undefined8 **)(lVar5 + 0x18));
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

