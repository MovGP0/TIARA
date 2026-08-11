/* Ghidra address: 00949540 */
/* Ghidra symbol: FUN_00949540 */


void FUN_00949540(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 *param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_b8;
  local_48 = 0;
  *param_5 = 0;
  local_28 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4);
  if (local_28 == 0) {
    FUN_00414520(param_5);
    *param_6 = 0x9a;
    goto LAB_0094983d;
  }
  local_98 = *param_4;
  local_90 = 0x1000;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 1;
  local_20 = (longlong *)FUN_00960500(&PTR_FUN_00915170,1,local_28,*param_3);
  if (*(char *)((longlong)local_20 + 0x121) == '\0') {
    if (*(byte *)(local_20 + 0x24) < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)local_20 >> 8),1) <<
               (*(byte *)(local_20 + 0x24) & 0x1f) & 0xeU) != 0;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) goto LAB_009496fa;
    cVar1 = FUN_00948910(local_20[0x27]);
    if (cVar1 == '\0') {
      FUN_00414520(param_5);
      *param_6 = 0x9d;
    }
    else {
      *param_6 = 0;
      local_30 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
      (**(code **)(*local_20 + 0x28))(local_20);
      while( true ) {
        cVar1 = FUN_008f4b70(local_20);
        if (cVar1 != '\0') break;
        (**(code **)(*local_30 + 0x10))(local_30,(int)local_20[5]);
        (**(code **)(*local_20 + 0x28))(local_20);
      }
      (**(code **)(*local_30 + 0x48))(local_30,&local_48);
      FUN_00414b90(param_5,local_48);
      FUN_00410f20(local_30);
    }
  }
  else {
LAB_009496fa:
    FUN_00414520(param_5);
    *param_6 = 0x4b;
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
LAB_0094983d:
  FUN_00414520(&local_48);
  return;
}

