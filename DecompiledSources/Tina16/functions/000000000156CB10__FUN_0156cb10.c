/* Ghidra address: 0156cb10 */
/* Ghidra symbol: FUN_0156cb10 */


void FUN_0156cb10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_res20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  int local_1c;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_2);
  FUN_00414630(local_res18);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_28 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),local_1c);
      local_30 = *(longlong *)(local_28 + 0x858);
      if (local_30 != 0) {
        local_40 = *(undefined8 *)(*(longlong *)(local_30 + 0x40) + 0x1a8);
        FUN_00414b50(&local_38,*(undefined8 *)(local_30 + 0x18));
        cVar1 = FUN_01d404e0(local_38,&local_20);
        if (cVar1 != '\0') {
          FUN_00416880(&local_58,local_res18);
          FUN_013a6040(local_58,local_40,local_20);
        }
      }
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_38);
  FUN_00414590(&local_res10,2);
  return;
}

