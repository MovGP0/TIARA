/* Ghidra address: 00d3d0d0 */
/* Ghidra symbol: FUN_00d3d0d0 */


void FUN_00d3d0d0(longlong *param_1)

{
  char cVar1;
  
  if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
    if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
      cVar1 = FUN_00d3cfd0(param_1);
      if ((cVar1 == '\0') &&
         (((*(char *)((longlong)param_1 + 0xaf) != '\x02' || ((char)param_1[0x16] != '\x06')) ||
          (*(char *)((longlong)param_1 + 0xb1) != '\x1a')))) {
        *(undefined1 *)((longlong)param_1 + 0xaf) = 2;
        *(undefined1 *)(param_1 + 0x16) = 6;
        *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1a;
        (**(code **)(*param_1 + 0xa8))(param_1,0);
      }
    }
    if (*(char *)((longlong)param_1 + 0x7d) != '\0') {
      cVar1 = FUN_00d3cf70(param_1);
      if ((cVar1 == '\0') &&
         (((*(char *)((longlong)param_1 + 0xb2) != '\n' ||
           (*(char *)((longlong)param_1 + 0xb3) != '\x0e')) ||
          (*(char *)((longlong)param_1 + 0xb4) != '\x16')))) {
        *(undefined1 *)((longlong)param_1 + 0xb2) = 10;
        *(undefined1 *)((longlong)param_1 + 0xb3) = 0xe;
        *(undefined1 *)((longlong)param_1 + 0xb4) = 0x16;
        (**(code **)(*param_1 + 0xa0))(param_1,0);
      }
    }
  }
  return;
}

