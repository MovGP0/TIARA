/* Ghidra address: 01879be0 */
/* Ghidra symbol: FUN_01879be0 */


undefined8 FUN_01879be0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20 [4];
  
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_0046f180(param_2);
  cVar1 = FUN_0046c3d0(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = *(char *)(param_1 + 8);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        FUN_00461840(&local_68,param_1 + 0x68);
        FUN_00468530(&local_80,*(undefined4 *)(param_1 + 0x48),0xfffffffffffffffc);
        FUN_0046f300(&local_68,&local_80);
        FUN_00461840(param_2,&local_68);
        goto LAB_01879df1;
      }
      if (1 < (byte)(cVar1 - 2U)) {
        if (cVar1 == '\x04') {
          FUN_00468530(param_2,*(undefined4 *)(param_1 + 0x48),0xfffffffffffffffc);
        }
        goto LAB_01879df1;
      }
    }
    FUN_00461840(param_2,param_1 + 0x68);
    goto LAB_01879df1;
  }
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_20[0] = *(undefined4 *)(param_1 + 0x100);
      FUN_0046cb70(&local_38,param_1 + 0x30,1,local_20);
      local_20[0] = *(undefined4 *)(param_1 + 0x100);
      FUN_0046cb70(&local_50,param_1 + 0x50,1,local_20);
      FUN_0046f300(&local_38,&local_50);
      FUN_00461840(param_2,&local_38);
      goto LAB_01879df1;
    }
    if (1 < (byte)(cVar1 - 2U)) {
      if (cVar1 == '\x04') {
        local_20[0] = *(undefined4 *)(param_1 + 0x100);
        FUN_0046cb70(param_2,param_1 + 0x50,1,local_20);
      }
      goto LAB_01879df1;
    }
  }
  local_20[0] = *(undefined4 *)(param_1 + 0x100);
  FUN_0046cb70(param_2,param_1 + 0x30,1,local_20);
LAB_01879df1:
  cVar1 = FUN_0046c3d0(param_2);
  if (cVar1 != '\0') {
    FUN_00468530(param_2,0,1);
  }
  FUN_00417840(&local_80,&DAT_004013d8,4);
  return param_2;
}

