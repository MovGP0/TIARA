/* Ghidra address: 01b64fa0 */
/* Ghidra symbol: FUN_01b64fa0 */


void FUN_01b64fa0(longlong *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_258 [32];
  undefined *local_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208 [256];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [88];
  undefined1 *local_a0;
  undefined1 local_8a [41];
  undefined1 local_61 [56];
  char local_29;
  longlong *local_28;
  
  local_a0 = auStack_258;
  local_220 = 0;
  local_210 = 0;
  local_218 = 0;
  local_100 = 0;
  local_108 = 0;
  puVar1 = auStack_258;
  if ((*(char *)((longlong)param_1 + 0x7ed) != '\0') &&
     (local_28 = (longlong *)param_1[0x1b4], puVar1 = auStack_258,
     *(char *)((longlong)local_28 + 0x5b) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x9c3) = 1;
    (**(code **)(*local_28 + 0xd8))(local_28,param_1 + 0x110,(char)param_1[0x1af],&local_29);
    uVar2 = FUN_010e1b10(param_1);
    FUN_01138fd0(uVar2);
    local_238 = (undefined *)CONCAT71(local_238._1_7_,*PTR_DAT_02005310);
    FUN_010c1330(local_f8,local_28[0x14],*(undefined1 *)(param_1[0x1b5] + 0x2c),local_61);
    FUN_004169a0(&local_108,local_61);
    local_238 = (undefined *)local_108;
    FUN_00416cd0(&local_100,3,*(undefined8 *)(param_1[0x1b5] + 8),&DAT_01b65370);
    FUN_00416910(local_208,local_100,0xff);
    FUN_00415020(local_61,local_208,0x28);
    local_238 = (undefined *)CONCAT71(local_238._1_7_,*PTR_DAT_02005310);
    FUN_010c1330(local_f8,local_28[0x15],*(undefined1 *)(param_1[0x10e] + 0x2c),local_8a);
    FUN_004169a0(&local_218,local_8a);
    local_238 = &DAT_01b65370;
    local_230 = local_218;
    FUN_00416cd0(&local_210,4,&LAB_01b65384,*(undefined8 *)(param_1[0x10e] + 8));
    FUN_00416910(local_208,local_210,0xff);
    FUN_00415020(local_8a,local_208,0x28);
    FUN_00414ff0(local_f8,local_61);
    FUN_00415110(local_f8,local_8a,0x50);
    FUN_004169a0(&local_220,local_f8);
    FUN_010e4140(param_1,local_220,0);
    *(undefined1 *)((longlong)param_1 + 0x9c3) = 0;
    *(undefined1 *)(param_1 + 0x1af) = 0;
    if (local_29 == '\0') {
      FUN_0082a6c0(param_1[0xf8],1);
      (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      puVar1 = local_a0;
    }
    else {
      FUN_01b65490(param_1,1);
      puVar1 = local_a0;
    }
  }
  local_a0 = puVar1;
  FUN_00414560(&local_220,3);
  FUN_00414560(&local_108,2);
  return;
}

