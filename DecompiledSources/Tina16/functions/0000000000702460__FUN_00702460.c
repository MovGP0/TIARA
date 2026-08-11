/* Ghidra address: 00702460 */
/* Ghidra symbol: FUN_00702460 */


void FUN_00702460(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  
  if (*(char *)((longlong)param_1 + 0x601) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x391) != '\0')) &&
       ((*(char *)((longlong)param_1 + 0x4dc) != '\0' || ((char)param_1[0x94] != '\0')))) {
      cVar1 = FUN_007023c0(auStack_38);
      if ((((cVar1 != '\0') && ((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf100)) &&
          (*(short *)(param_2 + 0x10) != 0x20)) && (*(short *)(param_2 + 0x10) != 0x2d)) {
        lVar2 = thunk_FUN_041d93e9();
        if (lVar2 == 0) {
          if (*(short *)(param_2 + 0x10) == 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = FUN_00700700(param_1,*(short *)(param_2 + 0x10));
          }
          if ((*(short *)(param_2 + 0x10) == 0) ||
             ((lVar2 != 0 && (((char)param_1[0x94] == '\0' || (-1 < *(int *)(lVar2 + 0x31c))))))) {
            pcVar3 = (code *)FUN_00411550(param_1,0xffa8);
            (*pcVar3)(param_1,lVar2);
            *(undefined8 *)(param_2 + 0x18) = 1;
          }
        }
      }
    }
  }
  return;
}

