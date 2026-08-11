/* Ghidra address: 009e0a10 */
/* Ghidra symbol: FUN_009e0a10 */


undefined4
FUN_009e0a10(undefined8 param_1,undefined4 param_2,code *param_3,int param_4,char param_5,
            undefined8 param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res8;
  undefined4 local_res10;
  code *local_res18;
  int local_res20;
  undefined1 auStack_778 [32];
  undefined4 local_758;
  undefined4 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined4 *local_738;
  undefined8 *local_730;
  undefined8 local_728;
  code *local_720;
  longlong local_718;
  undefined1 *local_710;
  int local_704;
  int local_700;
  int local_6fc;
  longlong local_6f8;
  undefined8 local_6f0;
  longlong *local_6e8;
  longlong *local_6e0;
  int local_6d4;
  undefined4 local_6d0;
  int local_6cc;
  undefined8 local_6c8 [2];
  undefined4 local_6b4;
  undefined4 local_6b0 [15];
  undefined4 local_674;
  undefined2 local_670;
  undefined8 local_648;
  undefined1 local_63e [512];
  undefined1 local_43e [1026];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_710 = auStack_778;
  local_728 = 0;
  local_648 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(param_6);
  FUN_00442620(local_43e,local_res8);
  FUN_00409970(0,&local_648);
  FUN_00442620(local_63e,local_648);
  FUN_0040d200(local_6b0,0x68,0);
  local_6b0[0] = 0x68;
  local_674 = 1;
  local_670 = (undefined2)local_res10;
  local_758 = 0;
  local_750 = 0x30;
  local_748 = 0;
  local_740 = 0;
  local_738 = local_6b0;
  local_730 = local_6c8;
  iVar2 = thunk_FUN_04169e31(0,local_43e,0,0);
  if (iVar2 == 0) {
    local_3c = 0xffffffff;
  }
  else {
    if (param_5 == '\0') {
      if ((local_res18 == (code *)0x0) || (local_res20 < 1)) {
        thunk_FUN_0418d6df(local_6c8[0],0xffffffff);
      }
      else {
        local_6d4 = FUN_00427dd0();
        local_6cc = 0x102;
        do {
          local_6cc = thunk_FUN_0418d6df(local_6c8[0],local_res20);
          if (local_6cc == 0x102) {
            iVar2 = FUN_00427dd0();
            (*local_res18)(iVar2 - local_6d4);
            if (*(longlong *)PTR_DAT_02004030 != 0) {
              FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
            }
          }
        } while (local_6cc != 0);
      }
    }
    else {
      local_6e0 = (longlong *)FUN_007fc180(&PTR_FUN_007f0370,1,0);
      FUN_007ff680(local_6e0,3);
      local_6e8 = (longlong *)FUN_0067eb90(&PTR_FUN_00669e80,1,local_6e0);
      (**(code **)(*local_6e8 + 0x130))(local_6e8,local_6e0);
      FUN_0064c650(local_6e8,5);
      FUN_0067fce0(local_6e8,2);
      (**(code **)(*local_6e8 + 0x118))(local_6e8,0);
      FUN_0064de00(local_6e8,param_6);
      FUN_0067fe90(local_6e8,1);
      local_6f8 = FUN_00410e60(&DAT_009e0638,1);
      *(code **)(local_6f8 + 0x18) = local_res18;
      *(int *)(local_6f8 + 0x20) = local_res20;
      *(longlong **)(local_6f8 + 0x38) = local_6e0;
      *(undefined8 *)(local_6f8 + 0x28) = local_6c8[0];
      *(undefined4 *)(local_6f8 + 0x30) = local_6b4;
      local_6f0 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_6e0);
      if (local_res20 == 0) {
        FUN_00742ed0(local_6f0,0x14);
      }
      else {
        if (local_res20 < 0x15) {
          local_6fc = local_res20;
        }
        else {
          local_6fc = 0x14;
        }
        FUN_00742ed0(local_6f0,local_6fc);
      }
      local_718 = local_6f8;
      local_720 = FUN_009e08b0;
      FUN_00742ef0(local_6f0,&local_720);
      FUN_00742eb0(local_6f0,1);
      FUN_0064dd90(local_6e8,&local_728);
      local_700 = FUN_005fdff0(local_6e8[0x62],local_728);
      local_700 = local_700 + 0x28;
      local_704 = local_700;
      if (local_700 < 200) {
        local_704 = 200;
      }
      FUN_0064cbf0(local_6e0,local_704);
      FUN_0064cc50(local_6e0,100);
      FUN_00800470(local_6e0,4);
      FUN_0064de00(local_6e0,param_6);
      FUN_007ff400(local_6e0,0);
      local_6e0[0xb5] = local_6f8;
      local_6e0[0xb4] = (longlong)FUN_009e0910;
      if (param_7 != '\0') {
        local_38 = *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x270);
        uStack_30 = *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x278);
        lVar1 = *(longlong *)PTR_DAT_02004030;
        *(longlong *)(lVar1 + 0x278) = local_6f8;
        *(code **)(lVar1 + 0x270) = FUN_009e0970;
      }
      (**(code **)(*local_6e0 + 0x2d0))(local_6e0);
      FUN_00410f20(local_6e0);
      FUN_00410f20(local_6f8);
      if (param_7 != '\0') {
        lVar1 = *(longlong *)PTR_DAT_02004030;
        *(undefined8 *)(lVar1 + 0x270) = local_38;
        *(undefined8 *)(lVar1 + 0x278) = uStack_30;
      }
    }
    iVar2 = thunk_FUN_041c35b6(local_6c8[0],&local_6d0);
    if (iVar2 != 0) {
      local_3c = local_6d0;
    }
  }
  FUN_00414480(&local_728);
  FUN_00414480(&local_648);
  FUN_00414480(&local_res8);
  FUN_00414480(&param_6);
  return local_3c;
}

