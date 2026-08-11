/* Ghidra address: 01a3d890 */
/* Ghidra symbol: FUN_01a3d890 */


undefined1 FUN_01a3d890(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 local_269;
  undefined8 local_268;
  wchar_t *local_260 [2];
  undefined4 local_250 [2];
  undefined4 local_248;
  undefined1 local_224 [524];
  
  local_260[0] = (wchar_t *)0x0;
  local_268 = 0;
  local_269 = 0;
  lVar2 = FUN_00c36aa0(2,0);
  if (lVar2 != -1) {
    local_250[0] = 0x238;
    iVar1 = FUN_00c36ad0(lVar2,local_250);
    while (iVar1 != 0) {
      FUN_00416830(&local_268,local_224,0x104);
      FUN_00441920(local_260,local_268);
      if (local_260[0] == L"python.exe") {
        bVar4 = true;
      }
      else if (local_260[0] == (wchar_t *)0x0) {
        bVar4 = false;
      }
      else {
        iVar1 = FUN_0043e420(local_260[0],L"python.exe");
        bVar4 = iVar1 == 0;
      }
      if ((bVar4) && (lVar3 = thunk_FUN_039fb2f7(1,0,local_248), lVar3 != 0)) {
        iVar1 = thunk_FUN_040e52a8(lVar3,0);
        if (iVar1 != 0) {
          local_269 = 1;
        }
        thunk_FUN_041d2921(lVar3);
      }
      iVar1 = FUN_00c36b00(lVar2,local_250);
    }
    thunk_FUN_041d2921(lVar2);
  }
  FUN_00414560(&local_268,2);
  return local_269;
}

