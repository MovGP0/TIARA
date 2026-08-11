/* Ghidra address: 01982360 */
/* Ghidra symbol: FUN_01982360 */


void FUN_01982360(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_2 == L"index") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"index",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_10);
  }
  if (param_2 == L"quantity") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"quantity",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_18,1,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_18);
  }
  if (param_2 == L"label") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"label",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_20,2,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_20);
  }
  if (param_2 == L"value") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"value",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_28,3,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_28);
  }
  if (param_2 == L"footprint") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"footprint",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_30,4,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_30);
  }
  if (param_2 == L"parameter1") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"parameter1",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_38,5,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_38);
  }
  if (param_2 == L"parameter2") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"parameter2",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_40,6,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_40);
  }
  if (param_2 == L"parameter3") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"parameter3",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_48,7,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_48);
  }
  if (param_2 == L"parameter4") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(L"parameter4",param_2);
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6c0),&local_50,8,*(undefined4 *)(param_1 + 0x6c8));
    FUN_00468a10(param_3,local_50);
  }
  FUN_00414560(&local_50,9);
  return;
}

