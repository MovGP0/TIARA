/* Ghidra address: 0113d390 */
/* Ghidra symbol: FUN_0113d390 */


void FUN_0113d390(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0xa09) != '\0') {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x60))(*(longlong **)(param_1 + 0xa18));
    (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x268))(*(longlong **)(param_1 + 0x9d8),uVar4);
    goto code_r0x0113d56c;
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8));
  if (iVar5 != -1) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x58))(*(longlong **)(param_1 + 0xa18),uVar4);
    plVar1 = *(longlong **)(param_1 + 0x9d8);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar6 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar4);
    *(undefined8 *)(param_1 + 0xa10) = uVar6;
    lVar2 = *(longlong *)(param_1 + 0xa10);
    plVar1 = *(longlong **)(lVar2 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (sVar3 == 100) {
        FUN_0064de00(param_1,L"Network Analyzer Internal Source");
      }
      else {
        sVar3 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0xf8))(*(longlong **)(lVar2 + 0x20));
        if (sVar3 != 0x3e) {
          sVar3 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0xf8))(*(longlong **)(lVar2 + 0x20));
          if (sVar3 != 0x66) {
            FUN_0064de00(param_1,*(undefined8 *)(param_1 + 0xa98));
            goto LAB_0113d4f4;
          }
        }
        FUN_0064de00(param_1,L"Signal Analyzer Output");
      }
LAB_0113d4f4:
      *(undefined1 *)(lVar2 + 0x11) = 1;
    }
  }
  FUN_0113a180(param_1);
  FUN_011390d0(param_1);
  FUN_0113a780(param_1);
  FUN_0113a9b0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x9d8);
  uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar4);
  FUN_00414ad0(*(longlong *)(param_1 + 0x9d8) + 0xf0,local_20[0]);
code_r0x0113d56c:
  FUN_00414480(local_20);
  return;
}

