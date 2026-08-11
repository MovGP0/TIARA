/* Ghidra address: 0173cbf0 */
/* Ghidra symbol: FUN_0173cbf0 */


void FUN_0173cbf0(int param_1)

{
  short local_208 [256];
  
  if (DAT_01f9afd8 != '\0') {
    if (param_1 == 0) {
      FUN_00442620(local_208,L"clip.wav");
    }
    else if (param_1 == 1) {
      FUN_00442620(local_208,L"clip1.wav");
    }
    else {
      local_208[0] = 0;
    }
    if (local_208[0] != 0) {
      thunk_FUN_041af582(local_208,1);
    }
  }
  return;
}

