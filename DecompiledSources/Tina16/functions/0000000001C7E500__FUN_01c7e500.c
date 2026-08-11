/* Ghidra address: 01c7e500 */
/* Ghidra symbol: FUN_01c7e500 */


void FUN_01c7e500(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  *PTR_DAT_02003b20 = 1;
  cVar1 = FUN_010e33a0();
  if (cVar1 == '\0') {
LAB_01c7e539:
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_01c87d20(param_1);
    if (cVar1 == '\0') goto LAB_01c7e539;
    cVar1 = '\x01';
  }
  *param_3 = cVar1;
  if (*param_3 == '\0') {
    local_30 = FUN_01ca0ce0;
    local_28 = param_1;
    FUN_00f836b0(&local_30);
  }
  if (*PTR_DAT_020052b8 != '\0') {
    if (*param_3 != '\0') {
      *(int *)(*(longlong *)PTR_DAT_020032b8 + 0x6ec) =
           *(int *)(*(longlong *)PTR_DAT_020032b8 + 0x6ec) + 1;
      FUN_013a42b0(*(undefined8 *)PTR_DAT_020032b8);
      cVar1 = FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"ExitProgram()",1,1);
      if ((cVar1 == '\0') &&
         ((*(char *)(*(longlong *)PTR_DAT_02001d08 + 0x70a) != '\0' ||
          (*(char *)(*(longlong *)PTR_DAT_02001d08 + 0x708) == '\0')))) {
        FUN_017fe910(*(undefined8 *)PTR_DAT_02001d08,param_2);
      }
    }
    if (*(int *)(*(longlong *)PTR_DAT_020032b8 + 0x6ec) < 2) {
      *param_3 = '\0';
      goto LAB_01c7e675;
    }
    if (*param_3 == '\0') {
LAB_01c7e645:
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_01c7e6d0(param_1);
      if (cVar1 == '\0') goto LAB_01c7e645;
      cVar1 = '\x01';
    }
    *param_3 = cVar1;
    goto LAB_01c7e675;
  }
  if (*param_3 == '\0') {
LAB_01c7e669:
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_01c7e6d0(param_1);
    if (cVar1 == '\0') goto LAB_01c7e669;
    cVar1 = '\x01';
  }
  *param_3 = cVar1;
LAB_01c7e675:
  if (*param_3 != '\0') {
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"ExitProgram()",0,1);
  }
  return;
}

