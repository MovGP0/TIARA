/* Ghidra address: 01127d90 */
/* Ghidra symbol: FUN_01127d90 */


void FUN_01127d90(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  bool bVar7;
  wchar_t *local_48;
  longlong local_40;
  wchar_t *local_38;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_38 = (wchar_t *)0x0;
  local_30[0] = 0;
  local_20[0] = 0;
  puVar3 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
  FUN_00414b50(local_20,*puVar3);
  lVar4 = param_1;
  if ((*(int *)(param_1 + 0xb48) == 10) &&
     (lVar4 = FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),local_30), local_30[0] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x128))(*(longlong **)(param_1 + 0x798),uVar1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_38);
  if (local_38 == L"<embedded>") {
    bVar7 = true;
  }
  else if (local_38 == (wchar_t *)0x0) {
    bVar7 = false;
  }
  else {
    iVar2 = FUN_0043e420(local_38,L"<embedded>");
    bVar7 = iVar2 == 0;
  }
  if ((bVar7) || (uVar5 = FUN_00441820(&local_40,local_20[0]), local_40 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x888) + 0x128))(*(longlong **)(param_1 + 0x888),uVar1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_48);
  if (local_48 == L"<embedded>") {
    uVar6 = 0x1127f;
    bVar7 = true;
  }
  else if (local_48 == (wchar_t *)0x0) {
    bVar7 = false;
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_0043e420(local_48,L"<embedded>");
    bVar7 = (int)uVar5 == 0;
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x870) + 0x128))
            (*(longlong **)(param_1 + 0x870),CONCAT71(uVar6,!bVar7) & 0xffffffff);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

