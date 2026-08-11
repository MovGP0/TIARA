/* Ghidra address: 010637f0 */
/* Ghidra symbol: FUN_010637f0 */


undefined1 FUN_010637f0(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_a1;
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
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = (longlong *)0x0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x100))(*(longlong **)(param_1 + 0x48),&local_48);
  (**(code **)(*local_48 + 0xd8))(local_48,&local_40,L"/boards");
  FUN_0041b890(&local_30,local_40,&DAT_01063cc0);
  (**(code **)(*local_30 + 0xe8))(local_30,&local_38,L"board");
  (**(code **)(*local_38 + 0x68))(local_38);
  iVar2 = 0;
  (**(code **)(*local_38 + 0x70))(local_38,&local_50);
  FUN_0041b890(&local_28,local_50,&DAT_01063cc0);
  local_a1 = 0;
  do {
    if (local_28 == (longlong *)0x0) {
LAB_01063bbd:
      FUN_0041b800(&local_a0);
      FUN_00414560(&local_98,9);
      FUN_0041b800(&local_50);
      FUN_0041b800(&local_48);
      FUN_0041b800(&local_40);
      FUN_0041b800(&local_38);
      FUN_00417840(&local_30,&LAB_00b9fca0,3);
      return local_a1;
    }
    if (iVar2 == param_2) {
      (**(code **)(*local_28 + 0x100))(local_28,&local_58,L"name");
      FUN_00414ad0(param_3,local_58);
      (**(code **)(*local_28 + 0x100))(local_28,&local_60,&DAT_01063d0c);
      FUN_00414ad0(param_3 + 8,local_60);
      (**(code **)(*local_28 + 0x100))(local_28,&local_68,L"fqbn");
      FUN_00414ad0(param_3 + 0x10,local_68);
      (**(code **)(*local_28 + 0x100))(local_28,&local_70,L"f_cpu");
      FUN_00b8f030(local_70);
      uVar1 = FUN_0040c770();
      *(undefined4 *)(param_3 + 0x18) = uVar1;
      (**(code **)(*local_28 + 0x100))(local_28,&local_78,L"board");
      FUN_00414ad0(param_3 + 0x20,local_78);
      (**(code **)(*local_28 + 0x100))(local_28,&local_80,L"variant");
      FUN_00414ad0(param_3 + 0x28,local_80);
      (**(code **)(*local_28 + 0x100))(local_28,&local_88,L"arch");
      FUN_00414ad0(param_3 + 0x30,local_88);
      (**(code **)(*local_28 + 0x100))(local_28,&local_90,L"usb_vid");
      FUN_00414ad0(param_3 + 0x38,local_90);
      (**(code **)(*local_28 + 0x100))(local_28,&local_98,L"usb_pid");
      FUN_00414ad0(param_3 + 0x40,local_98);
      local_a1 = 1;
      goto LAB_01063bbd;
    }
    (**(code **)(*local_38 + 0x70))(local_38,&local_a0);
    FUN_0041b890(&local_28,local_a0,&DAT_01063cc0);
    iVar2 = iVar2 + 1;
  } while( true );
}

