/* Ghidra address: 00724e80 */
/* Ghidra symbol: FUN_00724e80 */


void FUN_00724e80(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 local_50 [2];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_40 = 0;
  local_38 = 0;
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x70);
  do {
    uVar1 = *puVar4;
    FUN_00416780(&local_38,CONCAT62((int6)(uVar3 >> 0x10),(short)uVar3 + 0x41));
    FUN_00416ba0(local_30,L"Color",local_38);
    local_48 = 0;
    local_50[0] = uVar1;
    FUN_00442f70(&local_40,L"%.6x",local_50,0);
    FUN_004b4f10(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xd8),local_30[0],local_40);
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0x10);
  FUN_00414560(&local_40,3);
  return;
}

