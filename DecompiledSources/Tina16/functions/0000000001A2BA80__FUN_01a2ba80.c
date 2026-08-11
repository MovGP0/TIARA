/* Ghidra address: 01a2ba80 */
/* Ghidra symbol: FUN_01a2ba80 */


void FUN_01a2ba80(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x728) == 0) {
    FUN_0147bce0(L"Please use Load Circuit from JSON at first.",0,0,0xc);
  }
  else {
    FUN_0147fa40(*(undefined8 *)(param_1 + 0x728),&local_38,&local_40,0);
    FUN_0147d130(local_40,&local_48);
    uVar1 = FUN_0147cfb0(local_48,L"circuit");
    FUN_0147cfb0(uVar1,L"components");
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_50);
    uVar2 = FUN_00448650(local_50,PTR_DAT_02004830);
    uVar1 = FUN_004113f0(uVar1,&LAB_00f23b78);
    FUN_01480530(uVar1,uVar2);
    FUN_00416ba0(local_30,*(undefined8 *)PTR_DAT_02005010,
                 L"\\VhdlSession0\\Temp\\scaled_circuit.json");
    FUN_0147d210(local_30[0],local_48);
    uVar1 = FUN_019a4600();
    FUN_01a2abe0(param_1,local_30[0],uVar1,0);
    FUN_01a2a8d0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x10));
    FUN_01a2a900(param_1,0);
    *(undefined1 *)(param_1 + 0x708) = 3;
  }
  FUN_00414480(&local_50);
  FUN_00414560(&local_40,3);
  return;
}

