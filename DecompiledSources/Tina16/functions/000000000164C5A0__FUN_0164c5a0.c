/* Ghidra address: 0164c5a0 */
/* Ghidra symbol: FUN_0164c5a0 */


double FUN_0164c5a0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5,
                   ulonglong param_6)

{
  double in_XMM0_Qa;
  
  if (param_5 == '\0') {
    in_XMM0_Qa = *(double *)(param_3 + 0x22);
    if (param_6 != *(byte *)(param_3 + 0x28)) {
      if (param_6 == *(byte *)((longlong)param_3 + 0xa1)) {
        in_XMM0_Qa = -in_XMM0_Qa;
      }
      else if ((*(char *)(param_2 + 4) == '\x01') &&
              (**(char **)(*(longlong *)(param_2 + 0x40) + -8 + (longlong)(*param_3 + 1) * 8) ==
               '\n')) {
        in_XMM0_Qa = (double)FUN_016ee520(param_2,*(undefined8 *)(param_1 + 0x118),
                                          (char)*param_3 + '\x01',1,0);
        if (param_6 != 1) {
          in_XMM0_Qa = -in_XMM0_Qa;
        }
      }
      else {
        in_XMM0_Qa = 0.0;
      }
    }
  }
  else if (param_5 == '\x01') {
    in_XMM0_Qa = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),(char)param_3[0x28],
                                      *(char *)((longlong)param_3 + 0xa1),0);
    in_XMM0_Qa = in_XMM0_Qa * *(double *)(param_3 + 0x22);
  }
  return in_XMM0_Qa;
}

