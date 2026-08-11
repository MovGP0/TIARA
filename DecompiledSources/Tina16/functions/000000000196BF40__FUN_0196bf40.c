/* Ghidra address: 0196bf40 */
/* Ghidra symbol: FUN_0196bf40 */


void FUN_0196bf40(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[0x35] = 0x4024000000000000;
  param_1[0x39] = 0x4024000000000000;
  param_1[0x3c] = 0x4024000000000000;
  param_1[0x2f] = 0x4024000000000000;
  uVar1 = FUN_0188d920();
  lVar2 = FUN_0188d190(uVar1);
  param_1[0x47] = *(longlong *)(lVar2 + 0x30);
  uVar1 = FUN_0188d920();
  lVar2 = FUN_0188d190(uVar1);
  param_1[0x45] = *(longlong *)(lVar2 + 0x28);
  uVar1 = FUN_0188d920();
  lVar2 = FUN_0188d190(uVar1);
  *(undefined1 *)((longlong)param_1 + 0x1b1) = *(undefined1 *)(lVar2 + 0x20);
  uVar1 = FUN_0188d920();
  lVar2 = FUN_0188d190(uVar1);
  (**(code **)(*param_1 + 0x278))(param_1,*(undefined4 *)(lVar2 + 0x24));
  FUN_0196baa0(param_1);
  return;
}

