/* Ghidra address: 0127bf60 */
/* Ghidra symbol: FUN_0127bf60 */


undefined1
FUN_0127bf60(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
            undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong *local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 local_92;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  local_92 = 0;
  FUN_00416cd0(local_60,3,L"detail[@type=\"",local_res10,&DAT_0127c4a0);
  (**(code **)(*local_res8 + 0xe8))(local_res8,local_30,local_60[0]);
  (**(code **)(*local_30[0] + 0x68))(local_30[0]);
  (**(code **)(*local_30[0] + 0x70))(local_30[0],&local_68);
  FUN_0041b890(&local_40,local_68,&DAT_0127c4a6);
  while( true ) {
    if (local_40 == (longlong *)0x0) {
      bVar5 = false;
    }
    else {
      (**(code **)(*local_40 + 0x100))(local_40,&local_78,L"model");
      if (local_78 == local_res18) {
        bVar5 = true;
      }
      else if ((local_78 == 0) || (local_res18 == 0)) {
        bVar5 = false;
      }
      else {
        iVar4 = FUN_0043e420(local_78,local_res18);
        bVar5 = iVar4 == 0;
      }
      bVar5 = !bVar5;
    }
    if (!bVar5) break;
    (**(code **)(*local_30[0] + 0x70))(local_30[0],&local_70);
    FUN_0041b890(&local_40,local_70,&DAT_0127c4a6);
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0xe8))(local_40,&local_38,L"parameter");
    (**(code **)(*local_38 + 0x68))(local_38);
    (**(code **)(*local_38 + 0x70))(local_38,&local_80);
    FUN_0041b890(&local_48,local_80,&DAT_0127c4a6);
    while (local_48 != (longlong *)0x0) {
      local_92 = 1;
      (**(code **)(*local_48 + 0x100))(local_48,&local_88,&LAB_0127c4fc);
      iVar2 = FUN_0043fc50(local_88,0);
      local_50 = param_5;
      iVar3 = 0;
      iVar4 = iVar2;
      if (-1 < iVar2 + -1) {
        do {
          cVar1 = *(char *)(param_4 + iVar3);
          if (cVar1 == '\x01') {
            FUN_00b909d0(&local_50,0x1f);
          }
          else if (cVar1 == '\x02') {
            FUN_00b909d0(&local_50,2);
          }
          else if (cVar1 == '\x03') {
            FUN_00b909d0(&local_50,8);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      cVar1 = *(char *)(param_4 + iVar2);
      if (cVar1 == '\x01') {
        local_91 = 9;
      }
      else if (cVar1 == '\x02') {
        local_91 = 0;
      }
      else if (cVar1 == '\x03') {
        local_91 = 5;
      }
      FUN_01275c10(local_48,0,local_91,local_50);
      (**(code **)(*local_38 + 0x70))(local_38,&local_90);
      FUN_0041b890(&local_48,local_90,&DAT_0127c4a6);
    }
  }
  FUN_0041b800(&local_90);
  FUN_00414480(&local_88);
  FUN_0041b800(&local_80);
  FUN_00414480(&local_78);
  FUN_00417840(&local_70,&DAT_00b9f8e0,2);
  FUN_00414480(local_60);
  FUN_00417840(&local_48,&LAB_00b9fca0,2);
  FUN_00417840(&local_38,&DAT_00b9f960,2);
  FUN_0041b800(&local_res8);
  FUN_00414560(&local_res10,2);
  return local_92;
}

