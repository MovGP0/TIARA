/* Ghidra address: 01d6d5f0 */
/* Ghidra symbol: FUN_01d6d5f0 */


double FUN_01d6d5f0(char param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                   longlong *param_5)

{
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double local_68;
  double local_60;
  double local_58;
  double local_50 [6];
  
  if (param_1 == '\0') {
    unaff_XMM6_Qa = (double)FUN_00dd1710(*param_3,&local_60,*param_4);
    unaff_XMM7_Qa = (double)FUN_00dd1710(param_3[1],&local_68,*param_4);
  }
  else if (param_1 == '\x01') {
    unaff_XMM6_Qa = (double)FUN_00dd1640(*param_3,&local_60,*param_4);
    unaff_XMM7_Qa = (double)FUN_00dd1640(param_3[1],&local_68,*param_4);
  }
  else if (param_1 == '\x02') {
    unaff_XMM6_Qa = (double)FUN_00dd1770(*param_3,&local_60,*param_4);
    unaff_XMM7_Qa = (double)FUN_00dd1770(param_3[1],&local_68,*param_4);
  }
  FUN_00dd0a10(*param_4,local_50,&local_58,0);
  local_50[0] = local_50[0] - local_58;
  *(double *)*param_5 =
       -local_50[0] * local_60 *
       (unaff_XMM7_Qa * (unaff_XMM6_Qa * 2.0 - 3.0) +
        unaff_XMM7_Qa * unaff_XMM7_Qa * (1.0 - unaff_XMM6_Qa * 2.0) + 1.0);
  *(double *)(*param_5 + 8) =
       -local_50[0] * local_68 *
       (unaff_XMM6_Qa * (unaff_XMM7_Qa * 2.0 - 3.0) +
        unaff_XMM6_Qa * unaff_XMM6_Qa * (1.0 - unaff_XMM7_Qa * 2.0) + 1.0);
  return local_58 +
         local_50[0] *
         (1.0 - ((((unaff_XMM6_Qa + unaff_XMM7_Qa) - unaff_XMM6_Qa * 3.0 * unaff_XMM7_Qa) +
                  unaff_XMM6_Qa * unaff_XMM6_Qa * unaff_XMM7_Qa +
                 unaff_XMM6_Qa * unaff_XMM7_Qa * unaff_XMM7_Qa) -
                unaff_XMM6_Qa * unaff_XMM7_Qa * unaff_XMM6_Qa * unaff_XMM7_Qa));
}

