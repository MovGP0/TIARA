/* Ghidra address: 007ff130 */
/* Ghidra symbol: FUN_007ff130 */


void FUN_007ff130(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if ((char)param_1[0x9f] == '\0') {
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (*(char *)((longlong)param_1 + 0xb2) != '\0') {
      if (param_1[0xf] == 0) {
        local_20 = auStack_48;
        (**(code **)(*param_1 + 0x140))(param_1,*(undefined1 *)(DAT_02012668 + 0x79));
      }
      else {
        (**(code **)(*param_1 + 0x140))(param_1,*(undefined1 *)(param_1[0xf] + 0xb1));
      }
      (**(code **)(*param_1 + 0x138))(param_1,1);
    }
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  return;
}

