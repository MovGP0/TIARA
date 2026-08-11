/* Ghidra address: 014fede0 */
/* Ghidra symbol: FUN_014fede0 */


void FUN_014fede0(longlong param_1)

{
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined1 local_19 [9];
  
  *(undefined1 *)(param_1 + 0x740) = 0;
  do {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if ((*(char *)(param_1 + 0x780) == '\x01') && (*(char *)(param_1 + 0x741) == '\0')) {
      FUN_00f835c0(*(undefined2 *)(param_1 + 0x782));
    }
    *(undefined1 *)(param_1 + 0x744) = 0;
    if (*(char *)(param_1 + 0x745) != '\0') {
      if (*(double *)(param_1 + 0x750) < *(double *)PTR_DAT_02004c18 - 1e-12) {
        FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) + 1e-12,
                     param_1 + 0x768,param_1 + 0x770);
        *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_1 + 0x770);
      }
      else {
        if (*(char *)(param_1 + 0x74a) == '\0') {
          __run_digital(*(undefined8 *)(param_1 + 0x798),0xbff0000000000000,&local_28,local_19,
                        local_34,local_38,local_3c);
          _get_next_event_time(*(undefined8 *)(param_1 + 0x798),param_1 + 0x760,local_30);
          if (*(double *)(param_1 + 0x760) == -1.0) {
            *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)PTR_DAT_020011b0;
          }
          *(undefined8 *)PTR_DAT_02004c18 = local_28;
        }
        if (*(char *)(param_1 + 0x741) == '\0') {
          FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(undefined8 *)PTR_DAT_02004c18,
                       *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
        }
        *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)PTR_DAT_02004c18;
        if (*(char *)(param_1 + 0x741) == '\0') {
          FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) + 1e-12,
                       *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
        }
        *(undefined1 *)(param_1 + 0x744) = 1;
      }
      *(undefined1 *)(param_1 + 0x746) = 1;
    }
    if ((*(char *)(param_1 + 0x746) != '\0') && (*(char *)(param_1 + 0x741) == '\0')) {
      FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) + 1e-12,
                   param_1 + 0x778,param_1 + 0x770);
      FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) - 1e-12,
                   param_1 + 0x768,param_1 + 0x778);
      if (*(char *)(param_1 + 0x744) != '\0') {
        *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x760);
      }
      if ((*(double *)(param_1 + 0x750) == *(double *)(param_1 + 0x770)) ||
         (*(double *)(param_1 + 0x750) == *(double *)(param_1 + 0x768))) {
        if (*(double *)(param_1 + 0x750) != *(double *)PTR_DAT_020011b0) {
          *(undefined1 *)(param_1 + 0x747) = 0;
        }
      }
      else {
        FUN_014fe7d0(param_1,*(undefined8 *)(param_1 + 0x750));
        FUN_014fe060(param_1,*(undefined8 *)(param_1 + 0x750),*(undefined8 *)(param_1 + 0x768),
                     *(undefined8 *)(param_1 + 0x770));
        *(undefined1 *)(param_1 + 0x747) = *(undefined1 *)(param_1 + 0x748);
      }
    }
  } while (*(char *)(param_1 + 0x747) == '\0');
  *(undefined1 *)(param_1 + 0x740) = 1;
  return;
}

