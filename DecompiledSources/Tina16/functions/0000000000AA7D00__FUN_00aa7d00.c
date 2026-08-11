/* Ghidra address: 00aa7d00 */
/* Ghidra symbol: FUN_00aa7d00 */


void FUN_00aa7d00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_88;
  local_50 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1c = FUN_004170c0(L";base64,",local_res10[0],1);
  if (10 < local_1c) {
    FUN_009ec440(&local_48,local_res10[0]);
    local_68 = 1;
    FUN_00450070(&local_40,local_48,&DAT_00aa7f3c,&DAT_00aa7f50);
    FUN_009ec420(&local_38,local_40);
    FUN_00414b50(local_res10,local_38);
    FUN_009ec440(&local_58,local_res10[0]);
    FUN_00416dc0(&local_50,local_58,local_1c + 8,0x7fffffff);
    local_18 = FUN_004ba3c0(&PTR_FUN_0047d288,1,local_50);
    local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    uVar1 = FUN_009e34c0();
    FUN_009e2e50(uVar1,local_18,local_10);
    uVar1 = FUN_00a448a0(local_10,**(undefined1 **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    FUN_00410f20(local_10);
    FUN_00410f20(local_18);
  }
  FUN_00414560(&local_58,5);
  FUN_00414480(local_res10);
  return;
}

