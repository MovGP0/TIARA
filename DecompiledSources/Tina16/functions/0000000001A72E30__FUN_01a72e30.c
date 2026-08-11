/* Ghidra address: 01a72e30 */
/* Ghidra symbol: FUN_01a72e30 */


void FUN_01a72e30(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_007fd7d0(param_1);
  FUN_00f069f0(L"WinLeft",uVar2);
  uVar2 = FUN_007fd800(param_1);
  FUN_00f069f0(L"WinTop",uVar2);
  FUN_00f069f0(L"WinWidth",*(undefined4 *)(param_1 + 0x98));
  FUN_00f069f0(L"WinHeight",*(undefined4 *)(param_1 + 0x9c));
  FUN_0065f800(*(undefined8 *)(param_1 + 0xfd8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xfd8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7a0));
  *(undefined8 *)(param_1 + 0x798) = 0;
  plVar3 = (longlong *)FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x7c0) + 0x318));
  cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
  if (cVar1 == '\0') {
    uVar4 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x7c0) + 0x318));
    FUN_00410f20(uVar4);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02003f68);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1038));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1080));
  if (*(longlong *)PTR_DAT_020059d8 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_020059d8);
  }
  *(undefined8 *)PTR_DAT_020059d8 = 0;
  if (*(longlong *)PTR_DAT_02001dd8 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02001dd8);
  }
  *(undefined8 *)PTR_DAT_02001dd8 = 0;
  if (*(longlong *)PTR_DAT_020037b0 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_020037b0);
  }
  *(undefined8 *)PTR_DAT_020037b0 = 0;
  if (*(longlong *)PTR_DAT_02005188 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02005188);
  }
  *(undefined8 *)PTR_DAT_02005188 = 0;
  if (*(longlong *)PTR_DAT_02004fb8 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02004fb8);
  }
  *(undefined8 *)PTR_DAT_02004fb8 = 0;
  if (*(longlong *)PTR_DAT_020038e8 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_020038e8);
  }
  *(undefined8 *)PTR_DAT_020038e8 = 0;
  if (*(longlong *)PTR_DAT_02003118 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02003118);
  }
  *(undefined8 *)PTR_DAT_02003118 = 0;
  return;
}

