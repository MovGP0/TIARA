/* Ghidra address: 006930c0 */
/* Ghidra symbol: FUN_006930c0 */


void FUN_006930c0(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  iVar1 = *param_2;
  if (6 < iVar1 - 0x132U) {
    if (iVar1 == 0xb007) {
      (**(code **)(*param_1 + 0x58))(param_1);
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    if (iVar1 == 0xb00c) {
      FUN_00692890(param_1);
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    if (6 < iVar1 - 0xbd32U) {
      FUN_00786c80(param_1,param_2);
      return;
    }
  }
  uVar2 = FUN_005fbf20(*(undefined4 *)((longlong)param_1 + 0x1c));
  thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar2);
  if ((*(byte *)(param_1[2] + 0x2c8) & 2) == 0) {
    FUN_005fdab0(param_1[1],*(undefined4 *)(param_1[2] + 200));
  }
  else {
    uVar3 = FUN_00777cd0();
    uVar4 = (**(code **)(*(longlong *)param_1[2] + 0xf0))((longlong *)param_1[2]);
    uVar2 = FUN_00779380(uVar3,(&DAT_01dfbca0)[uVar4 & 0xff]);
    FUN_005fdab0(param_1[1],uVar2);
  }
  uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[1] + 0x18) + 0x28));
  thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar2);
  uVar3 = FUN_005fdb10(param_1[1]);
  *(undefined8 *)(param_2 + 6) = uVar3;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

