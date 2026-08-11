/* Ghidra address: 00d3cd00 */
/* Ghidra symbol: FUN_00d3cd00 */


longlong FUN_00d3cd00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_b8 [12];
  int local_ac;
  undefined1 local_a8 [8];
  int local_a0;
  undefined1 local_88 [12];
  int local_7c;
  undefined1 local_68 [20];
  undefined4 local_54;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_38 [16];
  
  FUN_004238d0(param_2,0,0,0,0);
  iVar1 = FUN_00d3ce70(param_1);
  FUN_00d3cb70(param_1,local_68);
  FUN_00d3c920(param_1,local_38);
  uVar2 = FUN_004230c0(local_38);
  FUN_00d3cb70(param_1,local_88);
  FUN_00d3cb70(param_1,local_a8);
  iVar3 = thunk_FUN_03f3ed25(local_54,uVar2,local_7c - local_a0);
  FUN_00d3c920(param_1,&local_48);
  FUN_004238d0(param_2,local_48,local_44 + iVar3,local_40,local_44 + iVar3 + iVar1);
  FUN_00d3c920(param_1,local_b8);
  if (local_ac < *(int *)(param_2 + 0xc)) {
    FUN_00d3c920(param_1,local_b8);
    *(int *)(param_2 + 0xc) = local_ac;
    *(int *)(param_2 + 4) = local_ac - iVar1;
  }
  return param_2;
}

