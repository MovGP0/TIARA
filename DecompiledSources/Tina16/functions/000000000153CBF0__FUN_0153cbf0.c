/* Ghidra address: 0153cbf0 */
/* Ghidra symbol: FUN_0153cbf0 */


undefined4 FUN_0153cbf0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd8))
            (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  FUN_00441920(&local_40,local_res20);
  cVar1 = FUN_01b22620(*(undefined8 *)(param_1 + 0x20),L"MARKERWIDTH",&local_4c,0);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"MARKERWIDTH: not found!");
    FUN_004134c0(uVar3);
  }
  local_68 = CONCAT44(local_68._4_4_,param_2);
  local_60 = 0;
  FUN_00442f70(&local_48,L"img_width = %d #MARKERWIDTH",&local_68,0);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
            (*(longlong **)(param_1 + 0x20),local_4c,local_48);
  cVar1 = FUN_01b22620(*(undefined8 *)(param_1 + 0x20),L"MARKERHEIGHT",&local_4c,0);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"MARKERHEIGHT: not found!");
    FUN_004134c0(uVar3);
  }
  local_68 = CONCAT44(local_68._4_4_,param_3);
  local_60 = 0;
  FUN_00442f70(&local_48,L"img_height = %d #MARKERHEIGHT",&local_68,0);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
            (*(longlong **)(param_1 + 0x20),local_4c,local_48);
  cVar1 = FUN_01b22620(*(undefined8 *)(param_1 + 0x20),L"MARKERINPUTFILE",&local_4c,0);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"MARKERINPUTFILE: not found!");
    FUN_004134c0(uVar3);
  }
  local_68 = local_40;
  local_60 = 0x11;
  FUN_00442f70(&local_48,L"INPUT_FILE = \"%s\" #MARKERINPUTFILE",&local_68,0);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
            (*(longlong **)(param_1 + 0x20),local_4c,local_48);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(*(longlong **)(param_1 + 0x20),&local_30);
  FUN_00441920(&local_70,local_res20);
  FUN_00416cd0(&local_38,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x108),&DAT_0153d18c,
               local_70);
  FUN_015f21c0(local_res20,local_38);
  FUN_00416cd0(&local_38,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x108),&DAT_0153d18c,
               L"img_array.dat");
  cVar1 = FUN_00440a20(local_38,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_38);
  }
  FUN_013bc030(*(undefined8 *)(param_1 + 0x40),&local_28,local_30,1,0);
  uVar2 = FUN_0153d210(param_1,local_28);
  FUN_00414480(&local_70);
  FUN_00414560(&local_48,6);
  FUN_00414480(&local_res20);
  return uVar2;
}

