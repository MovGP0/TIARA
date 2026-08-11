/* Ghidra address: 00b5d9a0 */
/* Ghidra symbol: FUN_00b5d9a0 */


void FUN_00b5d9a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  char *local_30;
  undefined4 local_24;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_40[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_30 = (char *)0x0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1e);
  FUN_00b25710(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_24);
  lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar2 + 0x10),local_1a,local_1c);
  FUN_00b19380(*(undefined8 *)(param_1 + 0x80),&local_30,local_24);
  if (*local_30 == '\0') {
    iVar1 = 0;
    if (local_30 != (char *)0x0) {
      iVar1 = *(int *)(local_30 + -4);
    }
    FUN_00415ad0(local_40,local_30,2,iVar1 + -1);
    FUN_00468910(&local_58,local_40[0]);
    FUN_00b4f030(uVar3,&local_58);
  }
  else {
    FUN_00b15190(&local_60,local_30);
    FUN_004689d0(&local_78,local_60);
    FUN_00b4f030(uVar3,&local_78);
  }
  FUN_00b5d680(param_1,uVar3,local_1e);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00460ba0(&local_78);
  FUN_00414520(&local_60);
  FUN_00460ba0(&local_58);
  FUN_004144d0(local_40);
  FUN_004144d0(&local_30);
  return;
}

