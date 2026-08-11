/* Ghidra address: 00fcaff0 */
/* Ghidra symbol: FUN_00fcaff0 */


void FUN_00fcaff0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_128;
  undefined1 local_120 [256];
  undefined8 local_20;
  
  local_128 = 0;
  local_20 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0xc78) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  *(undefined4 *)(param_1 + 0xc7c) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(undefined4 *)(param_1 + 0xc80) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  *(undefined4 *)(param_1 + 0xc9c) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738));
  *(undefined4 *)(param_1 + 0xc98) = uVar1;
  *(undefined8 *)(param_1 + 0xc88) = *(undefined8 *)(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0xc90) = *(undefined8 *)(param_1 + 0x828);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(int *)(param_1 + 0xca0) = iVar2 * 0x40 + 0x10;
  *(int *)(param_1 + 0xca4) = *(int *)(param_1 + 0x818) << 7;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738));
  if (iVar2 != 2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (iVar2 != 2) {
      iVar2 = 0;
      goto LAB_00fcb13d;
    }
  }
  iVar2 = 1;
LAB_00fcb13d:
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738));
  *(int *)(param_1 + 0xcac) =
       iVar2 * 0x10 + (iVar3 / 2) * 8 + (iVar4 / 2) * 4 + *(int *)(param_1 + 0x81c) * 2;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                    (*(longlong **)(param_1 + 0x738),(longlong)iVar4 % 2 & 0xffffffff);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  *(int *)(param_1 + 0xca8) = (iVar2 % 2) * 0x20 + (iVar3 % 2) * 0x10;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),&local_20);
  FUN_00416910(local_120,local_20,0xff);
  FUN_00415020(param_1 + 0xcc5,local_120,0x14);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x750),&local_128);
  FUN_00416910(local_120,local_128,0xff);
  FUN_00415020(param_1 + 0xcb0,local_120,0x14);
  FUN_00414480(&local_128);
  FUN_00414480(&local_20);
  return;
}

