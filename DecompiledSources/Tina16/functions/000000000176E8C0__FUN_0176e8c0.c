/* Ghidra address: 0176e8c0 */
/* Ghidra symbol: FUN_0176e8c0 */


int FUN_0176e8c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined7 uVar6;
  longlong lVar5;
  bool bVar7;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_24 = FUN_01769b90(param_1,param_2);
  uVar6 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(char *)(param_1 + 0x62) != '\0') {
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar7 = ((int)CONCAT71(uVar6,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x31U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      bVar7 = false;
      goto LAB_0176e921;
    }
  }
  bVar7 = true;
LAB_0176e921:
  local_24 = local_24 + 1;
  if (bVar7) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x90))(*(longlong **)(param_1 + 0xb8));
    lVar5 = param_1;
    if ((*(char *)(param_1 + 0x115) == '\0') && (lVar5 = param_2, *(char *)(param_2 + 0x7c) == '\0')
       ) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
    FUN_01770ba0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),uVar1);
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar7 = ((int)CONCAT71(uVar6,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x31U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      iVar2 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xb8));
    }
    else {
      iVar2 = FUN_01d31f80(*(undefined8 *)(param_1 + 0xb8));
    }
    local_24 = local_24 + iVar2;
    local_24 = local_24 + 1;
    if (*(char *)(param_2 + 0x7c) != '\0') {
      *(undefined1 *)(param_1 + 0x115) = 1;
    }
  }
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar7 = ((int)CONCAT71(uVar6,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar7 = false;
  }
  if ((bVar7) || (*(longlong *)(param_1 + 0x100) == 0)) {
    iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x100));
  }
  else {
    iVar2 = FUN_004170c0(&DAT_0176eb78,*(undefined8 *)(param_1 + 0x100),1);
    uVar1 = 0;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x100) + -4);
    }
    FUN_00416dc0(local_20,*(undefined8 *)(param_1 + 0x100),iVar2 + 1,uVar1);
    iVar2 = FUN_01d31350(local_20[0]);
  }
  local_24 = local_24 + iVar2;
  iVar2 = FUN_01d31f80(*(undefined8 *)(param_1 + 0xc0));
  iVar3 = FUN_01d31f80(*(undefined8 *)(param_1 + 200));
  iVar4 = FUN_01d31350(*(undefined8 *)(param_1 + 0x108));
  local_24 = local_24 + 1 + iVar2 + iVar3 + iVar4;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar7 = ((int)CONCAT71(uVar6,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    local_24 = local_24 + 8;
  }
  FUN_00414480(local_20);
  return local_24;
}

