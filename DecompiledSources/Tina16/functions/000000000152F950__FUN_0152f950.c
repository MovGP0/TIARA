/* Ghidra address: 0152f950 */
/* Ghidra symbol: FUN_0152f950 */


void FUN_0152f950(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x1bf8) == '\0') {
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x958));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x730),iVar1 != 0);
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x958));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x738),iVar1 != 0);
    uVar3 = FUN_006a6030();
    uVar2 = FUN_006a5ff0(uVar3,1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x740),uVar2);
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x958));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x748),iVar1 != 0);
    (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x128))
              (*(longlong **)(param_1 + 0x8e8),
               *(undefined1 *)(*(longlong *)(param_1 + 0x6d8) + 0x81));
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x128))
              (*(longlong **)(param_1 + 0x8f8),
               *(undefined1 *)(*(longlong *)(param_1 + 0x738) + 0x81));
    (**(code **)(**(longlong **)(param_1 + 0x900) + 0x128))
              (*(longlong **)(param_1 + 0x900),
               *(undefined1 *)(*(longlong *)(param_1 + 0x740) + 0x81));
  }
  return;
}

