/* Ghidra address: 00bf3e90 */
/* Ghidra symbol: FUN_00bf3e90 */


void FUN_00bf3e90(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  ushort local_1a;
  
  if (*(char *)((longlong)param_1 + 0x901) == '\0') {
    local_1a = *(ushort *)(param_2 + 8);
    plVar2 = (longlong *)FUN_007f9b70(param_1,1);
    if ((((plVar2 != (longlong *)0x0) && (plVar2 != param_1)) &&
        (*(char *)((longlong)plVar2 + 0x4d4) != '\0')) &&
       ((local_1a < 0x100 && (cVar1 = FUN_00659a70(plVar2,param_2), cVar1 != '\0')))) {
      return;
    }
    local_1a = *(ushort *)(param_2 + 8);
    if ((*(uint *)(param_1 + 0x14) & 0x1000) == 0) {
      if (param_1[0xda] != 0) {
        (*(code *)param_1[0xda])(param_1[0xdb],param_1,&local_1a);
      }
      if (local_1a != 0) {
        (**(code **)(*param_1 + 0x280))(param_1,&local_1a);
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x901) = 0;
  }
  return;
}

