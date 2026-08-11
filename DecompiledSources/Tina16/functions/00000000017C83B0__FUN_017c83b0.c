/* Ghidra address: 017c83b0 */
/* Ghidra symbol: FUN_017c83b0 */


double FUN_017c83b0(longlong param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  double dVar7;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    pcVar6 = (char *)FUN_01b05ad0(*(undefined8 *)(param_2 + 0x10),3,0,&local_29,&local_2a,&local_2b)
    ;
    if ((*(char *)(param_1 + 0x339) == '\0') || (*pcVar6 != '\x01')) {
      iVar3 = FUN_01b05690(*(undefined8 *)(param_2 + 0x10),1,1);
      dVar7 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar3 * 8);
    }
    else {
      dVar7 = 0.0;
    }
  }
  else if (cVar2 == '\x04') {
    pcVar6 = (char *)FUN_01b05ad0(*(undefined8 *)(param_2 + 0x10),4,0,&local_29,&local_2a,&local_2b)
    ;
    if ((*(char *)(param_1 + 0x339) == '\0') || (*pcVar6 != '\x01')) {
      iVar3 = FUN_01b05690(*(undefined8 *)(param_2 + 0x10),1,1);
      if (*(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar3 * 8) == 0.0) {
        dVar7 = 1e+50;
      }
      else {
        iVar3 = FUN_01b05690(*(undefined8 *)(param_2 + 0x10),1,1);
        dVar7 = -1.0 / *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar3 * 8) - 1.0;
      }
    }
    else {
      dVar7 = 0.0;
    }
  }
  else if (cVar2 == '\x03') {
    iVar3 = FUN_01b05690(*(undefined8 *)(param_2 + 0x10),1,1);
    iVar4 = FUN_01b05600(*(undefined8 *)(param_2 + 0x10),3);
    iVar5 = FUN_01b05600(*(undefined8 *)(param_2 + 0x10),4);
    dVar7 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar3 * 8) *
            (*(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar4 * 8) -
            *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 8));
  }
  else if (cVar2 == '\x01') {
    dVar7 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)*(int *)(param_2 + 4) * 8) -
            *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)*(int *)(param_2 + 8) * 8);
  }
  else if (cVar2 == '\n') {
    cVar2 = FUN_01d04d50(*(undefined8 *)(param_2 + 0x18));
    if ((cVar2 == '\0') && (cVar2 = FUN_01d04d70(*(undefined8 *)(param_2 + 0x18)), cVar2 == '\0')) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x570);
      if (*(char *)(lVar1 + 0x11e) == '\0') {
        dVar7 = 0.0;
      }
      else {
        dVar7 = (double)(**(code **)(lVar1 + 0x108))
                                  (param_1,lVar1,*(undefined8 *)(lVar1 + 0x60),6,1,0);
      }
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x5b8);
      if (*(char *)(lVar1 + 0x11e) == '\0') {
        dVar7 = 0.0;
      }
      else {
        dVar7 = (double)(**(code **)(lVar1 + 0x108))
                                  (param_1,lVar1,*(undefined8 *)(lVar1 + 0x60),6,1,
                                   *(undefined8 *)(param_2 + 0x18));
      }
    }
  }
  else {
    dVar7 = 0.0;
  }
  return dVar7;
}

