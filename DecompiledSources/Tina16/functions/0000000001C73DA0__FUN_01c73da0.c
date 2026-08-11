/* Ghidra address: 01c73da0 */
/* Ghidra symbol: FUN_01c73da0 */


void FUN_01c73da0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x17b8),0);
  *(undefined1 *)(param_1 + 0x24fb) = 0;
  uVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
  FUN_01a97cf0(uVar1,uVar2);
  FUN_0064e030(*(undefined8 *)(param_1 + 0xa10),*(undefined4 *)PTR_DAT_02003ad0);
  FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
  return;
}

