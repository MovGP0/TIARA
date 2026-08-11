/* Ghidra address: 00d25930 */
/* Ghidra symbol: FUN_00d25930 */


void FUN_00d25930(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint *puVar2;
  int local_res18 [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  FUN_0040d200(&local_38,0x10,0);
  FUN_00409a70(param_2,&local_38,(longlong)local_res18[0]);
  puVar2 = (uint *)param_1[0xd];
  iVar1 = 0x13;
  do {
    local_34 = local_34 ^ *(uint *)(&DAT_01ebde10 + (ulonglong)(local_38 & 0x3ff) * 4);
    local_30 = local_30 ^ *(uint *)(&DAT_01ebde10 + (ulonglong)(local_34 & 0x3ff) * 4);
    local_34 = local_34 >> 10 | local_34 << 0x16;
    local_2c = local_2c ^ *(uint *)(&DAT_01ebde10 + (ulonglong)(local_30 & 0x3ff) * 4);
    local_30 = local_30 >> 10 | local_30 << 0x16;
    local_38 = (local_38 >> 10 | local_38 << 0x16) ^
               *(uint *)(&DAT_01ebde10 + (ulonglong)(local_2c & 0x3ff) * 4);
    local_2c = local_2c >> 10 | local_2c << 0x16;
    if (iVar1 < 0x11) {
      *puVar2 = local_38;
      puVar2[1] = local_34;
      puVar2[2] = local_30;
      puVar2[3] = local_2c;
      puVar2 = puVar2 + 4;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0040d200(&local_38,0x10,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

