/* Ghidra address: 01b4e970 */
/* Ghidra symbol: FUN_01b4e970 */


void FUN_01b4e970(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = auStack_e8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_48[0] = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x147c) == '\0') {
    FUN_0041b800(local_48);
  }
  else {
    local_70 = auStack_e8;
    FUN_00bac3d0(local_48);
    (**(code **)(*local_48[0] + 0x148))(local_48[0],&local_78,&PTR_PTR_01b4ee70);
    (**(code **)(*local_48[0] + 0x108))(local_48[0],local_78);
  }
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  local_c8 = L"temp.cir";
  FUN_00416cd0(param_1 + 0x40,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4ee84);
  cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x40),1);
  if (cVar1 != '\0') {
    FUN_004412f0(*(undefined8 *)(param_1 + 0x40));
  }
  local_60 = FUN_01a1efc0(&DAT_019ec6a8,1,local_48[0],&DAT_01b4eeb4);
  local_c8 = (wchar_t *)CONCAT71(local_c8._1_7_,5);
  local_c0 = 1;
  local_b8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  FUN_01a1f1b0(local_60,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x18),0);
  if (*(char *)(param_1 + 0x147c) == '\0') {
    cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x40),1);
    if (cVar1 == '\0') {
      FUN_00416ba0(&local_98,*(undefined8 *)(param_1 + 0x40),L": not found");
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_98);
      FUN_004134c0(uVar2);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x40));
  }
  else {
    local_c8 = L"temp.xml";
    FUN_00416cd0(&local_80,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4ee84);
    (**(code **)(*local_48[0] + 0x180))(local_48[0],local_80,0);
    (**(code **)(*local_48[0] + 0x100))(local_48[0],&local_58);
    (**(code **)(*local_58 + 0x28))(local_58,&local_50);
    while (local_50 != (longlong *)0x0) {
      cVar1 = (**(code **)(*local_50 + 0x48))(local_50);
      if (cVar1 == '\x04') {
        (**(code **)(*local_50 + 0xb8))(local_50,&local_88);
        FUN_0043ea00(&local_30,local_88);
        break;
      }
      (**(code **)(*local_50 + 0x38))(local_50,&local_90);
      FUN_0041b840(&local_50,local_90);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),local_30);
  }
  FUN_01b4c630(param_1);
  FUN_00414480(param_1 + 0x28);
  FUN_00414480(param_1 + 0x48);
  FUN_00414480(param_1 + 0x30);
  FUN_01b4c1d0(*(undefined8 *)(param_1 + 0x40),L"xyce",L"simulator");
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  FUN_00414480(&local_98);
  FUN_0041b800(&local_90);
  FUN_00414560(&local_88,2);
  FUN_0041b800(&local_78);
  FUN_00417840(&local_58,&DAT_00b9f8e0,2);
  FUN_0041b800(local_48);
  FUN_00414560(&local_30,3);
  return;
}

