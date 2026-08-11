/* Ghidra address: 01a58510 */
/* Ghidra symbol: FUN_01a58510 */


bool FUN_01a58510(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  bool local_39;
  undefined4 local_34;
  longlong local_30 [2];
  
  local_30[0] = 0;
  cVar4 = '\0';
  cVar6 = '\0';
  bVar3 = false;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c);
  if (iVar1 == 1) {
    cVar4 = FUN_01a58090(param_1,param_2);
    bVar2 = false;
    if ((cVar4 != '\0') && (bVar2 = false, *(char *)(param_1 + 0x293b) == '\0')) {
      FUN_01a57310(param_1,1,0);
      FUN_01a57310(param_1,5,0);
      *(undefined1 *)(param_1 + 0x293b) = 1;
      cVar5 = FUN_01a5a9f0(param_1,&local_34);
      bVar2 = bVar3;
      if (cVar5 != '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x6c) = local_34;
        cVar6 = '\0';
      }
    }
  }
  else {
    cVar6 = '\0';
    bVar2 = bVar3;
    if (iVar1 == 0) {
      cVar6 = FUN_01a3dd70(param_1,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x68));
      bVar2 = true;
      if (cVar6 != '\0') {
        FUN_00452e30(local_30,L"OLLAMA_HOST");
        if (local_30[0] != 0) {
          FUN_01a58420(local_30[0],param_1 + 0x898,*(longlong *)(param_1 + 0x2968) + 0x68);
        }
      }
    }
  }
  local_39 = true;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c);
  if (iVar1 == 0) {
    if (!bVar2) {
      cVar6 = FUN_01a3dd70(param_1,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x68));
    }
    if ((*(int *)PTR_DAT_02002560 == 0) && (cVar6 == '\0')) {
      plVar7 = (longlong *)FUN_007fc180(&PTR_FUN_01a2df68,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar7[0xd6],L"Ollama is not installed please install it from: ");
      FUN_0064de00(plVar7[0xd7],L"https://ollama.com/download/windows");
      (**(code **)(*plVar7 + 0x2d0))(plVar7);
      FUN_00410f20(plVar7);
    }
    if (cVar6 == '\0') {
      local_39 = false;
    }
  }
  else if (iVar1 == 1) {
    FUN_01a3e1c0(param_1,L"LocalLLMFrameWork_Installed: UseLMStudio=1");
    if (cVar4 == '\0') {
      FUN_0072d440(*param_2,1,4,0);
      local_39 = false;
    }
  }
  else if ((iVar1 == 2) && (*(int *)PTR_DAT_02002560 == 0)) {
    cVar6 = FUN_01a58370(param_1,param_2);
    if (cVar6 == '\0') {
      plVar7 = (longlong *)FUN_007fc180(&PTR_FUN_01a2df68,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar7[0xd6],*(undefined8 *)(param_1 + 0x880));
      FUN_0064de00(plVar7[0xd7],*(undefined8 *)(param_1 + 0x878));
      (**(code **)(*plVar7 + 0x2d0))(plVar7);
      FUN_00410f20(plVar7);
    }
    local_39 = cVar6 != '\0';
    cVar6 = FUN_01a58090(param_1,param_2);
    if (cVar6 == '\0') {
      FUN_0072d440(*param_2,1,4,0);
      local_39 = false;
    }
  }
  FUN_00414480(local_30);
  return local_39;
}

