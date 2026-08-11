/* Ghidra address: 01b1d810 */
/* Ghidra symbol: FUN_01b1d810 */


int FUN_01b1d810(undefined8 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_258 [40];
  int *local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined1 local_212 [514];
  int local_10;
  int local_c;
  
  local_220 = auStack_258;
  local_228 = 0;
  thunk_FUN_039b6ab1(param_1,&local_10);
  local_230 = param_2;
  if (local_10 == *param_2) {
    iVar2 = thunk_FUN_0419e3da(param_1);
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_03986dbd(param_1);
      if (iVar2 != 0) {
        bVar1 = 0;
        goto LAB_01b1d888;
      }
    }
  }
  bVar1 = 1;
LAB_01b1d888:
  local_c = -(uint)bVar1;
  if (local_c == 0) {
    *(undefined8 *)(local_230 + 2) = param_1;
    thunk_FUN_03b3efbf(param_1,local_212,0x202);
    FUN_00416830(&local_228,local_212,0x101);
    iVar2 = FUN_0043e6d0(local_228,L"TApplication");
    local_c = -(uint)(iVar2 != 0);
    if (local_c == 0) {
      *(undefined8 *)(local_230 + 2) = param_1;
    }
    else {
      local_230[2] = 0;
      local_230[3] = 0;
    }
  }
  FUN_00414480(&local_228);
  return local_c;
}

