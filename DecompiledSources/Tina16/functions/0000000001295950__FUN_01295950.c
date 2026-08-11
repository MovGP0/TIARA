/* Ghidra address: 01295950 */
/* Ghidra symbol: FUN_01295950 */


/* WARNING: Removing unreachable block (ram,0x01295d9b) */

void FUN_01295950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,longlong param_7,undefined8 param_8,
                 undefined8 param_9,longlong param_10)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong in_stack_ffffffffffffff00;
  ulonglong uVar4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
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
  ulonglong local_18;
  undefined8 local_10;
  
  local_b0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00414610(param_8);
  FUN_00414610(param_9);
  FUN_0113f440(param_3,param_4,0,param_5,param_7,param_10 + 0x3d5);
  FUN_00de8b50(&local_38,L"THarmonicDistorsionDlg",L"Label1",param_9,L"Caption");
  FUN_004168b0(&local_40,local_38);
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  FUN_01250840(local_30,param_1,param_2,param_6,local_40,&DAT_012962f0,
               *(undefined8 *)(param_10 + 0x3d6),in_stack_ffffffffffffff00);
  FUN_00de8b50(&local_50,L"THarmonicDistorsionDlg",L"Label2",param_9,L"Caption");
  FUN_004168b0(&local_58,local_50);
  FUN_01250840(&local_48,param_1,param_2,param_6,local_58,&DAT_0129631c,
               *(undefined8 *)(param_10 + 0x3de),in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  FUN_00414b50(&local_10,L"128|256|512|1024|2048|4096|8192|16384|32768|65536");
  FUN_00de8b50(&local_68,L"THarmonicDistorsionDlg",L"Label3",param_9,L"Caption");
  FUN_004168b0(&local_70,local_68);
  FUN_012422b0(&local_78,local_10,*(byte *)(param_10 + 0x3d5) - 7,0x7c);
  FUN_01250a90(&local_60,param_1,param_2,param_6,local_70,&DAT_012963b8,local_10,local_78);
  FUN_017c7f50(&local_10);
  if (param_7 == 0) {
    iVar1 = FUN_004170c0(&DAT_012963c8,param_8,1);
    if (iVar1 < 1) {
      FUN_00414b50(&local_18,param_8);
    }
    else {
      FUN_00416dc0(&local_18,param_8,1,iVar1 + -1);
    }
    iVar1 = FUN_004413f0(&DAT_012963d8,local_18);
    uVar3 = 0;
    if (local_18 != 0) {
      uVar3 = *(undefined4 *)(local_18 - 4);
    }
    FUN_00416dc0(&local_18,local_18,iVar1 + 1,uVar3);
  }
  else {
    lVar2 = FUN_019ac5b0(param_7,*(undefined8 *)(param_10 + 0x81b));
    if (lVar2 == 0) {
      FUN_00414b50(&local_18,*(undefined8 *)(param_10 + 0x81b));
    }
    else {
      FUN_017ff4f0(lVar2,&local_18);
    }
  }
  if (param_7 == 0) {
    FUN_00de8b50(&local_a0,L"THarmonicDistorsionDlg",L"Label9",param_9,L"Caption");
    FUN_004168b0(&local_a8,local_a0);
    FUN_01250a90(&local_98,param_1,param_2,param_6,local_a8,L"outp",param_8,local_18);
  }
  else {
    FUN_00de8b50(&local_88,L"THarmonicDistorsionDlg",L"Label9",param_9,L"Caption");
    FUN_004168b0(&local_90,local_88);
    uVar4 = local_18;
    FUN_012511b0(&local_80,param_1,param_2,param_6,local_90,&DAT_01296404,local_10,local_18);
    FUN_00de8fd0(&local_20,L"THarmonicDistorsionDlg",L"rgTRControls",L"Items",param_9,&DAT_012963c8,
                 1,uVar4 & 0xffffffff00000000);
    FUN_0041ddd0(&local_c0,&PTR_PTR_01241f90);
    FUN_00de8a20(&local_b8,L"TSCXMLConverter",L"sStartCondition",param_9,local_c0);
    FUN_004168b0(&local_c8,local_b8);
    FUN_004168b0(&local_d0,local_20);
    FUN_01250bc0(&local_b0,param_1,param_2,param_6,local_c8,L"icond",local_d0,
                 (ulonglong)(*(byte *)(param_10 + 0x82b) + 2) % 3);
  }
  FUN_00414560(&local_d0,3);
  FUN_00414520(&local_b8);
  FUN_0041b800(&local_b0);
  FUN_00414480(&local_a8);
  FUN_00414520(&local_a0);
  FUN_0041b800(&local_98);
  FUN_00414480(&local_90);
  FUN_00414520(&local_88);
  FUN_0041b800(&local_80);
  FUN_00414560(&local_78,2);
  FUN_00414520(&local_68);
  FUN_0041b800(&local_60);
  FUN_00414480(&local_58);
  FUN_00414520(&local_50);
  FUN_0041b800(&local_48);
  FUN_00414480(&local_40);
  FUN_00414520(&local_38);
  FUN_0041b800(local_30);
  FUN_00414520(&local_20);
  FUN_00414560(&local_18,2);
  FUN_00414560(&param_8,2);
  return;
}

