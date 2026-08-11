/* Ghidra address: 014fd9d0 */
/* Ghidra symbol: FUN_014fd9d0 */


void FUN_014fd9d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*PTR_DAT_02003fc8 == '\0') {
    *(undefined8 *)PTR_DAT_02004c18 = 0;
    *(double *)(param_1 + 0x750) = *(double *)PTR_DAT_02004c18 + 1e-12;
    *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)PTR_DAT_020011b0;
    *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)PTR_DAT_02004c18;
    if (*(char *)(param_1 + 0x741) == '\0') {
      FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(double *)PTR_DAT_02004c18 - 1e-12,
                   *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
      FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(double *)PTR_DAT_02004c18 + 1e-12,
                   *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
      FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(undefined8 *)(param_1 + 0x750),param_1 + 0x768,
                   param_1 + 0x770);
      if (*(double *)(param_1 + 0x758) <= *(double *)(param_1 + 0x770) &&
          *(double *)(param_1 + 0x770) != *(double *)(param_1 + 0x758)) {
        *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x758);
      }
      if (*(double *)(param_1 + 0x760) <= *(double *)(param_1 + 0x770) &&
          *(double *)(param_1 + 0x770) != *(double *)(param_1 + 0x760)) {
        *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x760);
      }
      FUN_014fed60(param_1,param_1);
      FUN_014fe060(param_1,*(undefined8 *)(param_1 + 0x750),*(undefined8 *)(param_1 + 0x768),
                   *(undefined8 *)(param_1 + 0x770));
    }
    else {
      _Scan_node_values(*(undefined8 *)(param_1 + 0x798),*(undefined8 *)(param_1 + 0x730));
      FUN_014fed60(param_1,param_1);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x728);
    *(undefined8 *)PTR_DAT_02004c18 = 0;
    *(double *)(param_1 + 0x750) = *(double *)PTR_DAT_02004c18 + 1e-12;
    *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)PTR_DAT_020011b0;
    FUN_01521af0(uVar1,*(undefined8 *)PTR_DAT_02004c18,param_1 + 0x758);
    *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)PTR_DAT_02004c18;
    if (*(char *)(param_1 + 0x741) == '\0') {
      FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(double *)PTR_DAT_02004c18 - 1e-12,
                   *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
      FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(double *)PTR_DAT_02004c18 + 1e-12,
                   *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
      FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(undefined8 *)(param_1 + 0x750),param_1 + 0x768,
                   param_1 + 0x770);
      if (*(double *)(param_1 + 0x758) <= *(double *)(param_1 + 0x770) &&
          *(double *)(param_1 + 0x770) != *(double *)(param_1 + 0x758)) {
        *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x758);
      }
      if (*(double *)(param_1 + 0x760) <= *(double *)(param_1 + 0x770) &&
          *(double *)(param_1 + 0x770) != *(double *)(param_1 + 0x760)) {
        *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x760);
      }
      FUN_014fed60(param_1,param_1);
      FUN_014fe060(param_1,*(undefined8 *)(param_1 + 0x750),*(undefined8 *)(param_1 + 0x768),
                   *(undefined8 *)(param_1 + 0x770));
    }
    else {
      FUN_01aad5c0(uVar1,*(undefined8 *)(param_1 + 0x730));
      FUN_014fed60(param_1,param_1);
    }
  }
  return;
}

