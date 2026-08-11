/* Ghidra address: 01836a30 */
/* Ghidra symbol: FUN_01836a30 */


undefined1 FUN_01836a30(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_48;
  undefined1 local_41;
  undefined8 local_40;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_50 = auStack_98;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(local_20);
  FUN_00414480(&local_28);
  local_41 = 0;
  FUN_01820ef0(*(undefined8 *)(param_1 + 0x30),param_2);
  local_48 = 1;
  FUN_018217f0(*(undefined8 *)(param_1 + 0x30),&local_58);
  iVar2 = FUN_00416db0(local_58,&DAT_01836ddc);
  if (iVar2 == 0) {
    FUN_01821790(*(undefined8 *)(param_1 + 0x30),&local_60);
    iVar2 = FUN_0043e420(local_60,L"language");
    if (iVar2 == 0) {
      local_48 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x84);
      while( true ) {
        iVar2 = FUN_00414cb0(param_2);
        if ((iVar2 < local_48) || (*(short *)(param_2 + -2 + (longlong)local_48 * 2) == 0xd)) break;
        local_48 = local_48 + 1;
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x84);
      FUN_00416dc0(&local_70,param_2,iVar2,local_48 - iVar2);
      FUN_0043ea00(&local_68,local_70);
      FUN_018345d0(param_1,local_68);
      local_48 = local_48 + 2;
    }
  }
  FUN_01820ee0(*(undefined8 *)(param_1 + 0x30),local_48);
  uVar3 = FUN_0181e580(*(undefined8 *)(param_1 + 0x48),L"program");
  cVar1 = FUN_01835a90(auStack_98,uVar3);
  if ((cVar1 != '\0') && (local_20[0] == 0)) {
    FUN_00414480(local_20);
    FUN_00414480(&local_28);
    local_40 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*local_30 + 200))(local_30,0,L"<?xml version=\"1.0\"?>");
    (**(code **)(*local_30 + 200))(local_30,1,L"<program>");
    (**(code **)(*local_30 + 0x78))(local_30,L"</program>");
    uVar3 = FUN_0045ae90();
    (**(code **)(*local_30 + 0x118))(local_30,local_40,uVar3);
    FUN_004b6dc0(local_40,3);
    FUN_0181ed90(*(undefined8 *)(param_1 + 0x18),local_40);
    uVar3 = FUN_0181e400(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
    uVar4 = FUN_0181e580(*(undefined8 *)(param_1 + 0x48),L"types");
    FUN_0181ec30(uVar3,uVar4);
    local_41 = 1;
    FUN_00410f20(local_40);
  }
  FUN_00414ad0(*(longlong *)(param_1 + 0x38) + 0x90,local_28);
  FUN_00414ad0(*(longlong *)(param_1 + 0x38) + 0x88,local_20[0]);
  FUN_00410f20(local_30);
  FUN_00414560(&local_70,4);
  FUN_00414560(&local_28,2);
  return local_41;
}

