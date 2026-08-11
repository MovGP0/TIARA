/* Ghidra address: 00666bb0 */
/* Ghidra symbol: FUN_00666bb0 */


void FUN_00666bb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  if (param_2 != 0) {
    lVar3 = FUN_0064fd00(param_2);
    if (lVar3 == param_1) {
      if (*(longlong *)(param_2 + 0xf0) == 0) goto LAB_00666d68;
      iVar1 = FUN_0044f900(&DAT_00666da8,*(undefined8 *)(param_2 + 0xf0));
      FUN_00648720(&local_30,*(undefined8 *)(param_2 + 0xf0));
      FUN_00414ad0(param_1 + 0x78,local_30);
      if (iVar1 == 0) {
        FUN_00414480(param_1 + 0x80);
      }
      else {
        FUN_00648780(&local_38,*(undefined8 *)(param_2 + 0xf0));
        FUN_00414ad0(param_1 + 0x80,local_38);
      }
      iVar1 = FUN_0044f900(&DAT_00666da8,*(undefined8 *)(param_1 + 0x80));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
      }
      else {
        FUN_00416dc0(&local_40,*(undefined8 *)(param_1 + 0x80),iVar1 + 1,0x7fffffff);
        uVar2 = FUN_0043fc00(local_40);
        *(undefined4 *)(param_1 + 0x90) = uVar2;
        FUN_00416dc0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x80),0,iVar1 + -1);
      }
      *(longlong *)(param_1 + 0xb0) = param_2;
      thunk_FUN_03cc0d62(local_20);
    }
    else {
      local_28 = *(int *)(param_2 + 0x98) / 2;
      local_24 = *(undefined4 *)(param_2 + 0x9c);
      local_20[0] = FUN_0064d1f0(param_2,&local_28);
    }
    FUN_00666e80(param_1,local_20);
  }
LAB_00666d68:
  FUN_00414560(&local_40,3);
  return;
}

