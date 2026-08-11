/* Ghidra address: 006a0160 */
/* Ghidra symbol: FUN_006a0160 */


undefined1 FUN_006a0160(longlong param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 *local_40;
  longlong *local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_19;
  
  local_40 = auStack_78;
  local_19 = 1;
  if ((((*(char *)(param_1 + 0x6c1) == '\0') && (*(char *)(param_1 + 0x6c0) != '\0')) &&
      (iVar2 = FUN_00659110(param_1), iVar2 != 0)) &&
     ((*param_2 != *(int *)(param_1 + 0x98) || (*param_3 != *(int *)(param_1 + 0x9c))))) {
    local_20 = *param_2;
    local_24 = *param_3;
    cVar1 = *(char *)(param_1 + 0x6c0);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        local_24 = local_24 + *(int *)(param_1 + 0x6b8);
      }
      else {
        if (cVar1 != '\x02') {
          return 0;
        }
        local_20 = local_20 + *(int *)(param_1 + 0x6bc);
      }
      *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_1 + 0x9c);
      local_38 = (longlong *)FUN_00659130(param_1,0);
      local_28 = *(int *)(param_1 + 0x98) - (int)local_38[0x13];
      local_2c = *(int *)(param_1 + 0x9c) - *(int *)((longlong)local_38 + 0x9c);
      *(undefined1 *)(param_1 + 0x6c1) = 1;
      local_58 = local_24 - local_2c;
      (**(code **)(*local_38 + 400))
                (local_38,(int)local_38[0x12],*(undefined4 *)((longlong)local_38 + 0x94),
                 local_20 - local_28);
      *(undefined1 *)(param_1 + 0x6c1) = 0;
      *param_2 = (int)local_38[0x13] + local_28;
      *param_3 = *(int *)((longlong)local_38 + 0x9c) + local_2c;
      if ((*(int *)(param_1 + 0x98) == *param_2) && (*(int *)(param_1 + 0x9c) == *param_3)) {
        local_19 = 0;
      }
      else {
        local_19 = 1;
      }
    }
  }
  return local_19;
}

