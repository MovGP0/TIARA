/* Ghidra address: 00749e10 */
/* Ghidra symbol: FUN_00749e10 */


void FUN_00749e10(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_00749f20(&PTR_FUN_0073a900,1,*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x130))(plVar1,*(undefined8 *)(param_1 + 0x40));
  FUN_0064de00(plVar1,param_3);
  FUN_004aec30(*(undefined8 *)(param_1 + 0x38),param_2,plVar1);
  FUN_0074a520(*(undefined8 *)(param_1 + 0x40),param_2);
  if ((*(ushort *)(*(longlong *)(param_1 + 0x40) + 0x34) & 0x10) != 0) {
    lVar2 = FUN_007f9b70(*(longlong *)(param_1 + 0x40),1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x510) != 0)) {
      (**(code **)(**(longlong **)(lVar2 + 0x510) + 0x18))(*(longlong **)(lVar2 + 0x510));
    }
  }
  return;
}

