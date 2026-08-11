/* Ghidra address: 006de460 */
/* Ghidra symbol: FUN_006de460 */


void FUN_006de460(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined8 local_7d;
  int local_75;
  char local_71;
  byte local_70;
  undefined4 local_6f;
  undefined4 local_6b;
  undefined4 local_67;
  undefined4 local_63;
  undefined4 local_5f;
  int local_5b;
  int local_57;
  char local_53;
  byte local_52;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  int local_41;
  int local_3d;
  byte local_39;
  undefined8 local_38;
  undefined1 local_2c [4];
  
  local_38 = 0;
  FUN_006dfe80(*(undefined8 *)(param_1 + 8));
  if ((param_3 == '\0') || (param_3 == '\x02')) {
    FUN_004b84c0(param_2,local_2c,4);
    FUN_004b84c0(param_2,&local_51,0x19);
    FUN_004169f0(&local_38,local_39);
    uVar1 = FUN_00414de0(&local_38);
    FUN_004b84c0(param_2,uVar1,(uint)local_39 * 2);
    FUN_006dc8a0(param_1,local_38);
    FUN_006dcbd0(param_1,local_51);
    FUN_006dcca0(param_1,local_4d);
    FUN_006dcd70(param_1,local_49);
    FUN_006dcd10(param_1,local_45);
    FUN_006dc990(param_1,(longlong)local_41);
    FUN_006dcc40(param_1,0xffffffff);
    FUN_006dc830(param_1,1);
    FUN_006dd340(param_1,local_3d != 0);
    if ((0 < local_3d) && (iVar4 = local_3d, -1 < local_3d + -1)) {
      do {
        uVar2 = FUN_006dee40(*(undefined8 *)(param_1 + 8),param_1,0);
        FUN_006de460(uVar2,param_2);
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
        pcVar3 = (code *)FUN_00411550(uVar1,0xffa5);
        (*pcVar3)(uVar1,uVar2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (param_3 == '\x04') {
    FUN_004b84c0(param_2,local_2c,4);
    FUN_004b84c0(param_2,&local_6f,0x1e);
    FUN_004169f0(&local_38,local_52);
    uVar1 = FUN_00414de0(&local_38);
    FUN_004b84c0(param_2,uVar1,(uint)local_52 * 2);
    FUN_006dc8a0(param_1,local_38);
    FUN_006dcbd0(param_1,local_6f);
    FUN_006dcca0(param_1,local_6b);
    FUN_006dcd70(param_1,local_67);
    FUN_006dcd10(param_1,local_63);
    FUN_006dcc40(param_1,local_5f);
    FUN_006dc830(param_1,local_53 != '\0');
    FUN_006dc990(param_1,(longlong)local_5b);
    FUN_006dd340(param_1,local_57 != 0);
    if ((0 < local_57) && (iVar4 = local_57, -1 < local_57 + -1)) {
      do {
        uVar2 = FUN_006dee40(*(undefined8 *)(param_1 + 8),param_1,0);
        FUN_006de460(uVar2,param_2);
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
        pcVar3 = (code *)FUN_00411550(uVar1,0xffa5);
        (*pcVar3)(uVar1,uVar2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (param_3 == '\x05') {
    FUN_004b84c0(param_2,local_2c,4);
    FUN_004b84c0(param_2,&local_91,0x22);
    FUN_004169f0(&local_38,local_70);
    uVar1 = FUN_00414de0(&local_38);
    FUN_004b84c0(param_2,uVar1,(uint)local_70 * 2);
    FUN_006dc8a0(param_1,local_38);
    FUN_006dcbd0(param_1,local_91);
    FUN_006dcca0(param_1,local_8d);
    FUN_006dcd70(param_1,local_89);
    FUN_006dcd10(param_1,local_85);
    FUN_006dcc40(param_1,local_81);
    FUN_006dc830(param_1,local_71 != '\0');
    FUN_006dc990(param_1,local_7d);
    FUN_006dd340(param_1,local_75 != 0);
    if ((0 < local_75) && (iVar4 = local_75, -1 < local_75 + -1)) {
      do {
        uVar2 = FUN_006dee40(*(undefined8 *)(param_1 + 8),param_1,0);
        FUN_006de460(uVar2,param_2);
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
        pcVar3 = (code *)FUN_00411550(uVar1,0xffa5);
        (*pcVar3)(uVar1,uVar2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(&local_38);
  return;
}

