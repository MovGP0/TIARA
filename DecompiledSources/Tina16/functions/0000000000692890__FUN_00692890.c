/* Ghidra address: 00692890 */
/* Ghidra symbol: FUN_00692890 */


void FUN_00692890(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_00777cd0();
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((*(byte *)(plVar1 + 0x59) & 2) == 0) {
    FUN_005fdab0(*(undefined8 *)(param_1 + 8),(int)plVar1[0x19]);
  }
  else {
    uVar4 = (**(code **)(*plVar1 + 0xf0))(plVar1);
    uVar2 = FUN_00779380(uVar3,(&DAT_01dfbc9c)[uVar4 & 0xff]);
    FUN_005fdab0(*(undefined8 *)(param_1 + 8),uVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((*(byte *)(plVar1 + 0x59) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(plVar1[0x17] + 0x28);
  }
  else {
    uVar4 = (**(code **)(*plVar1 + 0xf0))(plVar1);
    uVar2 = FUN_007793a0(uVar3,(&DAT_01dfbc9e)[uVar4 & 0xff]);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  return;
}

