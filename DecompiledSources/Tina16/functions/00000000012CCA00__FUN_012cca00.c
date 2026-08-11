/* Ghidra address: 012cca00 */
/* Ghidra symbol: FUN_012cca00 */


void FUN_012cca00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_38 [2];
  int local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  (**(code **)**(undefined8 **)(param_1 + 0x748))(*(undefined8 **)(param_1 + 0x748));
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
            (*(longlong **)(param_1 + 0x738),local_res10);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x740),0);
  local_20 = FUN_006efb70(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0));
  FUN_00441920(&local_48,local_res10);
  FUN_006ef050(local_20,local_48);
  local_28 = (longlong *)FUN_006e6120(&PTR_FUN_006bbb78,1,0);
  (**(code **)(*local_28 + 0x130))(local_28,*(undefined8 *)(param_1 + 0x6e0));
  FUN_006ef160(local_20,local_28);
  FUN_006ef7e0(local_20,local_38,0);
  uVar2 = FUN_006edb10(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x500),0);
  iVar1 = FUN_006ed780(uVar2);
  local_38[0] = local_38[0] + iVar1;
  uVar2 = FUN_006edb10(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x500),1);
  local_30 = FUN_006ed780(uVar2);
  local_30 = local_38[0] + local_30;
  FUN_0064d040(local_28,local_38);
  FUN_012cd110(param_1,local_res18,local_res20,param_5);
  (**(code **)(**(longlong **)(param_1 + 0x748) + 8))(*(longlong **)(param_1 + 0x748));
  FUN_00414480(&local_48);
  FUN_00414480(&local_res10);
  return;
}

