/* Ghidra address: 00702710 */
/* Ghidra symbol: FUN_00702710 */


undefined1 FUN_00702710(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x601) == '\0') {
    pcVar1 = (code *)FUN_00411550(param_1,0xffa9);
    (*pcVar1)(param_1,param_2);
    *(undefined1 *)(param_1 + 0x601) = 1;
    do {
      FUN_0080cca0(*(undefined8 *)PTR_DAT_02004030);
      if (*(char *)(*(longlong *)PTR_DAT_02004030 + 0x148) != '\0') {
        *(undefined1 *)(param_1 + 0x601) = 0;
      }
    } while (*(char *)(param_1 + 0x601) != '\0');
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
    local_19 = *(undefined1 *)(param_1 + 0x620);
  }
  else if (param_2 == 0) {
    local_19 = 0;
  }
  else {
    local_30 = auStack_58;
    pcVar1 = (code *)FUN_00411550(param_1,0xffaa);
    (*pcVar1)(param_1,param_2);
    local_19 = 1;
  }
  return local_19;
}

