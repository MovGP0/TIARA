/* Ghidra address: 007ffc60 */
/* Ghidra symbol: FUN_007ffc60 */


void FUN_007ffc60(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 *local_30;
  char local_1a;
  char local_19;
  
  local_30 = auStack_78;
  if (*(char *)((longlong)param_1 + 0x4d6) != param_2) {
    if (((param_2 == '\0') && (*(char *)((longlong)param_1 + 0x4d6) == '\x03')) ||
       ((param_2 == '\x03' && (*(char *)((longlong)param_1 + 0x4d6) == '\0')))) {
      *(char *)((longlong)param_1 + 0x4d6) = param_2;
      if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
        local_30 = auStack_78;
        cVar2 = FUN_0065be20(param_1);
        if (cVar2 != '\0') {
          uVar4 = FUN_0065b870(param_1);
          local_58 = 0;
          local_50 = 0;
          local_48 = 0x213;
          thunk_FUN_041cc6e2(uVar4,*(undefined8 *)
                                    (&DAT_01e14a78 +
                                    (ulonglong)(*(char *)((longlong)param_1 + 0x4d6) == '\x03') * 8)
                             ,0,0);
        }
      }
    }
    else {
      puVar1 = auStack_78;
      if ((param_2 == '\x01') && (puVar1 = auStack_78, *(char *)((longlong)param_1 + 0x4d7) == '\0')
         ) {
        FUN_00800470(param_1,1);
        puVar1 = local_30;
      }
      local_30 = puVar1;
      local_19 = (*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0;
      if ((bool)local_19) {
        FUN_0065ed10(param_1,1);
      }
      if (local_19 != '\0') {
        (**(code **)(*param_1 + 0x1e8))(param_1);
      }
      local_1a = *(char *)((longlong)param_1 + 0x4d6);
      *(char *)((longlong)param_1 + 0x4d6) = param_2;
      if (((param_2 == '\x02') || (local_1a == '\x02')) && ((char)param_1[0x72] == '\0')) {
        uVar3 = FUN_00800610(param_1);
        FUN_0064e030(param_1,uVar3);
      }
      if (local_19 != '\0') {
        FUN_00655e40(param_1);
      }
      if (param_2 == '\x01') {
        FUN_007fdf50(param_1,1);
      }
      if (local_19 != '\0') {
        FUN_0065ed10(param_1,0);
      }
    }
  }
  return;
}

