/* Ghidra address: 00f53fc0 */
/* Ghidra symbol: FUN_00f53fc0 */


double FUN_00f53fc0(longlong *param_1,undefined8 param_2,double param_3,char param_4)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  double unaff_XMM9_Qa;
  double unaff_XMM10_Qa;
  double local_98;
  double local_90 [13];
  
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  dVar5 = (double)(**(code **)(*param_1 + 0x70))(param_1,param_2);
  if (param_4 == '\x01') {
    bVar2 = true;
    do {
      if (!bVar2) {
        unaff_XMM8_Qa = local_90[0];
        unaff_XMM9_Qa = local_98;
      }
      cVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
      bVar2 = false;
    } while ((cVar4 != '\0') && (local_98 <= dVar5 - param_3));
    if (cVar4 != '\0') {
      unaff_XMM10_Qa =
           ((local_90[0] - unaff_XMM8_Qa) * ((dVar5 - param_3) - unaff_XMM9_Qa)) /
           (local_98 - unaff_XMM9_Qa) + unaff_XMM8_Qa;
    }
    do {
      dVar3 = local_90[0];
      dVar6 = local_98;
      cVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
      if (cVar4 == '\0') break;
    } while (dVar5 - param_3 <= local_98);
    dVar1 = local_90[0];
    if (cVar4 != '\0') {
      dVar1 = ((local_90[0] - dVar3) * ((dVar5 - param_3) - dVar6)) / (local_98 - dVar6) + dVar3;
    }
    dVar5 = (double)FUN_00c42800(unaff_XMM10_Qa);
    dVar6 = (double)FUN_00c42800(dVar1);
    unaff_XMM7_Qa = (double)FUN_00c42750((dVar5 + dVar6) / 2.0);
  }
  else if (param_4 == '\x02') {
    bVar2 = true;
    do {
      if (!bVar2) {
        unaff_XMM8_Qa = local_90[0];
        unaff_XMM9_Qa = local_98;
      }
      cVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
      bVar2 = false;
    } while ((cVar4 != '\0') && (dVar5 - param_3 <= local_98));
    unaff_XMM7_Qa = local_90[0];
    if (cVar4 != '\0') {
      unaff_XMM7_Qa =
           ((local_90[0] - unaff_XMM8_Qa) * ((dVar5 - param_3) - unaff_XMM9_Qa)) /
           (local_98 - unaff_XMM9_Qa) + unaff_XMM8_Qa;
    }
  }
  else if (param_4 == '\x03') {
    bVar2 = true;
    do {
      if (!bVar2) {
        unaff_XMM8_Qa = local_90[0];
        unaff_XMM9_Qa = local_98;
      }
      cVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
      bVar2 = false;
    } while ((cVar4 != '\0') && (local_98 <= dVar5 - param_3));
    if (cVar4 != '\0') {
      unaff_XMM10_Qa =
           ((local_90[0] - unaff_XMM8_Qa) * ((dVar5 - param_3) - unaff_XMM9_Qa)) /
           (local_98 - unaff_XMM9_Qa) + unaff_XMM8_Qa;
    }
    do {
      dVar3 = local_90[0];
      dVar6 = local_98;
      cVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
      if (cVar4 == '\0') break;
    } while (dVar5 - param_3 <= local_98);
    if (cVar4 != '\0') {
      local_90[0] = ((local_90[0] - dVar3) * ((dVar5 - param_3) - dVar6)) / (local_98 - dVar6) +
                    dVar3;
    }
    unaff_XMM7_Qa = local_90[0] - unaff_XMM10_Qa;
  }
  else if (param_4 == '\x04') {
    bVar2 = true;
    do {
      if (!bVar2) {
        unaff_XMM8_Qa = local_90[0];
        unaff_XMM9_Qa = local_98;
      }
      cVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
      bVar2 = false;
    } while ((cVar4 != '\0') && (local_98 <= dVar5 - param_3));
    unaff_XMM7_Qa = local_90[0];
    if (cVar4 != '\0') {
      unaff_XMM7_Qa =
           ((local_90[0] - unaff_XMM8_Qa) * ((dVar5 - param_3) - unaff_XMM9_Qa)) /
           (local_98 - unaff_XMM9_Qa) + unaff_XMM8_Qa;
    }
  }
  return unaff_XMM7_Qa;
}

