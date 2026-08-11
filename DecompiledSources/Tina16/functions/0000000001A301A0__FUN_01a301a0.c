/* Ghidra address: 01a301a0 */
/* Ghidra symbol: FUN_01a301a0 */


void FUN_01a301a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  
  local_70 = auStack_b8;
  local_78 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = *(longlong *)(param_1 + 0x710);
  local_98 = L"\'";
  FUN_00416cd0(&local_38,3,&DAT_01a304e4,local_res10[0]);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_28 + 0x78))
            (local_28,L"from tpack_t.ollama_downloader import TOllamaDownloader");
  (**(code **)(*local_28 + 0x78))(local_28,L"intf = TOllamaDownloader()");
  local_88 = local_38;
  local_80 = 0x11;
  FUN_00442f70(&local_78,L"intf.download(%s)",&local_88,0);
  (**(code **)(*local_28 + 0x78))(local_28,local_78);
  local_98 = L"ollama_download.py";
  FUN_00416cd0(&local_40,3,*(undefined8 *)(local_30 + 0x2ba0),&DAT_01a305e4);
  (**(code **)(*local_28 + 0x100))(local_28,local_40);
  local_98 = L"ollama_downloader_result.json";
  FUN_00416cd0(&local_60,3,*(undefined8 *)(local_30 + 0x2ba0),&DAT_01a305e4);
  cVar1 = FUN_00440a20(local_60,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_60);
  }
  if (*(char *)(param_1 + 0x708) == '\0') {
    FUN_013b9dc0(*(undefined8 *)(local_30 + 0x2bc8));
    (**(code **)(*local_28 + 0x38))(local_28,&local_50);
    local_98 = (wchar_t *)0x0;
    FUN_013bc030(*(undefined8 *)(local_30 + 0x2bc8),&local_48,local_50,1);
    FUN_01a43030(local_30,local_48);
    *(undefined1 *)(param_1 + 0x708) = 1;
  }
  FUN_01a2f9d0(param_1,1);
  FUN_00410f20(local_28);
  FUN_00414480(&local_78);
  FUN_00414560(&local_60,6);
  FUN_00414480(local_res10);
  return;
}

