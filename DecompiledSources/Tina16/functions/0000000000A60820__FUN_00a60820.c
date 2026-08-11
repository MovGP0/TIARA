/* Ghidra address: 00a60820 */
/* Ghidra symbol: FUN_00a60820 */


undefined1 FUN_00a60820(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  double dVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_128 [39];
  char local_101;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 *local_90;
  undefined8 *local_88;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  double local_68;
  int local_5c;
  undefined1 local_56;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined8 local_40 [2];
  undefined1 local_30 [15];
  undefined1 local_21;
  uint *local_20;
  
  local_a0 = auStack_128;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417600(local_40,&DAT_00401390,3);
  local_50 = FUN_004170c0(&DAT_00a60de4,local_res10[0],1);
  local_54 = FUN_004170c0(&DAT_00a60df4,local_res10[0],1);
  if ((local_50 < 1) || (local_54 < 1)) {
    local_21 = 0;
  }
  else {
    FUN_00416dc0(local_res10,local_res10[0],1,local_54 + -1);
    FUN_00416dc0(&local_b0,local_res10[0],local_50 + 1,0xff);
    FUN_0043ea00(&local_a8,local_b0);
    FUN_00414b50(local_res10,local_a8);
    cVar2 = '\x02';
    local_88 = local_40;
    do {
      local_50 = FUN_004170c0(&DAT_00a60e04,local_res10[0],1);
      FUN_00416dc0(&local_c0,local_res10[0],1,local_50 + -1);
      FUN_0043ea00(&local_b8,local_c0);
      FUN_00414ad0(local_88,local_b8);
      FUN_00416dc0(&local_d0,local_res10[0],local_50 + 1,0xff);
      FUN_0043ea00(&local_c8,local_d0);
      FUN_00414b50(local_res10,local_c8);
      local_88 = local_88 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    local_50 = FUN_004170c0(&DAT_00a60e04,local_res10[0],1);
    if (local_50 < 1) {
      FUN_00414b50(local_30,local_res10[0]);
      **(undefined1 **)(param_1 + 0xb8) = 0xff;
    }
    else {
      FUN_00416dc0(&local_e0,local_res10[0],1,local_50 + -1);
      FUN_0043ea00(&local_d8,local_e0);
      FUN_00414b50(local_30,local_d8);
      FUN_00416dc0(&local_f0,local_res10[0],local_50 + 1,0xff);
      FUN_0043ea00(&local_e8,local_f0);
      FUN_00414b50(local_res10,local_e8);
      local_68 = (double)FUN_00410100(local_res10[0],&local_5c);
      if (local_5c == 0) {
        local_56 = FUN_0040c840(local_68 * 255.0);
      }
      else {
        local_56 = 0xff;
      }
      **(undefined1 **)(param_1 + 0xb8) = local_56;
    }
    local_101 = '\x03';
    local_90 = local_40;
    local_20 = &local_4c;
    do {
      local_50 = FUN_004170c0(&LAB_00a60e14,*local_90,1);
      if (local_50 < 1) {
        FUN_009ec440(&local_100,*local_90);
        uVar1 = FUN_0043fc50(local_100,0);
        *local_20 = uVar1;
      }
      else {
        FUN_00416e20(local_90,local_50,1);
        FUN_009ec440(&local_f8,*local_90);
        local_70 = local_f8;
        dVar3 = (double)FUN_00448650(local_f8,PTR_DAT_02004830);
        uVar1 = FUN_0040c770(dVar3 * 2.55);
        *local_20 = uVar1;
      }
      local_74 = *local_20;
      local_78 = local_74;
      if (0xff < (int)local_74) {
        local_78 = 0xff;
      }
      if ((int)local_78 < 0) {
        local_7c = 0;
      }
      else {
        local_7c = local_78;
      }
      *local_20 = local_7c;
      local_20 = local_20 + 1;
      local_90 = local_90 + 1;
      local_101 = local_101 + -1;
    } while (local_101 != '\0');
    **(uint **)(param_1 + 0xb0) = local_44 << 0x10 | local_48 << 8 | local_4c;
    local_21 = 1;
    local_101 = 0;
  }
  FUN_00414560(&local_100,0xc);
  FUN_00417840(local_40,&DAT_00401390,3);
  FUN_00414480(local_res10);
  return local_21;
}

