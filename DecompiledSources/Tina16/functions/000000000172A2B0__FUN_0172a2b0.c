/* Ghidra address: 0172a2b0 */
/* Ghidra symbol: FUN_0172a2b0 */


longlong FUN_0172a2b0(longlong param_1,char param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  longlong local_res18 [2];
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  bool local_3d;
  int local_38;
  int local_34;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_b8;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  uVar4 = *(undefined8 *)(DAT_0210ff98 + 0x18);
  *(undefined8 *)(local_res8 + 8) = uVar4;
  *(undefined8 *)(local_res8 + 0x10) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar4;
  FUN_004b67b0(uVar4,1);
  *(undefined4 *)(local_res8 + 0x28) = 0x4e4;
  if (*(longlong *)(DAT_0210ff98 + 0x10) != 0) {
    (**(code **)(**(longlong **)(DAT_0210ff98 + 0x10) + 0x100))
              (*(longlong **)(DAT_0210ff98 + 0x10),&local_58);
    FUN_0041b840(local_res8 + 0x18,local_58);
  }
  if (*(longlong *)(local_res8 + 0x18) != 0) {
    iVar1 = FUN_00416db0(local_res18[0],&DAT_0172a7ec);
    if (iVar1 == 0) {
      (**(code **)(**(longlong **)(local_res8 + 0x18) + 0xe8))
                (*(longlong **)(local_res8 + 0x18),&local_20,L"/clcf_language_file/lang");
      if (local_20 != (longlong *)0x0) {
        iVar1 = (**(code **)(*local_20 + 0x18))();
        local_34 = 0;
        if (-1 < iVar1 + -1) {
          do {
            (**(code **)(*local_20 + 0x20))(local_20,&local_60,local_34);
            FUN_0041b890(&local_28,local_60,&DAT_0172a82e);
            (**(code **)(*local_28 + 0x100))(local_28,&local_30,&PTR_DAT_0172a84c);
            (**(code **)(*local_28 + 0x100))(local_28,&local_68,&PTR_DAT_0172a860);
            local_38 = FUN_0043fc50(local_68,0x4e4);
            (**(code **)(**(longlong **)(local_res8 + 0x30) + 0x80))
                      (*(longlong **)(local_res8 + 0x30),local_30,(longlong)local_38);
            if (local_res18[0] == local_30) {
              local_3d = true;
            }
            else if ((local_res18[0] == 0) || (local_30 == 0)) {
              local_3d = false;
            }
            else {
              iVar2 = FUN_0043e420(local_res18[0],local_30);
              local_3d = iVar2 == 0;
            }
            if (local_3d != false) {
              *(int *)(local_res8 + 0x28) = local_38;
            }
            local_34 = local_34 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
    else {
      local_98 = &LAB_0172a8c0;
      FUN_00416cd0(&local_78,3,L"/clcf_language_file/lang[@id=\"",local_res18[0]);
      (**(code **)(**(longlong **)(local_res8 + 0x18) + 0xd8))
                (*(longlong **)(local_res8 + 0x18),&local_70,local_78);
      FUN_0041b890(&local_28,local_70,&DAT_0172a82e);
      if (local_28 == (longlong *)0x0) {
        *(undefined4 *)(local_res8 + 0x28) = 0x4e4;
      }
      else {
        (**(code **)(*local_28 + 0x100))(local_28,&local_80,&PTR_DAT_0172a860);
        uVar3 = FUN_0043fc50(local_80,0x4e4);
        *(undefined4 *)(local_res8 + 0x28) = uVar3;
      }
    }
  }
  FUN_00414ad0(local_res8 + 0x20,local_res18[0]);
  FUN_00414560(&local_80,2);
  FUN_0041b800(&local_70);
  FUN_00414480(&local_68);
  FUN_0041b800(&local_60);
  FUN_0041b800(&local_58);
  FUN_00414480(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

