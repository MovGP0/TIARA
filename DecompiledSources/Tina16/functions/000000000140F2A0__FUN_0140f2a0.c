/* Ghidra address: 0140f2a0 */
/* Ghidra symbol: FUN_0140f2a0 */


void FUN_0140f2a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined1 local_28 [4];
  int local_24;
  
  local_48 = 0;
  FUN_0140ebd0(param_1,&local_40,local_28);
  if (*(char *)(param_1 + 0x780) == '\0') {
    uVar3 = FUN_007fc180(&PTR_FUN_0140b648,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02001d98 = uVar3;
    *(undefined8 *)(*(longlong *)PTR_DAT_02001d98 + 0x708) = *(undefined8 *)(param_1 + 0x768);
    *(undefined4 *)(*(longlong *)PTR_DAT_02001d98 + 0x728) = 1;
    *(uint *)(*(longlong *)PTR_DAT_02001d98 + 0x72c) = (uint)*(ushort *)(param_1 + 0x78a);
    lVar1 = *(longlong *)PTR_DAT_02001d98;
    *(undefined8 *)(lVar1 + 0x710) = local_40;
    *(ulonglong *)(lVar1 + 0x718) = CONCAT44(uStack_34,local_38);
    *(undefined8 *)(lVar1 + 0x720) = uStack_30;
    *(undefined1 *)(*(longlong *)PTR_DAT_02001d98 + 0x734) = 0;
    iVar2 = (**(code **)(**(longlong **)PTR_DAT_02001d98 + 0x2d0))(*(longlong **)PTR_DAT_02001d98);
    if (iVar2 == 1) {
      lVar1 = *(longlong *)PTR_DAT_02001d98;
      *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(lVar1 + 0x710);
      *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(lVar1 + 0x718);
      *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(lVar1 + 0x720);
      *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x7bc);
      FUN_0140f520(param_1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0140e970(param_1,0);
    }
    if (local_24 < local_38) {
      FUN_01408750(&local_48,local_38,*(undefined2 *)(param_1 + 0x78a),1,0);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_48);
    }
    FUN_00410f20(*(undefined8 *)PTR_DAT_02001d98);
    *(undefined8 *)PTR_DAT_02001d98 = 0;
  }
  FUN_00414480(&local_48);
  return;
}

