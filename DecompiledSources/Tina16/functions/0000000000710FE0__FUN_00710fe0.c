/* Ghidra address: 00710fe0 */
/* Ghidra symbol: FUN_00710fe0 */


void FUN_00710fe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if ((((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 1) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 2) != 0)) &&
     ((*(uint *)(lVar1 + 4) & 0x40000000) == 0x40000000)) {
    uVar3 = FUN_00777cd0();
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    uVar2 = FUN_007793a0(uVar3,(&DAT_01e03e78)[uVar4 & 0xff]);
    uVar2 = FUN_005fbf20(uVar2);
    *(undefined4 *)(lVar1 + 0x14) = uVar2;
    uVar3 = FUN_00777cd0();
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    uVar2 = FUN_00779380(uVar3,(&DAT_01e03e7a)[uVar4 & 0xff]);
    uVar2 = FUN_005fbf20(uVar2);
    *(undefined4 *)(lVar1 + 0x60) = uVar2;
    *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xbfffffff;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

