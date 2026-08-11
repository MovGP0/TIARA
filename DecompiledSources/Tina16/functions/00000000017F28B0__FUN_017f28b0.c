/* Ghidra address: 017f28b0 */
/* Ghidra symbol: FUN_017f28b0 */


void FUN_017f28b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0xb61) != '\0') {
    plVar1 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb58) + 0x28) + 0x90) + 0xa0);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    FUN_017f2850(param_1,*(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xb58) + 0x28) + 0x90) + 0xa0));
    uVar2 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x868));
    plVar1 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb58) + 0x28) + 0x90) + 0x80);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
  }
  *(undefined1 *)(param_1 + 0xb60) = 0;
  *(undefined1 *)(param_1 + 0xb61) = 1;
  FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,1);
  (**(code **)(**(longlong **)(param_1 + 0xb58) + 0x50))
            (*(longlong **)(param_1 + 0xb58),
             *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),
             &local_28);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_28,local_24,local_20,local_1c);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x750),1);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x800),0);
  FUN_00805200(param_1);
  return;
}

