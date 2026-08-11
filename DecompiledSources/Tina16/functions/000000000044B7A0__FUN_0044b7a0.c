/* Ghidra address: 0044b7a0 */
/* Ghidra symbol: FUN_0044b7a0 */


longlong FUN_0044b7a0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  iVar3 = thunk_FUN_040522a9(param_2,1);
  local_84 = param_2;
  if (iVar3 == 0) {
    local_84 = thunk_FUN_04195d02();
  }
  FUN_00419430(param_1 + 0x170,&DAT_004377c0);
  FUN_0044c520(local_84,param_1);
  FUN_0044c0e0(local_84,param_1);
  FUN_0044c1f0(local_84,param_1);
  FUN_0044b710(local_30,local_84,0x14,0);
  FUN_00414ad0(param_1,local_30[0]);
  FUN_0044b710(&local_38,local_84,0x1b,&DAT_0044bc60);
  uVar1 = FUN_0043fc50(local_38,0);
  *(undefined1 *)(param_1 + 8) = uVar1;
  FUN_0044b710(&local_40,local_84,0x1c,&DAT_0044bc60);
  uVar1 = FUN_0043fc50(local_40,0);
  *(undefined1 *)(param_1 + 0x17e) = uVar1;
  uVar2 = FUN_0044b770(local_84,0xf,0x2c);
  *(undefined2 *)(param_1 + 0x178) = uVar2;
  uVar2 = FUN_0044b770(local_84,0xe,0x2e);
  *(undefined2 *)(param_1 + 0x17a) = uVar2;
  FUN_0044b710(&local_48,local_84,0x19,&DAT_0044bc60);
  uVar1 = FUN_0043fc50(local_48,0);
  *(undefined1 *)(param_1 + 9) = uVar1;
  uVar2 = FUN_0044b770(local_84,0x1d,0x2f);
  *(undefined2 *)(param_1 + 10) = uVar2;
  FUN_0044ca60(&local_50,local_84,0x1f,L"m/d/yy",uVar2);
  FUN_00414ad0(param_1 + 0x10,local_50);
  FUN_0044ca60(&local_58,local_84,0x20,L"mmmm d, yyyy",*(undefined2 *)(param_1 + 10));
  FUN_00414ad0(param_1 + 0x18,local_58);
  uVar2 = FUN_0044b770(local_84,0x1e,0x3a);
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  FUN_0044b710(&local_60,local_84,0x28,&PTR_DAT_0044bcb4);
  FUN_00414ad0(param_1 + 0x20,local_60);
  FUN_0044b710(&local_68,local_84,0x29,&PTR_DAT_0044bcc8);
  FUN_00414ad0(param_1 + 0x28,local_68);
  FUN_00414480(&local_18);
  FUN_00414480(&local_20);
  FUN_0044b710(&local_70,local_84,0x25,&DAT_0044bc60);
  iVar3 = FUN_0043fc50(local_70,0);
  if (iVar3 == 0) {
    FUN_00414b50(&local_10,&DAT_0044bcdc);
  }
  else {
    FUN_00414b50(&local_10,&DAT_0044bcec);
  }
  FUN_0044b710(&local_78,local_84,0x23,&DAT_0044bc60);
  iVar3 = FUN_0043fc50(local_78,0);
  if (iVar3 == 0) {
    FUN_0044b710(&local_80,local_84,0x1005,&DAT_0044bc60);
    iVar3 = FUN_0043fc50(local_80,0);
    if (iVar3 == 0) {
      FUN_00414b50(&local_20,L" AMPM");
    }
    else {
      FUN_00414b50(&local_18,L"AMPM ");
    }
  }
  FUN_00416cd0(param_1 + 0x30,4,local_18,local_10,&DAT_0044bd30,local_20);
  FUN_00416cd0(param_1 + 0x38,4,local_18,local_10,L":mm:ss",local_20);
  uVar2 = FUN_0044b770(local_84,0xc,0x2c);
  *(undefined2 *)(param_1 + 0xe) = uVar2;
  *(undefined2 *)(param_1 + 0x17c) = 0x32;
  FUN_00414560(&local_80,0xb);
  FUN_00414560(&local_20,3);
  return param_1;
}

