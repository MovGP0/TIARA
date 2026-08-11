/* Ghidra address: 00695d30 */
/* Ghidra symbol: FUN_00695d30 */


void FUN_00695d30(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_c;
  
  local_30 = auStack_68;
  local_48 = *(undefined8 *)(param_2 + 4);
  uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x80),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),*param_2,
                             *(undefined8 *)(param_2 + 2));
  *(undefined8 *)(param_2 + 6) = uVar1;
  if (((*(ulonglong *)(param_2 + 4) & 2) == 2) && (*(longlong *)(param_2 + 2) != 0)) {
    local_c = 0;
    local_18 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    local_c = thunk_FUN_03b57162(*(undefined8 *)(param_2 + 2));
    FUN_005ffb10(local_18,*(undefined8 *)(param_2 + 2));
    thunk_FUN_03e49910(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),&local_28);
    FUN_00423b50(&local_28,-local_28,-local_24);
    uVar1 = FUN_005ffa40(local_18);
    local_48 = CONCAT44(local_48._4_4_,local_1c + -2);
    thunk_FUN_041a27b3(uVar1,local_28 + 2,local_24 + 2,local_20 + -2);
    FUN_00693f50(*(undefined8 *)(param_1 + 0x70),local_18,&local_28);
    if (local_c != 0) {
      uVar1 = FUN_005ffa40(local_18);
      thunk_FUN_0402759f(uVar1,local_c);
    }
    FUN_005ffb10(local_18,0);
    FUN_00410f20(local_18);
    FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_2 + 2));
  }
  *(undefined1 *)(param_1 + 0x4f) = 1;
  return;
}

