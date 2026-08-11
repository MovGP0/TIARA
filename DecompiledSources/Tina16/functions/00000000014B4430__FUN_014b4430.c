/* Ghidra address: 014b4430 */
/* Ghidra symbol: FUN_014b4430 */


void FUN_014b4430(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x894) == '\0') {
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x860));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x738),iVar1 != 0);
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x860));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x740),iVar1 != 0);
    uVar3 = FUN_006a6030();
    uVar2 = FUN_006a5ff0(uVar3,1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x748),uVar2);
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x860));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x750),iVar1 != 0);
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x128))
              (*(longlong **)(param_1 + 0x800),
               *(undefined1 *)(*(longlong *)(param_1 + 0x740) + 0x81));
    (**(code **)(**(longlong **)(param_1 + 0x808) + 0x128))
              (*(longlong **)(param_1 + 0x808),
               *(undefined1 *)(*(longlong *)(param_1 + 0x748) + 0x81));
  }
  return;
}

