/* Ghidra address: 01476770 */
/* Ghidra symbol: FUN_01476770 */


void FUN_01476770(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_20;
  
  local_20 = 0;
  *(undefined1 *)(param_1 + 0x738) = *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8);
  *(undefined1 *)(param_1 + 0x739) = *(undefined1 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
  *(undefined1 *)(param_1 + 0x73a) = *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8);
  *(undefined1 *)(param_1 + 0x73b) = *(undefined1 *)(*(longlong *)(param_1 + 0x6e8) + 0x4a8);
  uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6f0));
  *(undefined4 *)(param_1 + 0x73c) = uVar3;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  *PTR_DAT_02004aa8 = uVar2;
  iVar4 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6f0));
  if (0xc < iVar4) {
    FUN_010c2250(&local_20,0x200);
    FUN_01476960(param_1,local_20);
  }
  if (*(char *)(param_1 + 0x768) == '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x628) = *(undefined8 *)(param_1 + 0x738);
  }
  uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
  *(undefined8 *)(param_1 + 0x740) = uVar5;
  uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
  *(undefined4 *)(param_1 + 0x748) = uVar3;
  if (*(char *)(param_1 + 0x768) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x760);
    *(undefined8 *)(lVar1 + 0x630) = *(undefined8 *)(param_1 + 0x740);
    *(undefined8 *)(lVar1 + 0x638) = *(undefined8 *)(param_1 + 0x748);
    *(undefined8 *)(lVar1 + 0x640) = *(undefined8 *)(param_1 + 0x750);
    *(undefined8 *)(lVar1 + 0x648) = *(undefined8 *)(param_1 + 0x758);
  }
  FUN_00414480(&local_20);
  return;
}

