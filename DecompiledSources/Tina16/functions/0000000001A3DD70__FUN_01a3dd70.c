/* Ghidra address: 01a3dd70 */
/* Ghidra symbol: FUN_01a3dd70 */


char FUN_01a3dd70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  char local_291;
  undefined8 local_290;
  undefined8 local_288;
  wchar_t *local_280;
  undefined1 local_278;
  undefined4 local_270;
  undefined1 local_268;
  undefined4 local_260;
  undefined1 local_258;
  undefined8 local_250 [2];
  undefined1 local_23a [522];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_290 = 0;
  local_288 = 0;
  local_250[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if (0 < *(int *)PTR_DAT_02002560) {
    FUN_01a3e1c0(param_1,L"Ollama_Installed: Before GetHttpResponse");
    local_291 = FUN_0147bb20(L"127.0.0.1",param_3,&local_30);
    local_280 = L"127.0.0.1";
    local_278 = 0x11;
    local_268 = 0;
    local_270 = param_3;
    local_260 = FUN_01b218a0(local_291);
    local_258 = 0;
    FUN_00442f70(local_250,L"Ollama_Installed: GetHttpResponse: http://%s:%d, result=%d",&local_280,
                 2);
    FUN_01a3e1c0(param_1,local_250[0]);
    goto LAB_01a3defd;
  }
  FUN_005d2870(local_20);
  FUN_00414480(param_2);
  thunk_FUN_0412858d(0,local_23a,0x801c,0xffffffff);
  FUN_00416830(&local_28,local_23a,0x105);
  FUN_00416ba0(&local_288,local_28,L"\\Programs\\Ollama\\ollama.exe");
  cVar1 = FUN_00440a20(local_288,1);
  if (cVar1 == '\0') {
LAB_01a3dedf:
    local_291 = '\0';
  }
  else {
    FUN_00416ba0(&local_290,local_28,L"\\Programs\\Ollama\\ollama app.exe");
    cVar1 = FUN_00440a20(local_290,1);
    if (cVar1 == '\0') goto LAB_01a3dedf;
    local_291 = '\x01';
  }
  if (local_291 == '\0') {
    FUN_00414ad0(param_2,
                 L"Ollama not installed, please download it from https://ollama.com and install it!"
                );
  }
LAB_01a3defd:
  FUN_00414560(&local_290,2);
  FUN_00414480(local_250);
  FUN_00414560(&local_30,3);
  return local_291;
}

