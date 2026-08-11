/* Ghidra address: 0122d240 */
/* Ghidra symbol: FUN_0122d240 */


void FUN_0122d240(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  *(undefined4 *)PTR_DAT_02004700 = 0x2224;
  FUN_01229220(param_1);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x870),0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x878),0);
  FUN_00414ad0(*(longlong *)(param_1 + 0x728) + 0xe0,
               L"Filter param file(*.DTB)|*.DTB|All files (*.*)|*.*");
  lVar1 = *(longlong *)(param_1 + 0x728);
  *(undefined4 *)(lVar1 + 0xe8) = 1;
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_02004ff0,L".DTB");
  FUN_00724380(lVar1,local_20[0]);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0xa8))(*(longlong **)(param_1 + 0x728));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x728),&local_28);
    FUN_00414ad0(&DAT_02107710,local_28);
    FUN_00724270(*(undefined8 *)(param_1 + 0x728),&local_38);
    FUN_00441920(&local_30,local_38);
    FUN_00414ad0(PTR_DAT_02004ff0,local_30);
    iVar3 = FUN_004170c0(&DAT_0122d520,*(undefined8 *)PTR_DAT_02004ff0,1);
    if (iVar3 != 0) {
      FUN_00416dc0(PTR_DAT_02004ff0,*(undefined8 *)PTR_DAT_02004ff0,1,iVar3 + -1);
    }
    FUN_01182570(PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0,DAT_02107710);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c0),1);
    FUN_0122b3a0(param_1,DAT_021076a8);
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Load/Save filter parameters");
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

