/* Ghidra address: 01a3da00 */
/* Ghidra symbol: FUN_01a3da00 */


void FUN_01a3da00(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_22a [522];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  cVar2 = FUN_01b251d0(L"Main",L"OllamaTest");
  if (cVar2 == '\0') {
    thunk_FUN_0412858d(0,local_22a,0x801c,0xffffffff);
    FUN_00416830(&local_18,local_22a,0x105);
    FUN_00416ba0(&local_20,local_18,L"\\Programs\\Ollama\\ollama app.exe");
    uVar1 = FUN_00416740(local_20);
    thunk_FUN_0419adcc(0,L"open",uVar1,0,0,1);
  }
  FUN_00414560(&local_20,3);
  return;
}

