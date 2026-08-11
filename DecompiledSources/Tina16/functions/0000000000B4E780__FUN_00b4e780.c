/* Ghidra address: 00b4e780 */
/* Ghidra symbol: FUN_00b4e780 */


void FUN_00b4e780(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  lVar1 = *(longlong *)(param_1[2] + 8);
  iVar6 = *(int *)(*(longlong *)(param_1[3] + 8) + 0x38);
  cVar2 = FUN_00b538a0(*(undefined8 *)(lVar1 + 0x20),(short)param_1[9]);
  iVar11 = iVar6;
  if (cVar2 != '\0') {
    lVar7 = FUN_00b53830(*(undefined8 *)(lVar1 + 0x20),(short)param_1[9]);
    iVar11 = *(int *)(lVar7 + 0x20);
  }
  cVar2 = FUN_00b52d50(*(undefined8 *)(lVar1 + 0x18),*(undefined2 *)((longlong)param_1 + 0x4a));
  iVar4 = iVar6;
  if (cVar2 != '\0') {
    lVar7 = FUN_00b52ce0(*(undefined8 *)(lVar1 + 0x18),*(undefined2 *)((longlong)param_1 + 0x4a));
    iVar4 = *(int *)(lVar7 + 0x20);
  }
  if (iVar11 == iVar6) {
    *(int *)(param_1 + 4) = iVar4;
  }
  else if (iVar4 == iVar6) {
    *(int *)(param_1 + 4) = iVar11;
  }
  else {
    *(undefined1 *)(param_1[2] + 0x20) = 1;
    uVar8 = FUN_00b53830(*(undefined8 *)(lVar1 + 0x20),(short)param_1[9]);
    uVar9 = FUN_00b52ce0(*(undefined8 *)(lVar1 + 0x18),*(undefined2 *)((longlong)param_1 + 0x4a));
    cVar2 = FUN_00b4d7d0(uVar8,0);
    if (cVar2 == ':') {
      uVar5 = FUN_00b4d7d0(uVar9,0);
      (**(code **)(*param_1 + 0x60))(param_1,0,uVar5);
    }
    else {
      uVar5 = FUN_00b4d7d0(uVar8,0);
      (**(code **)(*param_1 + 0x60))(param_1,0,uVar5);
    }
    cVar2 = FUN_00b4d7d0(uVar8,1);
    if (cVar2 == ':') {
      uVar5 = FUN_00b4d7d0(uVar9,1);
      (**(code **)(*param_1 + 0x60))(param_1,1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d7d0(uVar8,1);
      (**(code **)(*param_1 + 0x60))(param_1,1,uVar5);
    }
    cVar2 = FUN_00b4d7d0(uVar8,2);
    if (cVar2 == ':') {
      uVar5 = FUN_00b4d7d0(uVar9,2);
      (**(code **)(*param_1 + 0x60))(param_1,2,uVar5);
    }
    else {
      uVar5 = FUN_00b4d7d0(uVar8,2);
      (**(code **)(*param_1 + 0x60))(param_1,2,uVar5);
    }
    cVar2 = FUN_00b4d7d0(uVar8,3);
    if (cVar2 == ':') {
      uVar5 = FUN_00b4d7d0(uVar9,3);
      (**(code **)(*param_1 + 0x60))(param_1,3,uVar5);
    }
    else {
      uVar5 = FUN_00b4d7d0(uVar8,3);
      (**(code **)(*param_1 + 0x60))(param_1,3,uVar5);
    }
    cVar2 = FUN_00b4d930(uVar8,0);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d930(uVar9,0);
      (**(code **)(*param_1 + 0x70))(param_1,0,uVar5);
    }
    else {
      uVar5 = FUN_00b4d930(uVar8,0);
      (**(code **)(*param_1 + 0x70))(param_1,0,uVar5);
    }
    cVar2 = FUN_00b4d930(uVar8,1);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d930(uVar9,1);
      (**(code **)(*param_1 + 0x70))(param_1,1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d930(uVar8,1);
      (**(code **)(*param_1 + 0x70))(param_1,1,uVar5);
    }
    cVar2 = FUN_00b4d930(uVar8,2);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d930(uVar9,2);
      (**(code **)(*param_1 + 0x70))(param_1,2,uVar5);
    }
    else {
      uVar5 = FUN_00b4d930(uVar8,2);
      (**(code **)(*param_1 + 0x70))(param_1,2,uVar5);
    }
    cVar2 = FUN_00b4d930(uVar8,3);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d930(uVar9,3);
      (**(code **)(*param_1 + 0x70))(param_1,3,uVar5);
    }
    else {
      uVar5 = FUN_00b4d930(uVar8,3);
      (**(code **)(*param_1 + 0x70))(param_1,3,uVar5);
    }
    cVar2 = FUN_00b4d5f0(uVar8);
    if (cVar2 == ':') {
      uVar5 = FUN_00b4d5f0(uVar9);
      (**(code **)*param_1)(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d5f0(uVar8);
      (**(code **)*param_1)(param_1,uVar5);
    }
    cVar2 = FUN_00b4d620(uVar8);
    if (cVar2 == '9') {
      uVar5 = FUN_00b4d620(uVar9);
      (**(code **)(*param_1 + 8))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d620(uVar8);
      (**(code **)(*param_1 + 8))(param_1,uVar5);
    }
    cVar2 = FUN_00b4d650(uVar8);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d650(uVar9);
      (**(code **)(*param_1 + 0x20))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d650(uVar8);
      (**(code **)(*param_1 + 0x20))(param_1,uVar5);
    }
    iVar6 = FUN_00b4d170(uVar8);
    if (iVar6 == 0) {
      uVar5 = FUN_00b4d170(uVar9);
      (**(code **)(*param_1 + 0x78))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d170(uVar8);
      (**(code **)(*param_1 + 0x78))(param_1,uVar5);
    }
    cVar2 = FUN_00b4d680(uVar8);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d680(uVar9);
      (**(code **)(*param_1 + 0x28))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d680(uVar8);
      (**(code **)(*param_1 + 0x28))(param_1,uVar5);
    }
    cVar2 = FUN_00b4d6b0(uVar8);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d6b0(uVar9);
      (**(code **)(*param_1 + 0x30))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d6b0(uVar8);
      (**(code **)(*param_1 + 0x30))(param_1,uVar5);
    }
    uVar10 = FUN_00b4d740(uVar8);
    if (((char)uVar10 == '\0') && (uVar10 = FUN_00b4d740(uVar9), (char)uVar10 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    (**(code **)(*param_1 + 0x40))(param_1,uVar5);
    cVar2 = FUN_00b4d770(uVar8);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d770(uVar9);
      (**(code **)(*param_1 + 0x48))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d770(uVar8);
      (**(code **)(*param_1 + 0x48))(param_1,uVar5);
    }
    cVar2 = FUN_00b4d7a0(uVar8);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4d7a0(uVar9);
      (**(code **)(*param_1 + 0x50))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4d7a0(uVar8);
      (**(code **)(*param_1 + 0x50))(param_1,uVar5);
    }
    uVar10 = FUN_00b4df10(uVar8);
    if (((char)uVar10 == '\0') && (uVar10 = FUN_00b4df10(uVar9), (char)uVar10 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    (**(code **)(*param_1 + 0x80))(param_1,uVar5);
    uVar10 = FUN_00b4df40(uVar8);
    if (((char)uVar10 == '\0') && (uVar10 = FUN_00b4df40(uVar9), (char)uVar10 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    (**(code **)(*param_1 + 0x88))(param_1,uVar5);
    uVar10 = FUN_00b4df70(uVar8);
    if (((char)uVar10 == '\0') && (uVar10 = FUN_00b4df70(uVar9), (char)uVar10 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    (**(code **)(*param_1 + 0x90))(param_1,uVar5);
    uVar10 = FUN_00b4dfa0(uVar8);
    if (((char)uVar10 == '\0') && (uVar10 = FUN_00b4dfa0(uVar9), (char)uVar10 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    (**(code **)(*param_1 + 0x98))(param_1,uVar5);
    cVar2 = FUN_00b4dfd0(uVar8);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4dfd0(uVar9);
      (**(code **)(*param_1 + 0xa0))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4dfd0(uVar8);
      (**(code **)(*param_1 + 0xa0))(param_1,uVar5);
    }
    cVar2 = FUN_00b4e000(uVar8);
    if (cVar2 == '\0') {
      uVar5 = FUN_00b4e000(uVar9);
      (**(code **)(*param_1 + 0xa8))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4e000(uVar8);
      (**(code **)(*param_1 + 0xa8))(param_1,uVar5);
    }
    FUN_00b4e0c0(uVar8,local_30);
    iVar6 = FUN_00416420(local_30[0],L"Arial");
    if (iVar6 == 0) {
      FUN_00b4e0c0(uVar9,&local_40);
      (**(code **)(*param_1 + 0xb0))(param_1,local_40);
    }
    else {
      FUN_00b4e0c0(uVar8,&local_38);
      (**(code **)(*param_1 + 0xb0))(param_1,local_38);
    }
    cVar2 = FUN_00b4e030(uVar8);
    if (cVar2 == '9') {
      uVar5 = FUN_00b4e030(uVar9);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4e030(uVar8);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar5);
    }
    sVar3 = FUN_00b4e090(uVar8);
    if (sVar3 == 10) {
      uVar5 = FUN_00b4e090(uVar9);
      (**(code **)(*param_1 + 200))(param_1,uVar5);
    }
    else {
      uVar5 = FUN_00b4e090(uVar8);
      (**(code **)(*param_1 + 200))(param_1,uVar5);
    }
    *(undefined1 *)(param_1[2] + 0x20) = 0;
  }
  FUN_004145c0(&local_40,3);
  return;
}

