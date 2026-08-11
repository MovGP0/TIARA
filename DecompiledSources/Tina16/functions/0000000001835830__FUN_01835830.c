/* Ghidra address: 01835830 */
/* Ghidra symbol: FUN_01835830 */


void FUN_01835830(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_0181e5f0(param_2,&local_10,&DAT_01835a08);
  if ((local_10 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x78) == 0)) {
    uVar2 = FUN_0181e580(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x48),L"parser");
    uVar2 = FUN_0181e580(uVar2,L"errors");
    uVar2 = FUN_0181e580(uVar2,local_10);
    FUN_0181e5f0(uVar2,local_20,L"text");
    FUN_00414b50(*(longlong *)(param_1 + 0x160) + 0x78,local_20[0]);
    FUN_01820ee0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30),
                 *(undefined4 *)(param_1 + 0x10c));
    FUN_018210c0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30));
    FUN_01822540(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30),
                 &local_28);
    FUN_00414b50(*(longlong *)(param_1 + 0x160) + 0x70,local_28);
    FUN_0181e5f0(param_2,&local_30,L"term");
    iVar1 = FUN_00416db0(local_30,&LAB_01835a84);
    *(bool *)(*(longlong *)(param_1 + 0x160) + 0x67) = iVar1 == 0;
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_10);
  return;
}

