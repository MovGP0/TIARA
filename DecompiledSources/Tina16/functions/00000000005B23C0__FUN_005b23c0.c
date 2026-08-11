/* Ghidra address: 005b23c0 */
/* Ghidra symbol: FUN_005b23c0 */


void FUN_005b23c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005aebf0);
  if (cVar1 == '\0') {
    if (param_2 == (longlong *)0x0) {
      FUN_0041ddd0(local_30,PTR_PTR_02003380);
      local_40 = L"Dest";
      local_38 = 0x11;
      uVar4 = FUN_0044d530(&PTR_FUN_005ae658,1,local_30[0],&local_40,0);
      FUN_004134c0(uVar4);
    }
    else {
      FUN_004b1190(param_1,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0xd0))(param_2,*(undefined1 *)(param_1 + 0xca));
    (**(code **)(*param_2 + 0xd8))(param_2,*(undefined8 *)(param_1 + 0xd0));
    (**(code **)(*param_2 + 0xe0))(param_2,*(undefined1 *)(param_1 + 0xd8));
    (**(code **)(*param_2 + 0xe8))(param_2,*(undefined1 *)(param_1 + 0xd9));
    (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(param_1 + 0xdc));
    (**(code **)(*param_2 + 0xf8))(param_2,*(undefined4 *)(param_1 + 0xe0));
    (**(code **)(*param_2 + 0x100))(param_2,*(undefined8 *)(param_1 + 0xe8));
    (**(code **)(*param_2 + 0x108))(param_2,*(undefined1 *)(param_1 + 0xf0));
    (**(code **)(*param_2 + 0x110))(param_2,*(undefined8 *)(param_1 + 0xf8));
    (**(code **)(*param_2 + 0x118))(param_2,*(undefined1 *)(param_1 + 0x100));
    (**(code **)(*param_2 + 0x120))(param_2,*(undefined2 *)(param_1 + 0x102));
    lVar2 = FUN_005b3290(param_2);
    if (lVar2 != 0) {
      lVar2 = FUN_005b3290(param_1);
      if (lVar2 == 0) {
        plVar3 = (longlong *)FUN_005b3290(param_2);
        (**(code **)(*plVar3 + 0x90))(plVar3);
      }
      else {
        uVar4 = FUN_005b3290(param_1);
        FUN_005b32d0(param_2,uVar4);
      }
    }
    (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_1 + 0x110));
    (**(code **)(*param_2 + 0x130))(param_2,*(undefined1 *)(param_1 + 0x115));
    param_2[3] = *(longlong *)(param_1 + 0x18);
    (**(code **)(*param_2 + 0x90))(param_2,param_1 + 0x98);
    param_2[0x23] = *(longlong *)(param_1 + 0x118);
    param_2[0x24] = *(longlong *)(param_1 + 0x120);
    param_2[0x15] = *(longlong *)(param_1 + 0xa8);
    param_2[0x16] = *(longlong *)(param_1 + 0xb0);
    param_2[0x11] = *(longlong *)(param_1 + 0x88);
    param_2[0x12] = *(longlong *)(param_1 + 0x90);
  }
  FUN_00414480(local_30);
  return;
}

