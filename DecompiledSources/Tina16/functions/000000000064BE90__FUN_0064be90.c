/* Ghidra address: 0064be90 */
/* Ghidra symbol: FUN_0064be90 */


void FUN_0064be90(longlong *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 local_68 [24];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  FUN_00411a80(param_1,param_2);
  FUN_0080a8a0(*(undefined8 *)PTR_DAT_02004030,param_1);
  if (param_1[0x21] == 0) {
    (**(code **)(*param_1 + 0x130))(param_1,0);
  }
  else {
    FUN_004d2d90(param_1[0x21],param_1);
    FUN_0064fca0(param_1[0x21],0xb039,0,param_1);
    (**(code **)(*param_1 + 0x130))(param_1,0);
    FUN_0064d000(param_1,local_68);
    pcVar2 = (code *)FUN_00411550(param_1,0xffca);
    (*pcVar2)(param_1,0xffffffff,local_68);
    param_1[0x21] = 0;
  }
  local_30 = param_1 + 0x18;
  lVar1 = *local_30;
  *local_30 = 0;
  FUN_00410f20(lVar1);
  local_38 = param_1 + 0x1a;
  lVar1 = *local_38;
  *local_38 = 0;
  FUN_00410f20(lVar1);
  local_40 = param_1 + 0x17;
  lVar1 = *local_40;
  *local_40 = 0;
  FUN_00410f20(lVar1);
  FUN_00442c30(param_1[0x58]);
  local_48 = param_1 + 0x1b;
  lVar1 = *local_48;
  *local_48 = 0;
  FUN_00410f20(lVar1);
  param_1[0x56] = 0;
  local_50 = param_1 + 0x26;
  lVar1 = *local_50;
  *local_50 = 0;
  FUN_00410f20(lVar1);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

