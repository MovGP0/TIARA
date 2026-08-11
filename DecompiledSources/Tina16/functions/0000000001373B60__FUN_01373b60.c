/* Ghidra address: 01373b60 */
/* Ghidra symbol: FUN_01373b60 */


char FUN_01373b60(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong *local_res20;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  char local_21;
  longlong local_20 [2];
  
  local_50 = auStack_b8;
  local_60 = 0;
  local_68 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_21 = '\0';
  local_20[0] = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x478) + 0x10) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x468) + 0x10) == 0)) {
    FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x110),0);
  }
  cVar1 = FUN_01373a50(param_1,1);
  if (cVar1 == '\0') {
    FUN_00de8980(&local_58,0x14d,*(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x110));
    FUN_01b05000(local_58,0);
  }
  local_98 = local_20;
  FUN_00f52ea0(param_1,param_2,param_3,local_res20);
  FUN_013738b0(local_20[0],1);
  if ((param_2 == '\0') && (*PTR_DAT_020023b0 == '\0')) {
    local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
    local_40 = (longlong *)
               FUN_0136ea40(&PTR_FUN_0136de48,1,*(undefined8 *)PTR_DAT_02004030,local_20[0]);
    iVar2 = (**(code **)(*local_40 + 0x2d0))(local_40);
    local_21 = iVar2 == 2;
    FUN_00410f20(local_40);
  }
  if (local_21 == '\0') {
    local_98 = local_res20;
    FUN_013738c0(local_20[0],1,param_2,param_3);
    FUN_01373a10(local_20[0]);
  }
  FUN_00f52fb0(local_20[0],0);
  FUN_00f53fb0(*(undefined8 *)(local_20[0] + 0x1440));
  FUN_00410f20(local_20[0]);
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_00414590(&local_70,2);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_res20);
  return local_21;
}

