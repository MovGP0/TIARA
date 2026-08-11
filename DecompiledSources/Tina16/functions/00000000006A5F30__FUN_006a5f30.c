/* Ghidra address: 006a5f30 */
/* Ghidra symbol: FUN_006a5f30 */


undefined1 FUN_006a5f30(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  short local_1c;
  undefined1 local_19;
  
  local_30 = auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))(*(longlong **)(param_1 + 0x40));
  local_19 = 0;
  local_1c = thunk_FUN_03a59683(0);
  do {
    if (local_1c == 0) {
code_r0x006a5f9a:
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40));
      return local_19;
    }
    cVar1 = FUN_00604960(&DAT_005f7500,local_1c);
    if (cVar1 != '\0') {
      local_19 = 1;
      goto code_r0x006a5f9a;
    }
    local_1c = thunk_FUN_03a59683(local_1c);
  } while( true );
}

