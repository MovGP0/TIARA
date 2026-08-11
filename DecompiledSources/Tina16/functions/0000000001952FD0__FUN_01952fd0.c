/* Ghidra address: 01952fd0 */
/* Ghidra symbol: FUN_01952fd0 */


void FUN_01952fd0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *in_RAX;
  longlong *plVar1;
  bool bVar2;
  double dVar3;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  
  while ((plVar1 = (longlong *)0x0, -1 < param_3 &&
         (in_RAX = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))
                             (*(longlong **)(param_1 + 0x98)), param_3 < (int)in_RAX))) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                       (*(longlong **)(param_1 + 0x98),param_3);
    in_RAX = plVar1;
    if (plVar1 == param_2) {
LAB_019530cb:
      param_3 = param_3 - param_4;
    }
    else {
      dVar3 = (double)FUN_01950860(plVar1);
      in_RAX = (longlong *)FUN_01950860(param_2);
      if ((extraout_XMM0_Qa + (double)param_2[0x16]) - 0.0001 <= dVar3) goto LAB_019530cb;
      dVar3 = (double)FUN_01950860(param_2);
      in_RAX = (longlong *)FUN_01950860(plVar1);
      if ((extraout_XMM0_Qa_00 + (double)plVar1[0x16]) - 0.0001 <= dVar3) goto LAB_019530cb;
      if (((char)param_2[0x34] != '\x04') ||
         (((param_4 != 1 ||
           ((double)plVar1[0x13] < (double)param_2[0x13] ||
            (double)plVar1[0x13] == (double)param_2[0x13])) &&
          ((param_4 != -1 ||
           ((double)param_2[0x13] + (double)param_2[0x15] <=
            (double)plVar1[0x13] + (double)plVar1[0x15])))))) break;
      param_3 = param_3 - param_4;
    }
  }
  if (param_4 == 1) {
    if (*(byte *)(param_2 + 0x34) < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0x34) & 0x1f)
              & 0x12U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      if (plVar1 == (longlong *)0x0) {
        (**(code **)(*param_2 + 200))(param_2,*(undefined8 *)(param_1 + 0x78));
      }
      else {
        (**(code **)(*param_2 + 200))(param_2,(double)plVar1[0x13] + (double)plVar1[0x15]);
      }
    }
  }
  if ((char)param_2[0x34] == '\x02') {
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*param_2 + 200))(param_2,*(double *)(param_1 + 0x88) - (double)param_2[0x15]);
    }
    else {
      (**(code **)(*param_2 + 200))(param_2,(double)plVar1[0x13] - (double)param_2[0x15]);
    }
  }
  if ((param_4 == -1) && ((char)param_2[0x34] == '\x04')) {
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0xd8))(param_2,*(double *)(param_1 + 0x88) - (double)param_2[0x13]);
    }
    else {
      (**(code **)(*param_2 + 0xd8))(param_2,(double)plVar1[0x13] - (double)param_2[0x13]);
    }
  }
  return;
}

