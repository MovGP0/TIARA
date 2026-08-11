/* Ghidra address: 0141d620 */
/* Ghidra symbol: FUN_0141d620 */


void FUN_0141d620(longlong param_1)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x90))(*(longlong **)(param_1 + 0x6d0));
  iVar1 = 1;
  do {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_28,1,iVar1);
    FUN_0043ea00(local_20,local_28);
    if (local_20[0] != 0) {
      FUN_0043f750(&local_38,iVar1 + -1);
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_48,1,iVar1);
      FUN_0043ea00(&local_40,local_48);
      FUN_00416cd0(&local_30,3,local_38,&DAT_0141d778,local_40);
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x78))
                (*(longlong **)(param_1 + 0x6d0),local_30);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  *(undefined4 *)(param_1 + 0x508) = 1;
  FUN_00414560(&local_48,6);
  return;
}

