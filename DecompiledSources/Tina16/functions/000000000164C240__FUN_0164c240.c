/* Ghidra address: 0164c240 */
/* Ghidra symbol: FUN_0164c240 */


double FUN_0164c240(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5,
                   ulonglong param_6)

{
  double dVar1;
  double unaff_XMM6_Qa;
  
  if ((*(char *)(param_2 + 4) == '\x01') &&
     (**(char **)(*(longlong *)(param_2 + 0x40) + -8 + (longlong)(*param_3 + 1) * 8) == '\t')) {
    dVar1 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_1 + 0x118),(char)*param_3 + '\x01',2,
                                 0);
  }
  else {
    dVar1 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_1 + 0x118),(char)*param_3 + '\x01',1,
                                 0);
  }
  if (param_5 == '\0') {
    unaff_XMM6_Qa = dVar1;
    if (param_6 != *(byte *)(param_3 + 0x28)) {
      if (param_6 == *(byte *)((longlong)param_3 + 0xa1)) {
        unaff_XMM6_Qa = -dVar1;
      }
      else if ((*(char *)(param_2 + 4) == '\x01') &&
              (**(char **)(*(longlong *)(param_2 + 0x40) + -8 + (longlong)(*param_3 + 1) * 8) ==
               '\t')) {
        unaff_XMM6_Qa =
             (double)FUN_016ee520(param_2,*(undefined8 *)(param_1 + 0x118),(char)*param_3 + '\x01',1
                                  ,0);
        if (param_6 != 1) {
          unaff_XMM6_Qa = -unaff_XMM6_Qa;
        }
      }
      else {
        unaff_XMM6_Qa = 0.0;
      }
    }
  }
  else if (param_5 == '\x01') {
    unaff_XMM6_Qa = dVar1 * *(double *)(param_3 + 0x22);
  }
  return unaff_XMM6_Qa;
}

