/* Ghidra address: 01411ab0 */
/* Ghidra symbol: FUN_01411ab0 */


void FUN_01411ab0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  int local_30;
  
  local_58 = 0;
  FUN_014112e0(param_1,&local_50,local_38);
  if (*(char *)(param_1 + 0x7a8) == '\0') {
    uVar3 = FUN_007fc180(&PTR_FUN_0140b648,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02001d98 = uVar3;
    *(undefined8 *)(*(longlong *)PTR_DAT_02001d98 + 0x708) = *(undefined8 *)(param_1 + 0x790);
    *(undefined4 *)(*(longlong *)PTR_DAT_02001d98 + 0x728) = 1;
    *(undefined4 *)(*(longlong *)PTR_DAT_02001d98 + 0x72c) = *(undefined4 *)(param_1 + 0x7b4);
    *(undefined4 *)(*(longlong *)PTR_DAT_02001d98 + 0x730) = *(undefined4 *)(param_1 + 0x7c8);
    lVar1 = *(longlong *)PTR_DAT_02001d98;
    *(undefined8 *)(lVar1 + 0x710) = local_50;
    *(ulonglong *)(lVar1 + 0x718) = CONCAT44(uStack_44,local_48);
    *(undefined8 *)(lVar1 + 0x720) = uStack_40;
    *(undefined1 *)(*(longlong *)PTR_DAT_02001d98 + 0x734) = 1;
    iVar2 = (**(code **)(**(longlong **)PTR_DAT_02001d98 + 0x2d0))(*(longlong **)PTR_DAT_02001d98);
    if (iVar2 == 1) {
      lVar1 = *(longlong *)PTR_DAT_02001d98;
      *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(lVar1 + 0x710);
      *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(lVar1 + 0x718);
      *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(lVar1 + 0x720);
      *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x7f4);
      FUN_01411ca0(param_1,*(undefined8 *)PTR_DAT_02004030);
      FUN_01411d50(param_1,0);
    }
    if (local_30 < local_48) {
      FUN_01408750(&local_58,local_48,*(undefined4 *)(param_1 + 0x7b4),1,1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x770),local_58);
    }
    FUN_00410f20(*(undefined8 *)PTR_DAT_02001d98);
    *(undefined8 *)PTR_DAT_02001d98 = 0;
  }
  FUN_00414480(&local_58);
  return;
}

