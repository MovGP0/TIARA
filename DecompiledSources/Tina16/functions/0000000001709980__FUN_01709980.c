/* Ghidra address: 01709980 */
/* Ghidra symbol: FUN_01709980 */


undefined8 *
FUN_01709980(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res20;
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
  
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_1);
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 <= iVar2) {
      iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
      if (iVar1 <= iVar3) {
        FUN_00414560(&local_b8,0x12);
        FUN_00414480(&local_res20);
        return param_1;
      }
    }
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar2 < iVar1) {
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,iVar2);
      FUN_00441920(&local_40,local_48);
      FUN_004414c0(local_30,local_40,0);
      iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
      if (iVar3 < iVar1) {
        (**(code **)(*param_3 + 0x18))(param_3,&local_78,iVar3);
        FUN_00441920(&local_70,local_78);
        FUN_004414c0(&local_38,local_70,0);
        iVar1 = FUN_0044fdb0(local_30[0],local_38,0);
        if (iVar1 < 0) {
          FUN_00416ba0(&local_a8,local_res20,local_30[0]);
          FUN_004414c0(&local_a0,local_a8,L".tld");
          FUN_00416cd0(param_1,4,*param_1,&DAT_01709dcc,L"Missing TLD file : ",local_a0);
          iVar2 = iVar2 + 1;
        }
        else if (iVar1 == 0) {
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 1;
        }
        else {
          FUN_00416ba0(&local_b8,local_res20,local_38);
          FUN_004414c0(&local_b0,local_b8,L".lib");
          FUN_00416cd0(param_1,4,*param_1,&DAT_01709dcc,L"Missing LIB file : ",local_b0);
          iVar3 = iVar3 + 1;
        }
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2,&local_98,iVar2);
        FUN_00441920(&local_90,local_98);
        FUN_00416ba0(&local_88,local_res20,local_90);
        FUN_004414c0(&local_80,local_88,L".tld");
        FUN_00416cd0(param_1,4,*param_1,&DAT_01709dcc,L"Missing TLD file : ",local_80);
        iVar2 = iVar2 + 1;
      }
    }
    else {
      (**(code **)(*param_3 + 0x18))(param_3,&local_68,iVar3);
      FUN_00441920(&local_60,local_68);
      FUN_00416ba0(&local_58,local_res20,local_60);
      FUN_004414c0(&local_50,local_58,L".lib");
      FUN_00416cd0(param_1,4,*param_1,&DAT_01709dcc,L"Missing LIB file : ",local_50);
      iVar3 = iVar3 + 1;
    }
  } while( true );
}

