/* Ghidra address: 00749d90 */
/* Ghidra symbol: FUN_00749d90 */


void FUN_00749d90(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),param_2);
  FUN_00410f20(uVar1);
  FUN_004ae870(*(undefined8 *)(param_1 + 0x38),param_2);
  FUN_0074a520(*(undefined8 *)(param_1 + 0x40),0);
  if ((*(ushort *)(*(longlong *)(param_1 + 0x40) + 0x34) & 0x10) != 0) {
    lVar2 = FUN_007f9b70(*(longlong *)(param_1 + 0x40),1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x510) != 0)) {
      (**(code **)(**(longlong **)(lVar2 + 0x510) + 0x18))(*(longlong **)(lVar2 + 0x510));
    }
  }
  return;
}

