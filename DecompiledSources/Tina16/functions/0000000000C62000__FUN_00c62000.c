/* Ghidra address: 00c62000 */
/* Ghidra symbol: FUN_00c62000 */


void FUN_00c62000(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  char local_19;
  
  local_40 = auStack_a8;
  local_88 = 0;
  local_80 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00724270(param_1,&local_28);
  iVar2 = FUN_00416db0(local_28,param_1[0x35]);
  if (iVar2 == 0) goto LAB_00c622c2;
  FUN_00414ad0(param_1 + 0x35,local_28);
  cVar1 = FUN_00440a20(local_28,1);
  if (cVar1 == '\0') {
LAB_00c620c7:
    local_19 = '\0';
  }
  else {
    cVar1 = FUN_00c61fe0(auStack_a8,local_28);
    if (cVar1 == '\0') goto LAB_00c620c7;
    local_19 = '\x01';
  }
  if (local_19 != '\0') {
    FUN_00441a10(&local_48,local_28);
    iVar2 = FUN_0043e420(local_48,L".lnk");
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 0x90))(param_1);
      local_19 = FUN_00c61e10(uVar3,local_28,&local_30);
      if (local_19 != '\0') {
        FUN_00414b50(&local_28,local_30);
      }
    }
  }
  if (local_19 != '\0') {
    FUN_006042a0(*(undefined8 *)(param_1[0x34] + 0x318),local_28);
    FUN_0041ddd0(&local_58,PTR_PTR_02001258);
    local_78[0] = FUN_00605610(*(undefined8 *)(param_1[0x34] + 0x318));
    local_70 = 0;
    local_68 = FUN_00605640(*(undefined8 *)(param_1[0x34] + 0x318));
    local_60 = 0;
    FUN_00442f70(&local_50,local_58,local_78,1);
    FUN_0064de00(param_1[0x31],local_50);
    (**(code **)(*(longlong *)param_1[0x32] + 0x128))((longlong *)param_1[0x32],1);
    FUN_0064de00(param_1[0x33],0);
  }
  if (local_19 == '\0') {
    FUN_0041ddd0(&local_80,PTR_PTR_02004370);
    FUN_0064de00(param_1[0x31],local_80);
    (**(code **)(*(longlong *)param_1[0x32] + 0x128))((longlong *)param_1[0x32],0);
    FUN_00742010(param_1[0x34],0);
    FUN_0041ddd0(&local_88,PTR_PTR_02001250);
    FUN_0064de00(param_1[0x33],local_88);
  }
LAB_00c622c2:
  FUN_00723d50(param_1);
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_30,2);
  return;
}

