/* Ghidra address: 0064c1a0 */
/* Ghidra symbol: FUN_0064c1a0 */


void FUN_0064c1a0(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)((longlong)param_1 + 0xb3) != param_2) {
    cVar1 = *(char *)((longlong)param_1 + 0xb3);
    *(char *)((longlong)param_1 + 0xb3) = param_2;
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      if (((cVar1 == '\x03') || (*(char *)((longlong)param_1 + 0xb3) != '\x03')) ||
         (((int)param_1[0x5e] == (int)param_1[0x12] &&
          (((*(int *)((longlong)param_1 + 0x2f4) == *(int *)((longlong)param_1 + 0x94) &&
            ((int)param_1[0x5f] == (int)param_1[0x13])) &&
           (*(int *)((longlong)param_1 + 0x2fc) == *(int *)((longlong)param_1 + 0x9c))))))) {
        FUN_0064c920();
      }
      else {
        (**(code **)(*param_1 + 400))
                  (param_1,(int)param_1[0x5e],*(undefined4 *)((longlong)param_1 + 0x2f4),
                   (int)param_1[0x5f],*(undefined4 *)((longlong)param_1 + 0x2fc));
      }
    }
  }
  return;
}

