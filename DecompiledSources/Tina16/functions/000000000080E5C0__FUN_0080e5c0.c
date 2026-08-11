/* Ghidra address: 0080e5c0 */
/* Ghidra symbol: FUN_0080e5c0 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0080e5c0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined8 *local_70;
  int local_68;
  int local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_34 [8];
  int local_2c;
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  uVar2 = param_3[2];
  uStack_40 = param_3[3];
  local_60 = &local_48;
  local_48._0_2_ = (short)uVar2;
  local_68 = (int)(short)local_48;
  local_48._2_2_ = (short)((ulonglong)uVar2 >> 0x10);
  local_64 = (int)local_48._2_2_;
  local_48 = uVar2;
  local_80 = FUN_0064d1f0(param_2,&local_68);
  uVar2 = FUN_0064acf0(&local_80,1);
  lVar3 = FUN_00809680(uVar2);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0xfd) == '\0')) {
    FUN_0080e820(param_1);
  }
  else {
    if (lVar3 == *(longlong *)(param_1 + 0xd8)) {
      local_70 = &local_48;
      local_78 = (int)(short)local_48;
      local_74 = (int)local_48._2_2_;
      local_80 = FUN_0064d1f0(param_2,&local_78);
      cVar1 = FUN_00423210(param_1 + 0xe0,&local_80);
      bVar4 = cVar1 == '\0';
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xd0);
      if (cVar1 == '\0') {
        local_2c = *(int *)(param_1 + 0xf4);
      }
      else {
        local_2c = *(int *)(param_1 + 0xfc);
      }
      FUN_0064fca0(lVar3,0xb041,(longlong)cVar1,&local_2c);
      if ((cVar1 == '\0') || (local_2c != 0)) {
        FUN_0080e820(param_1);
        *(char *)(param_1 + 0xd0) = cVar1;
        *(longlong *)(param_1 + 0xd8) = lVar3;
        FUN_0080e4f0(param_1,local_2c,0);
      }
      else {
        *(char *)(param_1 + 0xd0) = cVar1;
        *(longlong *)(param_1 + 0xd8) = lVar3;
        thunk_FUN_03cc0d62(local_34);
        FUN_0080ec80(param_1,local_34);
      }
    }
  }
  return;
}

