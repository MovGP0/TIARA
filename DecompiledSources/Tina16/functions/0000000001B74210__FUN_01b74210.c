/* Ghidra address: 01b74210 */
/* Ghidra symbol: FUN_01b74210 */


void FUN_01b74210(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8));
  if (iVar2 != -1) {
    plVar1 = *(longlong **)(param_1 + 0x6f8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar3);
    *(undefined8 *)(param_1 + 0x748) = uVar4;
  }
  if (*(longlong *)(param_1 + 0x748) == 0) goto LAB_01b742f3;
  iVar2 = FUN_00414f50(*(undefined8 *)(param_1 + 0x748),&DAT_01b74310,
                       (ulonglong)**(byte **)(param_1 + 0x748) + 1);
  if (iVar2 == 0) {
LAB_01b742ba:
    uVar3 = 0;
  }
  else {
    uVar4 = FUN_00414f50(*(undefined8 *)(param_1 + 0x748),&DAT_01b74337,
                         (ulonglong)**(byte **)(param_1 + 0x748) + 1);
    if ((int)uVar4 == 0) goto LAB_01b742ba;
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))(*(longlong **)(param_1 + 0x738),uVar3);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x738),
               *(undefined1 *)(*(longlong *)(param_1 + 0x748) + 0x100));
LAB_01b742f3:
  FUN_0064e770(*(undefined8 *)(param_1 + 0x700));
  FUN_01b75500(param_1);
  return;
}

