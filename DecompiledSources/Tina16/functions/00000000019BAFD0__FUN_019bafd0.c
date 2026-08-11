/* Ghidra address: 019bafd0 */
/* Ghidra symbol: FUN_019bafd0 */


void FUN_019bafd0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined *local_50;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_30 = 0;
  local_58 = (&PTR_u_BLACK__01fc1920)[*(byte *)(param_1 + 0x499)];
  local_50 = (&PTR_DAT_01fc1930)[*(byte *)(param_1 + 0x49a)];
  FUN_00416cd0(&local_30,4,L"WINXCTRLS_",(&PTR_u_MOMENTUMDOTS__01fc1950)[*(byte *)(param_1 + 0x49b)]
              );
  local_28 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_00a3b840(local_28,PTR_IMAGE_DOS_HEADER_0200c280,local_30);
  uVar1 = (**(code **)(*local_28 + 0x48))(local_28);
  *(undefined4 *)(param_1 + 0x4bc) = uVar1;
  iVar2 = (**(code **)(*local_28 + 0x60))(local_28);
  *(int *)(param_1 + 0x4b8) = iVar2 / *(int *)(param_1 + 0x4bc);
  (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0xe0))
            (*(longlong **)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4bc),
             *(undefined4 *)(param_1 + 0x4bc));
  FUN_007d55b0(*(undefined8 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4bc));
  FUN_007d5610(*(undefined8 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4bc));
  (**(code **)(*local_20 + 0x10))(local_20,local_28);
  FUN_007d6450(*(undefined8 *)(param_1 + 0x4b0));
  FUN_007d59d0(*(undefined8 *)(param_1 + 0x4b0),local_20,0);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  *(undefined1 *)(param_1 + 0x4c8) = 1;
  FUN_00414480(&local_30);
  return;
}

