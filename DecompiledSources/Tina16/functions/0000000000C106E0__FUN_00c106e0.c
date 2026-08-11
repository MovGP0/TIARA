/* Ghidra address: 00c106e0 */
/* Ghidra symbol: FUN_00c106e0 */


void FUN_00c106e0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_006ab190(param_2);
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(lVar2 + 0xe0);
  *(undefined8 *)(param_1 + 0x8d0) = *(undefined8 *)(lVar2 + 0xe8);
  lVar2 = FUN_006ab190(param_2);
  *(undefined8 *)(param_1 + 0x8e8) = *(undefined8 *)(lVar2 + 0x98);
  *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(lVar2 + 0xa0);
  uVar1 = FUN_00c08890(param_1);
  *(undefined4 *)(param_1 + 0x8f8) = uVar1;
  uVar1 = FUN_00c0faf0(param_1);
  *(undefined4 *)(param_1 + 0x8fc) = uVar1;
  lVar2 = FUN_006ab190(param_2);
  *(longlong *)(lVar2 + 0xe8) = param_1;
  *(code **)(lVar2 + 0xe0) = FUN_00c10950;
  lVar2 = FUN_006ab190(param_2);
  *(longlong *)(lVar2 + 0xa0) = param_1;
  *(code **)(lVar2 + 0x98) = FUN_00c10e00;
  plVar3 = (longlong *)FUN_006ab190(param_2);
  (**(code **)(*plVar3 + 0xa8))(plVar3);
  return;
}

