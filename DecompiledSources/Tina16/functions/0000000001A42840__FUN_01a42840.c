/* Ghidra address: 01a42840 */
/* Ghidra symbol: FUN_01a42840 */


void FUN_01a42840(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong local_res8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res8[0] = param_1;
  FUN_004b37d0(*(undefined8 *)(param_1 + 0x8e0),&local_48);
  lVar3 = FUN_0147b0e0(&DAT_0147a8f8,1);
  plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_019d8360,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01a537c0(local_res8[0],lVar3);
  FUN_019d9750(plVar4,local_res8,lVar3);
  iVar5 = 0;
  do {
    FUN_01a42710(local_res8[0],&local_60,iVar5);
    FUN_00414ad0(plVar4 + (longlong)iVar5 + 0x10d,local_60);
    FUN_01a42710(local_res8[0],&local_68,iVar5);
    FUN_00414ad0(plVar4 + (longlong)iVar5 + 0x110,local_68);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  iVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
  if (iVar5 == 1) {
    iVar5 = *(int *)(*(longlong *)(local_res8[0] + 0x2968) + 0x5c);
    if (iVar5 == 0) {
      FUN_00414b50(&local_58,L"Ollama");
    }
    else if (iVar5 == 1) {
      FUN_00414b50(&local_58,L"LM Studio");
    }
    else {
      FUN_00414b50(&local_58,L"llamafile");
    }
    iVar1 = *(int *)(lVar3 + 0x5c);
    if ((*(int *)(*(longlong *)(local_res8[0] + 0x2968) + 0x60) != *(int *)(lVar3 + 0x60)) &&
       (cVar2 = FUN_01a40a60(local_res8[0]), cVar2 != '\0')) {
      FUN_01a5b1c0(local_res8[0],*(undefined4 *)(lVar3 + 0x60));
    }
    FUN_01a421f0(local_res8[0],lVar3,0);
    if (iVar5 != iVar1) {
      if (iVar5 == 2) {
        if (*(char *)(local_res8[0] + 0x2b41) != '\0') {
          FUN_01a5a9d0(local_res8[0],local_res8[0] + 2000,local_res8[0] + 0x2b41);
        }
      }
      else {
        local_80 = local_58;
        local_78 = 0x11;
        FUN_00442f70(&local_70,L"Make sure you have closed the %s on the Windows Taskbar!",&local_80
                     ,0);
        FUN_0072d440(local_70,2,4,0);
      }
      FUN_0072d440(L"Please wait a few seconds for the new framework to start successfully!",2,4,0);
      FUN_01a42430(local_res8[0]);
      FUN_01a3f000(local_res8[0],&local_50,0);
      FUN_0072d440(L"Models successfully prepared!",2,4,0);
      (**(code **)(**(longlong **)(local_res8[0] + 0x8e8) + 0x18))
                (*(longlong **)(local_res8[0] + 0x8e8),&local_88,0);
      FUN_00414ad0(*(longlong *)(local_res8[0] + 0x2968) + 8,local_88);
      FUN_004b37d0(*(undefined8 *)(local_res8[0] + 0x8e0),&local_48);
    }
    FUN_01a54070(local_res8[0],*(undefined8 *)(local_res8[0] + 0x2960),1);
    FUN_01a54900(local_res8[0]);
  }
  FUN_00410f20(plVar4);
  FUN_00410f20(lVar3);
  FUN_00414480(&local_88);
  FUN_00414560(&local_70,7);
  return;
}

