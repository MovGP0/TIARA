/* Ghidra address: 00c31ec0 */
/* Ghidra symbol: FUN_00c31ec0 */


void FUN_00c31ec0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  if ((*(char *)(param_1 + 8) != '\0') &&
     (cVar4 = FUN_00c350b0(*(undefined8 *)(param_1 + 0x10)), cVar4 != '\0')) {
    plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
    (**(code **)(*plVar5 + 0x20))(plVar5,local_48);
    FUN_00c2cdc0(*(undefined8 *)(param_1 + 0x68),local_38,local_48);
    lVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
    *(undefined4 *)(lVar1 + 0x90) = 0xcc0020;
    uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
    uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
    FUN_005fead0(uVar2,local_38,uVar3,local_38);
    return;
  }
  lVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
  FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),*(undefined4 *)(param_1 + 0x30));
  lVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
  FUN_005fdcb0(*(undefined8 *)(lVar1 + 0x80),0);
  plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
  plVar6 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*plVar6 + 0x20))(plVar6,local_58);
  FUN_00c2cdc0(*(undefined8 *)(param_1 + 0x68),local_48,local_58);
  (**(code **)(*plVar5 + 0xa8))(plVar5,local_48);
  return;
}

