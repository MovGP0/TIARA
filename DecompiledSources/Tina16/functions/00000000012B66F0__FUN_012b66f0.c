/* Ghidra address: 012b66f0 */
/* Ghidra symbol: FUN_012b66f0 */


undefined8
FUN_012b66f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,char param_5,
            char param_6,double param_7)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  ulonglong in_stack_ffffffffffffff48;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  double local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  double local_28;
  undefined8 uStack_20;
  
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_30 = 0;
  if (param_5 == '\0') {
    FUN_00414b50(&local_30,&DAT_012b6b1c);
  }
  else {
    FUN_00414b50(&local_30,&DAT_012b6b0c);
  }
  cVar2 = FUN_017d1390(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x4c0));
  if ((cVar2 == '\0') &&
     (iVar3 = FUN_017d1380(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x4c0)), iVar3 == 2)) {
    FUN_017d1750(&local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x4c0),1,param_3,param_4
                );
    if (param_6 != '\0') {
      if (param_7 == 0.0) {
        FUN_00c44460(&local_28,0x54b249ad2594c37d,0);
      }
      else {
        FUN_00c44460(local_58,param_7,0);
        FUN_00c44b60(&local_48,&local_28,local_58);
        local_28 = local_48;
        uStack_20 = uStack_40;
      }
    }
    uVar4 = FUN_00c44590(&local_28);
    FUN_00b8fec0(&local_60,uVar4,*(undefined1 *)(param_1 + 0x1e0),0,0x3cd203af9ee75616);
    dVar5 = (double)FUN_00c445d0(&local_28);
    FUN_00b8fec0(&local_68,dVar5 * 57.29577951308232,*(undefined1 *)(param_1 + 0x1e0),0,
                 0x3cd203af9ee75616);
    FUN_00416cd0(param_2,5,local_60,local_30,&DAT_012b6b2c,local_68,&DAT_012b6b40);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x4c0);
    if ((lVar1 == 0) || (iVar3 = FUN_017d1380(lVar1), iVar3 != 1)) {
      dVar5 = (double)FUN_017d17e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x4c0),param_3,
                                   param_4,1,in_stack_ffffffffffffff48 & 0xffffffffffffff00);
      if (param_6 != '\0') {
        if (param_7 == 0.0) {
          dVar5 = 1e+100;
        }
        else {
          dVar5 = dVar5 / param_7;
        }
      }
      FUN_00b8fec0(&local_78,dVar5,*(undefined1 *)(param_1 + 0x1e0),0,0x3cd203af9ee75616);
      FUN_00416cd0(param_2,3,local_78,local_30,L" rms");
    }
    else {
      FUN_017d1750(&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x4c0),0,param_3,
                   param_4);
      if (param_6 != '\0') {
        if (param_7 == 0.0) {
          local_48 = 1e+100;
        }
        else {
          local_48 = local_48 / param_7;
        }
      }
      FUN_00b8fec0(&local_70,local_48,*(undefined1 *)(param_1 + 0x1e0),0,0x3cd203af9ee75616);
      FUN_00416ba0(param_2,local_70,local_30);
    }
  }
  FUN_00414560(&local_78,4);
  FUN_00414480(&local_30);
  return param_2;
}

