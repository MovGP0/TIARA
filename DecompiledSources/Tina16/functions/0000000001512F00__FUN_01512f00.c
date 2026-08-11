/* Ghidra address: 01512f00 */
/* Ghidra symbol: FUN_01512f00 */


void FUN_01512f00(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int local_3c;
  
  lVar1 = *(longlong *)(param_1 + 0xed8);
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_0150efa0(lVar1);
    local_3c = *(int *)(*(longlong *)(lVar1 + 0x40) + 0x3c);
    iVar6 = *(int *)(*(longlong *)(lVar1 + 0x40) + 0x40);
    if (local_3c <= iVar6) {
      iVar6 = (iVar6 - local_3c) + 1;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
        uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,local_3c);
        lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01106728);
        iVar5 = local_3c - *(int *)(*(longlong *)(lVar1 + 0x40) + 0x3c);
        if (param_2 == '\0') {
          FUN_01d3ad60(*(undefined8 *)(lVar4 + 0x148),*(undefined8 *)(lVar1 + 0x10),
                       *(undefined8 *)(lVar1 + 0x18),
                       *(undefined1 *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar5));
        }
        else if (param_2 == '\x01') {
          FUN_01d3ab30(*(undefined8 *)(lVar4 + 0x148),*(undefined8 *)(lVar1 + 0x10),
                       *(undefined8 *)(lVar1 + 0x18),
                       *(undefined1 *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar5));
        }
        else if (param_2 == '\x02') {
          FUN_01d3b080(*(undefined8 *)(lVar4 + 0x148),*(undefined8 *)(lVar1 + 0x10),
                       *(undefined8 *)(lVar1 + 0x18));
        }
        else if (param_2 == '\x03') {
          dVar7 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                                    (*(longlong **)(param_1 + 0xee0));
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe8))
                            (*(longlong **)(param_1 + 0xee0));
          FUN_01d3b2f0(*(undefined8 *)(lVar4 + 0x148),*(undefined8 *)(lVar1 + 0x10),
                       *(undefined8 *)(lVar1 + 0x18),dVar7 * (double)iVar5,
                       *(undefined4 *)(lVar1 + 0x38));
        }
        local_3c = local_3c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_01513140(param_1);
  return;
}

