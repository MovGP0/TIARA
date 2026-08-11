/* Ghidra address: 005fc3e0 */
/* Ghidra symbol: FUN_005fc3e0 */


longlong * FUN_005fc3e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_180;
  undefined1 local_178 [260];
  undefined4 local_74 [3];
  undefined4 local_68;
  int local_64;
  char local_60;
  char local_5f;
  char local_5e;
  undefined1 local_5d;
  byte local_59;
  undefined1 local_58 [64];
  
  local_180 = 0;
  plVar3 = &DAT_01decc00;
  plVar4 = param_1;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  if (param_2 != 0) {
    iVar1 = thunk_FUN_03d2c01a(param_2,0x5c,local_74);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 1) = local_74[0];
      if (699 < local_64) {
        *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 1;
      }
      if (local_60 == '\x01') {
        *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 2;
      }
      if (local_5f == '\x01') {
        *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 4;
      }
      if (local_5e == '\x01') {
        *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 8;
      }
      *(undefined1 *)((longlong)param_1 + 0x12) = local_5d;
      FUN_00416830(&local_180,local_58,0x20);
      FUN_0041d990(local_178,local_180);
      FUN_00415020((longlong)param_1 + 0x13,local_178,0x7c);
      if ((local_59 & 0xf) == 1) {
        *(undefined1 *)(param_1 + 2) = 2;
      }
      else if ((local_59 & 0xf) == 2) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      *param_1 = param_2;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_68;
    }
  }
  FUN_00414480(&local_180);
  return param_1;
}

