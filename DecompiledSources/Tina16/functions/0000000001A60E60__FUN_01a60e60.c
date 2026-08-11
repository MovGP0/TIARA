/* Ghidra address: 01a60e60 */
/* Ghidra symbol: FUN_01a60e60 */


int FUN_01a60e60(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined7 uVar4;
  bool bVar5;
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = FUN_01d31bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
  plVar3 = (longlong *)FUN_01a61c20(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0));
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 6U) != 0;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) && (*(char *)(param_1 + 0x98) == '\x01')) {
    (**(code **)(*plVar3 + 200))(plVar3,0,L"\\d(#Interpreter)");
  }
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar5 = false;
  }
  iVar2 = FUN_01d322a0(plVar3);
  local_34 = FUN_01d31f80(plVar3);
  if (bVar5) {
    local_34 = iVar2;
  }
  local_34 = iVar1 + 0x2b + local_34;
  FUN_00410f20(plVar3);
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    local_34 = local_34 + 1;
  }
  iVar1 = FUN_01d31350(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x90));
  local_34 = local_34 + iVar1 + 0x5c;
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_004168e0(local_30,*(undefined8 *)(param_1 + 0x78));
    iVar1 = FUN_01d31290(local_30[0]);
    local_34 = local_34 + iVar1;
  }
  FUN_00414520(local_30);
  return local_34;
}

