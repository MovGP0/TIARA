/* Ghidra address: 0141ab10 */
/* Ghidra symbol: FUN_0141ab10 */


void FUN_0141ab10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(undefined1 *)(param_1 + 0x6e5) = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(char *)(param_1 + 0x6e2) == '\0') {
    if (*(short *)(param_1 + 0x6e0) == 0) {
      FUN_016cc2a0(local_res10[0],local_20);
    }
    else {
      FUN_004b50b0(local_20,local_res10[0]);
    }
  }
  else {
    FUN_0141a6c0(param_1,local_res10[0],local_20);
  }
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  if (iVar1 == 0) {
    FUN_00848990(*(longlong *)(param_1 + 0x6b0),
                 *(uint *)(*(longlong *)(param_1 + 0x6b0) + 0x4d4) & 0xfffffbff);
  }
  uVar2 = (**(code **)(*local_20 + 0x28))(local_20);
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6b0),uVar2);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_004b3cf0(local_20,&local_38,local_24);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,local_24,local_38);
      FUN_004b5390(local_20,&local_40,local_24);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),1,local_24,local_40);
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res10);
  return;
}

