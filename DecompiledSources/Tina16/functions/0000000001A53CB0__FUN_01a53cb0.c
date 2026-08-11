/* Ghidra address: 01a53cb0 */
/* Ghidra symbol: FUN_01a53cb0 */


undefined8 FUN_01a53cb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  local_10 = 0;
  iVar2 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"OpenAI");
  if (iVar2 == 0) {
    FUN_00414b50(&local_10,L"https://api.openai.com/v1");
  }
  else {
    iVar2 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"GROQ");
    if (iVar2 == 0) {
      FUN_00414b50(&local_10,L"https://api.groq.com/openai/v1");
    }
    else {
      iVar2 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"OpenRouter");
      if (iVar2 == 0) {
        FUN_00414b50(&local_10,L"https://openrouter.ai/api/v1");
      }
      else {
        iVar2 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"Free");
        if (iVar2 == 0) {
          FUN_00414b50(&local_10,L"https://www.tinacloud.com");
        }
        else {
          cVar1 = FUN_01a3c370(param_3);
          if (cVar1 == '\0') {
            iVar2 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"Local");
            if (iVar2 == 0) {
              local_38 = *(undefined8 *)(param_1 + 0x898);
              local_30 = 0x11;
              local_28 = FUN_01a5a510(param_1);
              local_20 = 0;
              FUN_00442f70(&local_10,L"http://%s:%d/v1",&local_38,1);
            }
            else {
              FUN_00414b50(&local_10,L"<unassigned>");
            }
          }
          else {
            FUN_00414b50(&local_10,L"https://ollama.com/v1");
          }
        }
      }
    }
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

