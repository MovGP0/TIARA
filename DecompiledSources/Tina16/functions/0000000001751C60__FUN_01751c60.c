/* Ghidra address: 01751c60 */
/* Ghidra symbol: FUN_01751c60 */


void FUN_01751c60(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                 undefined1 param_5,undefined1 param_6,char param_7)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_60;
  longlong local_50;
  longlong local_48;
  short *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = (short *)0x0;
  local_48 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_50 = param_1;
  uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(uVar4,6);
  dVar7 = (double)FUN_0040c850(*(undefined8 *)(local_50 + 0x40));
  if (dVar7 < 1e-15) {
    *(undefined8 *)(local_50 + 0x40) = 0;
  }
  if (*(char *)(*(longlong *)(local_50 + 0x28) + 0x3b9) == '\0') {
    dVar7 = (double)FUN_0040c850(*(undefined8 *)(local_50 + 0x40));
    if (dVar7 < 1e+15) {
      uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
      local_68 = &local_48;
      local_60 = 1;
      FUN_00b8fcd0(&local_40,*(undefined8 *)(local_50 + 0x40),param_6,0);
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
      goto LAB_01751d71;
    }
  }
  FUN_00414b50(&local_40,&DAT_01751f18);
  FUN_00414480(&local_48);
LAB_01751d71:
  if (param_7 != '\0') {
    FUN_007d5cb0(DAT_0210ffd0,param_5,uVar4);
    FUN_01751c20(auStack_88,local_38 & 0xffffffff,uVar4);
  }
  if (local_48 != 0) {
    uVar3 = FUN_00b8f740(local_48);
    FUN_007d5cb0(DAT_0210ffc8,uVar3,uVar4);
    FUN_01751c20(auStack_88,local_38._4_4_,uVar4);
  }
  if (*local_40 == 0x2d) {
    FUN_00416e20(&local_40,1,1);
    FUN_007d5cb0(DAT_0210ffc0,10,uVar4);
    FUN_01751c20(auStack_88,uStack_30._4_4_,uVar4);
  }
  iVar5 = 0;
  if (local_40 != (short *)0x0) {
    iVar5 = *(int *)(local_40 + -2);
  }
  iVar6 = local_38._4_4_;
  if (0 < iVar5) {
    do {
      uVar2 = local_40[(longlong)iVar5 + -1];
      if (uVar2 == 0x2e) {
        FUN_01751c20(auStack_88,iVar6 + -3,DAT_0210ffb0);
        iVar6 = iVar6 + -3;
      }
      else if (uVar2 == 0x2d) {
        FUN_007d5cb0(DAT_0210ffc0,10,uVar4);
        FUN_01751c20(auStack_88,iVar6 + -6,uVar4);
        iVar6 = iVar6 + -6;
      }
      else {
        FUN_007d5cb0(DAT_0210ffc0,uVar2 - 0x30,uVar4);
        FUN_01751c20(auStack_88,iVar6 + -6,uVar4);
        iVar6 = iVar6 + -6;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(uVar4);
  FUN_00414560(&local_48,2);
  return;
}

