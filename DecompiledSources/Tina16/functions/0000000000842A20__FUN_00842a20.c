/* Ghidra address: 00842a20 */
/* Ghidra symbol: FUN_00842a20 */


void FUN_00842a20(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  int local_88;
  int local_50;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    FUN_00841d10(param_1,local_98);
    iVar1 = *param_2;
    if ((((local_88 < iVar1) || (local_50 < param_2[1])) || (iVar1 < (int)param_1[0x9d])) ||
       (param_2[1] < *(int *)((longlong)param_1 + 0x4ec))) {
      local_a8 = param_1[0x9d];
      local_a0 = FUN_00842050(param_1,param_2,local_98);
      (**(code **)(*param_1 + 0x198))(param_1);
      if (iVar1 < (int)param_1[0x9d]) {
        *(int *)(param_1 + 0x9d) = iVar1;
      }
      else if (local_88 < iVar1) {
        *(undefined4 *)(param_1 + 0x9d) = (undefined4)local_a0;
      }
      iVar1 = param_2[1];
      if (iVar1 < *(int *)((longlong)param_1 + 0x4ec)) {
        *(int *)((longlong)param_1 + 0x4ec) = iVar1;
      }
      else if (local_50 < iVar1) {
        *(undefined4 *)((longlong)param_1 + 0x4ec) = local_a0._4_4_;
      }
      FUN_00845220(param_1,&local_a8);
    }
  }
  return;
}

