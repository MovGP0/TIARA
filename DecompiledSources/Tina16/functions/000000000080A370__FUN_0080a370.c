/* Ghidra address: 0080a370 */
/* Ghidra symbol: FUN_0080a370 */


void FUN_0080a370(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *local_58;
  longlong local_50;
  undefined8 *local_40;
  code *local_38;
  longlong local_30;
  code *local_28;
  longlong local_20;
  
  FUN_00411a80(param_1,param_2);
  FUN_0080f700(param_1);
  puVar2 = PTR_PTR_02003690;
  local_28 = FUN_0080d240;
  if (*(code **)PTR_PTR_02003690 == FUN_0080d240) {
    *(undefined8 *)PTR_PTR_02003690 = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
  }
  puVar2 = PTR_PTR_020042b8;
  local_38 = FUN_0080d620;
  if (*(code **)PTR_PTR_020042b8 == FUN_0080d620) {
    *(undefined8 *)PTR_PTR_020042b8 = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
  }
  local_30 = param_1;
  local_20 = param_1;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    thunk_FUN_041c8c2f(*(longlong *)(param_1 + 0x150));
  }
  *(undefined1 *)(param_1 + 0x149) = 0;
  FUN_0080e820(param_1);
  FUN_0080dd10(param_1,0);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_007f9910(*(longlong *)(param_1 + 0x2e0));
  }
  local_58 = FUN_0080b170;
  local_50 = param_1;
  FUN_0080cd50(param_1,&local_58);
  if ((*(longlong *)(param_1 + 0x2d0) != 0) && (*(char *)(param_1 + 0x158) != '\0')) {
    if (*PTR_DAT_02003210 != '\0') {
      thunk_FUN_041b2403(*(longlong *)(param_1 + 0x2d0),0x80,1,0);
    }
    if ((5 < *(int *)PTR_DAT_02001bd8) ||
       ((*(int *)PTR_DAT_02001bd8 == 5 && (0 < *(int *)PTR_DAT_02003a08)))) {
      WTSUnRegisterSessionNotification(*(undefined8 *)(param_1 + 0x2d0));
    }
    if ((6 < *(int *)PTR_DAT_02001bd8) ||
       ((*(int *)PTR_DAT_02001bd8 == 6 && (-1 < *(int *)PTR_DAT_02003a08)))) {
      BufferedPaintUnInit();
    }
    thunk_FUN_04129ca2(*(undefined8 *)(param_1 + 0x2d0));
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_0041b800(param_1 + 0xb8);
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_007f98d0(*(longlong *)(param_1 + 0x2d8));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x160));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x120));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x130));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x140));
  local_40 = (undefined8 *)(param_1 + 0xa0);
  uVar1 = *local_40;
  *local_40 = 0;
  FUN_00410f20(uVar1);
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    thunk_FUN_04155d0f();
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

