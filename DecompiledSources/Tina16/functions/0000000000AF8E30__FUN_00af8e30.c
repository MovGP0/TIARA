/* Ghidra address: 00af8e30 */
/* Ghidra symbol: FUN_00af8e30 */


longlong * FUN_00af8e30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00652a60(&DAT_00aea600,1,0xfffffffffffffffd);
  FUN_0064dbe0(plVar2,0);
  (**(code **)(*plVar2 + 0x130))(plVar2,*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*plVar2 + 0x288))(plVar2,*(undefined4 *)(param_1 + 0x490));
  (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(param_1 + 0x4b0));
  (**(code **)(*plVar2 + 0x2a0))(plVar2,*(undefined4 *)(param_1 + 0x4c0));
  (**(code **)(*plVar2 + 0x290))(plVar2,*(undefined4 *)(param_1 + 0x4a8));
  (**(code **)(*plVar2 + 0x280))(plVar2,*(undefined4 *)(param_1 + 0x4a4));
  (**(code **)(*plVar2 + 0x2c8))(plVar2,0);
  if (*(char *)(*(longlong *)(param_1 + 0x8b0) + 0x60) == '\0') {
    (**(code **)(*plVar2 + 0x268))(plVar2,1);
  }
  else {
    (**(code **)(*plVar2 + 0x268))(plVar2,2);
  }
  lVar1 = plVar2[0x116];
  *(undefined1 *)(lVar1 + 0xb1) = 1;
  *(undefined1 *)(lVar1 + 0xb0) = 1;
  (**(code **)(*plVar2 + 0x148))(plVar2,*(undefined1 *)(param_1 + 0x2c8));
  return plVar2;
}

