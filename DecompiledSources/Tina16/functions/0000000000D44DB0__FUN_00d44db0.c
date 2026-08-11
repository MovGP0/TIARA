/* Ghidra address: 00d44db0 */
/* Ghidra symbol: FUN_00d44db0 */


void FUN_00d44db0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  wchar_t *local_30;
  undefined1 local_28 [24];
  
  local_30 = (wchar_t *)0x0;
  FUN_00d3d190(param_1,param_2);
  FUN_00787c20(*(undefined8 *)(param_1 + 0x18),&local_30);
  if (local_30 == L"ComboLBox") {
    bVar6 = true;
  }
  else if (local_30 == (wchar_t *)0x0) {
    bVar6 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_30,L"ComboLBox");
    bVar6 = iVar1 == 0;
  }
  if (bVar6) {
    uVar4 = FUN_00787cc0(*(undefined8 *)(param_1 + 0x18));
    uVar5 = FUN_00787d50(uVar4);
    if ((uVar5 & 1) != 1) {
      uVar2 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
      uVar3 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
      FUN_004238d0(local_28,0,0,uVar2,uVar3);
      uVar4 = FUN_00781840();
      uVar2 = FUN_007793c0(uVar4,0xff000010);
      FUN_00d36dc0(param_2,local_28,uVar2,uVar2,1);
    }
  }
  FUN_00414480(&local_30);
  return;
}

