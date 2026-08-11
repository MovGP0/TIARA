/* Ghidra address: 00654e40 */
/* Ghidra symbol: FUN_00654e40 */


void FUN_00654e40(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0040d200(param_2,0x278,0);
  *param_2 = param_1[0x58];
  *(undefined4 *)(param_2 + 1) = 0x44000000;
  FUN_00654db0(param_1,(longlong)param_2 + 0xc);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x2000000;
    *(uint *)((longlong)param_2 + 0xc) = *(uint *)((longlong)param_2 + 0xc) | 0x10000;
  }
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') {
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x8000000;
    }
  }
  if (*(char *)((longlong)param_1 + 900) != '\0') {
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x10000;
  }
  *(int *)(param_2 + 2) = (int)param_1[0x12];
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x94);
  *(int *)(param_2 + 3) = (int)param_1[0x13];
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x9c);
  if (param_1[0xf] == 0) {
    param_2[4] = param_1[0x6b];
  }
  else {
    lVar2 = FUN_0065b870(param_1[0xf]);
    param_2[4] = lVar2;
  }
  *(undefined4 *)(param_2 + 6) = 0xb;
  lVar2 = thunk_FUN_03978312(0,0x7f00);
  param_2[0xb] = lVar2;
  param_2[0xc] = 0;
  param_2[9] = (longlong)PTR_IMAGE_DOS_HEADER_0200c280;
  if (DAT_02012360 == 0) {
    DAT_02012360 = thunk_FUN_04163be6(L"User32.dll");
  }
  lVar2 = FUN_00427c10(DAT_02012360,L"DefWindowProcW");
  param_2[7] = lVar2;
  FUN_00410ae0(*param_1,&local_10);
  FUN_00442620(param_2 + 0xf,local_10);
  FUN_00414480(&local_10);
  return;
}

