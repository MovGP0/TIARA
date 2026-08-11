/* Ghidra address: 01373fd0 */
/* Ghidra symbol: FUN_01373fd0 */


void FUN_01373fd0(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong *local_res20;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  char local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_38;
  char local_29;
  longlong local_28 [3];
  
  local_40 = auStack_a8;
  local_50 = 0;
  local_58 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((*(int *)(*(longlong *)(param_1 + 0x478) + 0x10) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x468) + 0x10) == 0)) {
    FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x110),0);
  }
  cVar1 = FUN_01373a50(param_1,3);
  if (cVar1 == '\0') {
    FUN_00de8980(&local_48,0x14e,*(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x110));
    FUN_01b05000(local_48,0);
  }
  local_28[0] = 0;
  local_88 = local_28;
  local_71 = param_2;
  local_29 = FUN_00f52fc0(param_1,param_2,param_3,local_res20);
  if (local_29 == '\0') {
    if (param_2 == '\0') {
      local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
      local_38 = (longlong *)
                 FUN_0136ff90(&PTR_FUN_0136f2b8,1,*(undefined8 *)PTR_DAT_02004030,local_28[0]);
      iVar2 = (**(code **)(*local_38 + 0x2d0))(local_38);
      local_29 = iVar2 == 2;
      FUN_00410f20(local_38);
    }
    if (local_29 == '\0') {
      FUN_013738b0(local_28[0],3);
      local_88 = local_res20;
      FUN_013738c0(local_28[0],3,local_71,param_3);
      FUN_00f53490(local_28[0],0);
      FUN_00f53fb0(*(undefined8 *)(local_28[0] + 0x1440));
      FUN_01373a10(local_28[0]);
      FUN_00410f20(local_28[0]);
    }
    else {
      FUN_00f53490(local_28[0],1);
    }
  }
  else {
    FUN_00f53490(local_28[0],1);
  }
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_00414590(&local_60,2);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_res20);
  return;
}

