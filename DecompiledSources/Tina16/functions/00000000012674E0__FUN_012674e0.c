/* Ghidra address: 012674e0 */
/* Ghidra symbol: FUN_012674e0 */


void FUN_012674e0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                 undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 in_stack_fffffffffffffee8;
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
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte abStack_76 [46];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30 [2];
  
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18[0]);
  FUN_00414610(param_5);
  iVar4 = 1;
  pbVar8 = PTR_DAT_02004b98 + 1;
  do {
    abStack_76[*pbVar8] = (byte)iVar4;
    iVar4 = iVar4 + 1;
    pbVar8 = pbVar8 + 0x28;
  } while (iVar4 != 0x2e);
  iVar4 = 0x2d;
  pbVar8 = abStack_76;
  do {
    pbVar8 = pbVar8 + 1;
    FUN_00de88c0(&local_40,*pbVar8 + 0x24b,param_5);
    uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
    uVar9 = (ulonglong)*pbVar8;
    cVar1 = PTR_DAT_02004b98[uVar9 * 0x28 + -0x25];
    if ((byte)(cVar1 - 1U) == 0xff) {
      FUN_00b8fd60(&local_80,*(undefined8 *)(PTR_DAT_02001120 + uVar9 * 8 + 0xc0),6,0,1);
      FUN_004168e0(&local_48,local_80);
      FUN_00416310(&local_40,4,local_40,&DAT_01267cc8,local_48,&DAT_01267cd4);
      FUN_004168b0(&local_88,local_40);
      in_stack_fffffffffffffee8 = *(undefined8 *)(param_1 + 0x552 + (ulonglong)*pbVar8 * 8);
      FUN_01250840(local_30,local_res10,local_res18[0],param_4,local_88,
                   *(undefined8 *)(PTR_DAT_02004b98 + (ulonglong)*pbVar8 * 0x28 + -8),
                   in_stack_fffffffffffffee8,0);
    }
    else if ((byte)(cVar1 - 1U) < 2) {
      uVar7 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + uVar9 * 8 + 0xc0));
      FUN_0043f780(&local_90,uVar7);
      FUN_004168e0(&local_48,local_90);
      FUN_00416310(&local_40,4,local_40,&DAT_01267cc8,local_48,&DAT_01267cd4);
      FUN_004168b0(&local_98,local_40);
      bVar2 = *pbVar8;
      uVar5 = FUN_0040c770(*(undefined8 *)(param_1 + 0x552 + (ulonglong)bVar2 * 8));
      in_stack_fffffffffffffee8 = CONCAT44(uVar6,uVar5);
      FUN_012505f0(local_30,local_res10,local_res18[0],param_4,local_98,
                   *(undefined8 *)(PTR_DAT_02004b98 + (ulonglong)bVar2 * 0x28 + -8),
                   in_stack_fffffffffffffee8);
    }
    else if (cVar1 == '\x03') {
      FUN_00de88c0(&local_a0,0x5a8,param_5);
      FUN_00de88c0(&local_a8,0x5a9,param_5);
      FUN_00416310(&local_38,3,local_a0,&DAT_01267cdc,local_a8);
      uVar6 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + (ulonglong)*pbVar8 * 8 + 0xc0));
      FUN_01242410(&local_48,local_38,uVar6,0x7c);
      FUN_00416310(&local_40,4,local_40,&DAT_01267cc8,local_48,&DAT_01267cd4);
      uVar7 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + (ulonglong)*pbVar8 * 8 + 0xc0));
      FUN_0043f780(&local_b0,uVar7);
      FUN_004168e0(&local_48,local_b0);
      FUN_00de88c0(&local_b8,0x5a8,param_5);
      FUN_00de88c0(&local_c0,0x5a9,param_5);
      FUN_00416310(&local_38,4,local_b8,&DAT_01267ce4,local_c0,&DAT_01267cf0);
      FUN_004168b0(&local_c8,local_40);
      bVar2 = *pbVar8;
      FUN_004168b0(&local_d0,local_38);
      uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x552 + (ulonglong)bVar2 * 8));
      in_stack_fffffffffffffee8 = local_d0;
      FUN_01250bc0(local_30,local_res10,local_res18[0],param_4,local_c8,
                   *(undefined8 *)(PTR_DAT_02004b98 + (ulonglong)bVar2 * 0x28 + -8),local_d0,uVar3);
    }
    else if (cVar1 == '\x04') {
      FUN_00414be0(&local_40,L"Harmonic balance initial guess mode  (2)");
      FUN_00414be0(&local_38,L"0:1|1:2|2:3");
      FUN_004168b0(&local_d8,local_40);
      FUN_004168b0(&local_e0,local_38);
      uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x552 + uVar9 * 8));
      in_stack_fffffffffffffee8 = local_e0;
      FUN_01250bc0(local_30,local_res10,local_res18[0],param_4,local_d8,
                   *(undefined8 *)(PTR_DAT_02004b98 + uVar9 * 0x28 + -8),local_e0,uVar3);
    }
    if (param_4 == '\0') {
      FUN_0043f750(&local_e8,PTR_DAT_02004b98[(ulonglong)*pbVar8 * 0x28 + -0x28]);
      (**(code **)(*local_30[0] + 0x108))(local_30[0],L"main",local_e8);
      FUN_004168b0(&local_f0,local_48);
      (**(code **)(*local_30[0] + 0x108))(local_30[0],L"default",local_f0);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00414560(&local_f0,6);
  FUN_004145c0(&local_c0,2);
  FUN_00414480(&local_b0);
  FUN_004145c0(&local_a8,2);
  FUN_00414560(&local_98,4);
  FUN_004145c0(&local_48,3);
  FUN_0041b800(local_30);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  FUN_00414480(&param_5);
  return;
}

