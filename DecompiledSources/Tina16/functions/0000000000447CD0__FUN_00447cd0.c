/* Ghidra address: 00447cd0 */
/* Ghidra symbol: FUN_00447cd0 */


undefined8 FUN_00447cd0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_10;
  
  local_10 = 0;
  uVar3 = param_2;
  FUN_00414480(param_2);
  while( true ) {
    sVar1 = *(short *)(*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0x8c) * 2);
    uVar2 = sVar1 - 0x30;
    if (uVar2 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << ((byte)uVar2 & 0x1f) & 0x3ffU)
              != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    FUN_00416780(&local_10,sVar1);
    uVar3 = local_10;
    FUN_00416ad0(param_2,local_10);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  while( true ) {
    uVar2 = *(short *)(*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0x8c) * 2) -
            0x30;
    if (uVar2 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)*(longlong *)(param_1 + 0xb0) >> 0x10),1) <<
               ((byte)uVar2 & 0x1f) & 0x3ffU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  FUN_00414480(&local_10);
  return param_2;
}

