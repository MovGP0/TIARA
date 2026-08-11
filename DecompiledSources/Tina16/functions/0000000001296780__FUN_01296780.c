/* Ghidra address: 01296780 */
/* Ghidra symbol: FUN_01296780 */


undefined1
FUN_01296780(undefined8 param_1,undefined8 param_2,double param_3,longlong param_4,longlong param_5,
            byte param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 local_res8 [4];
  undefined1 local_49;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  local_49 = 0;
  cVar1 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"0\"]",5,param_4 + 0x3d6);
  if (cVar1 != '\0') {
    cVar1 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"1\"]",5,param_4 + 0x3de);
    if (cVar1 != '\0') {
      bVar4 = 1;
      goto LAB_01296825;
    }
  }
  bVar4 = 0;
LAB_01296825:
  cVar1 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"2\"]",7,&local_28);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_20,L"128|256|512|1024|2048|4096|8192|16384|32768|65536");
    cVar1 = FUN_01242560(local_20,local_28,0x7c);
    *(char *)(param_4 + 0x3d5) = cVar1 + '\a';
  }
  cVar1 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"3\"]",10,&local_28);
  if ((cVar1 == '\0') || (param_5 == 0)) {
    FUN_012964d0(&local_38,local_res8[0],L"parameter[@idx=\"outp\"]");
    FUN_00414ad0(param_4 + 0x81b,local_38);
  }
  else {
    plVar3 = (longlong *)FUN_019ac500(param_5,local_28);
    if (plVar3 == (longlong *)0x0) {
      FUN_00414ad0(param_4 + 0x81b,local_28);
    }
    else {
      (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
      FUN_00414ad0(param_4 + 0x81b,local_30);
    }
  }
  cVar1 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"icond\"]",7,&local_28);
  if (cVar1 != '\0') {
    iVar2 = FUN_0043fc50(local_28,1);
    *(char *)(param_4 + 0x82b) = (char)((iVar2 + 1) % 3);
  }
  if ((param_6 & bVar4) != 0) {
    cVar1 = FUN_0113f080(*(undefined8 *)(param_4 + 0x3d6),
                         2.0 / *(double *)(param_4 + 0x3de) + *(double *)(param_4 + 0x3d6),
                         param_4 + 0x3d5,0);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_4 + 0x3d6) = param_2;
      FUN_01276000(local_res8[0],L"parameter[@idx=\"0\"]",5,param_4 + 0x3d6);
      local_49 = 1;
      cVar1 = FUN_0113f080(*(undefined8 *)(param_4 + 0x3d6),
                           2.0 / *(double *)(param_4 + 0x3de) + *(double *)(param_4 + 0x3d6),
                           param_4 + 0x3d5,1);
      if (cVar1 == '\0') {
        *(double *)(param_4 + 0x3de) = 1.0 / (param_3 - *(double *)(param_4 + 0x3d6));
        FUN_01276000(local_res8[0],L"parameter[@idx=\"1\"]",5,param_4 + 0x3de);
      }
    }
  }
  FUN_00414560(&local_38,4);
  FUN_0041b800(local_res8);
  return local_49;
}

