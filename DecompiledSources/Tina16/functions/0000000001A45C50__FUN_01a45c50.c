/* Ghidra address: 01a45c50 */
/* Ghidra symbol: FUN_01a45c50 */


undefined1 FUN_01a45c50(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0x1a8),1);
  if (((cVar2 == '\0') ||
      (cVar2 = FUN_013b7920(*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x8c0),
                            *(undefined8 *)(param_1 + 0x1a8)), cVar2 == '\0')) ||
     (cVar2 = FUN_004b33d0(*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x8c0),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x8c8)), cVar2 != '\0'))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x1d0) + 0x2944) == 0) {
    if (bVar1) {
      FUN_00416cd0(&local_10,3,*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x2ba0),
                   &DAT_01a45dd8,L"answer_done.txt");
      cVar2 = FUN_00440a20(local_10,1);
      if (cVar2 != '\0') {
        local_19 = 1;
        goto code_r0x01a45d91;
      }
    }
    local_19 = 0;
  }
  else {
    if (!bVar1) {
      FUN_00416cd0(&local_18,3,*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x2ba0),
                   &DAT_01a45dd8,L"answer_done.txt");
      cVar2 = FUN_00440a20(local_18,1);
      if (cVar2 == '\0') {
        local_19 = 0;
        goto code_r0x01a45d91;
      }
    }
    local_19 = 1;
  }
code_r0x01a45d91:
  FUN_00414560(&local_18,2);
  return local_19;
}

