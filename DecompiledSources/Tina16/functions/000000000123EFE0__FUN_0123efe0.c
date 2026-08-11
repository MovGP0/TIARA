/* Ghidra address: 0123efe0 */
/* Ghidra symbol: FUN_0123efe0 */


void FUN_0123efe0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00410e60(&DAT_0123a0f8,1);
  FUN_00414ad0(lVar2 + 8,param_2[0x13]);
  uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(uint *)(lVar2 + 0x18) = (uint)uVar1;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x60),lVar2);
  *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)(lVar2 + 0x20) = (int)param_2[2];
  *(undefined1 *)(lVar2 + 0x24) = *(undefined1 *)((longlong)param_2 + 0xd1);
  return;
}

