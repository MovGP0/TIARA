/* Ghidra address: 01298860 */
/* Ghidra symbol: FUN_01298860 */


undefined1
FUN_01298860(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
            longlong param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 local_res8 [4];
  undefined1 local_49;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  local_49 = 0;
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"0\"]",5,param_4 + 0x3e9);
  if (cVar2 == '\0') {
LAB_012988ff:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"1\"]",5,param_4 + 0x3f1);
    if (cVar2 == '\0') goto LAB_012988ff;
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"2\"]",5,param_4 + 0x3f9);
    if (cVar2 == '\0') goto LAB_0129892e;
    bVar1 = true;
  }
  else {
LAB_0129892e:
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"3\"]",5,param_4 + 0x401);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_01298963;
    }
  }
  bVar1 = false;
LAB_01298963:
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"4\"]",7,&local_28);
  if (cVar2 != '\0') {
    FUN_00414b50(&local_20,L"128|256|512|1024|2048|4096|8192|16384|32768|65536");
    cVar2 = FUN_01242560(local_20,local_28,0x7c);
    *(char *)(param_4 + 1000) = cVar2 + '\a';
  }
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"5\"]",7,&local_28);
  if (cVar2 != '\0') {
    FUN_00414b50(&local_20,L"Uniform|Hanning|Flattop|Blackman|Hamming|Bartlet");
    uVar3 = FUN_01242560(local_20,local_28,0x7c);
    *(undefined1 *)(param_4 + 0x412) = uVar3;
  }
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"6\"]",7,&local_28);
  if (cVar2 != '\0') {
    uVar3 = FUN_0043fc50(local_28,0);
    *(undefined1 *)(param_4 + 0x413) = uVar3;
  }
  FUN_01275c10(local_res8[0],L"parameter[@idx=\"7\"]",8,param_4 + 0x819);
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"8\"]",10,&local_28);
  if ((cVar2 == '\0') || (param_5 == 0)) {
    FUN_012964d0(&local_38,local_res8[0],L"parameter[@idx=\"outp\"]");
    FUN_00414ad0(param_4 + 0x823,local_38);
  }
  else {
    plVar5 = (longlong *)FUN_019ac500(param_5,local_28);
    if (plVar5 == (longlong *)0x0) {
      FUN_00414ad0(param_4 + 0x823,local_28);
    }
    else {
      (**(code **)(*plVar5 + 0x288))(plVar5,&local_30);
      FUN_00414ad0(param_4 + 0x823,local_30);
    }
  }
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"scale\"]",7,&local_28);
  if (cVar2 != '\0') {
    uVar3 = FUN_0043fc50(local_28,0);
    *(undefined1 *)(param_4 + 0x414) = uVar3;
  }
  FUN_01275c10(local_res8[0],L"parameter[@idx=\"refv\"]",5,param_4 + 0x409);
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"icond\"]",7,&local_28);
  if (cVar2 != '\0') {
    iVar4 = FUN_0043fc50(local_28,1);
    *(char *)(param_4 + 0x82c) = (char)((iVar4 + 1) % 3);
  }
  cVar2 = FUN_01275c10(local_res8[0],L"parameter[@idx=\"dsp\"]",7,&local_28);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_4 + 0x415) = 0;
    FUN_00416ad0(&local_28,&DAT_0129917c);
    while (local_28 != 0) {
      bVar7 = *(byte *)(param_4 + 0x415);
      uVar6 = FUN_012421e0(&local_28);
      if ((byte)uVar6 < 8) {
        bVar7 = bVar7 | (byte)((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) <<
                              ((byte)uVar6 & 0x1f));
      }
      *(byte *)(param_4 + 0x415) = bVar7;
    }
  }
  if (bVar1) {
    cVar2 = FUN_0113f590(*(undefined8 *)(param_4 + 0x3e9),*(undefined8 *)(param_4 + 0x3f1),
                         param_4 + 1000,0);
    if (cVar2 == '\0') {
      *(undefined8 *)(param_4 + 0x3e9) = param_2;
      *(undefined8 *)(param_4 + 0x3f1) = param_3;
      *(undefined8 *)(param_4 + 0x3f9) = 0;
      *(double *)(param_4 + 0x401) =
           (double)(uint)(1 << (*(char *)(param_4 + 1000) - 1U & 0x1f)) /
           (*(double *)(param_4 + 0x3f1) - *(double *)(param_4 + 0x3e9));
      FUN_01276000(local_res8[0],L"parameter[@idx=\"0\"]",5,param_4 + 0x3e9);
      FUN_01276000(local_res8[0],L"parameter[@idx=\"1\"]",5,param_4 + 0x3f1);
      FUN_01276000(local_res8[0],L"parameter[@idx=\"2\"]",5,param_4 + 0x3f9);
      FUN_01276000(local_res8[0],L"parameter[@idx=\"3\"]",5,param_4 + 0x401);
      local_49 = 1;
    }
  }
  FUN_00414560(&local_38,4);
  FUN_0041b800(local_res8);
  return local_49;
}

