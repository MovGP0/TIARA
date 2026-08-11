/* Ghidra address: 00dee5a0 */
/* Ghidra symbol: FUN_00dee5a0 */


ulonglong FUN_00dee5a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      char param_5,longlong param_6)

{
  ulonglong in_XMM0_Qa;
  
  if (param_5 == '\0') {
    in_XMM0_Qa = FUN_016ee520(param_2,*(undefined8 *)(param_1 + 0x118),1,1,0);
    if (param_6 != 1) {
      in_XMM0_Qa = in_XMM0_Qa ^ 0x8000000000000000;
    }
  }
  else if (param_5 == '\x01') {
    in_XMM0_Qa = 0;
  }
  return in_XMM0_Qa;
}

