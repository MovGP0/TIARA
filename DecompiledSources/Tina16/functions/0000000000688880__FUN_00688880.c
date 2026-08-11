/* Ghidra address: 00688880 */
/* Ghidra symbol: FUN_00688880 */


void FUN_00688880(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_30;
  char local_19;
  
  local_30 = auStack_68;
  if (param_2 != *(char *)((longlong)param_1 + 0x4fc)) {
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      if (param_2 != '\0') {
        if (param_2 == '\x01') {
          local_19 = (*(uint *)((longlong)param_1 + 0xa4) & 0x4000) != 0;
          if (!(bool)local_19) {
            *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x4000;
          }
          puVar1 = auStack_68;
          if (*(int *)((longlong)param_1 + 0x9c) <
              *(int *)(&DAT_01df9c0c + (ulonglong)(param_1[0x94] == 0) * 4)) {
            FUN_0064cc50(param_1,*(undefined4 *)
                                  (&DAT_01df9c0c + (ulonglong)(param_1[0x94] == 0) * 4));
            puVar1 = local_30;
          }
          local_30 = puVar1;
          if ((int)param_1[0x13] < 0xaf) {
            FUN_0064cbf0(param_1,0xaf);
          }
          *(undefined1 *)((longlong)param_1 + 0x4fc) = 1;
          FUN_00655b90(param_1);
          if (local_19 != '\0') {
            return;
          }
          *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xffffbfff;
          return;
        }
        if (param_2 != '\x02') {
          return;
        }
      }
      local_30 = auStack_68;
      if (*(char *)((longlong)param_1 + 0x4fc) == '\x01') {
        local_48 = *(undefined4 *)((longlong)param_1 + 0x2fc);
        local_30 = auStack_68;
        (**(code **)(*param_1 + 400))
                  (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
                   (int)param_1[0x5f]);
      }
      *(char *)((longlong)param_1 + 0x4fc) = param_2;
      FUN_00655b90(param_1);
    }
    else {
      *(char *)((longlong)param_1 + 0x4fc) = param_2;
    }
  }
  return;
}

