/* Ghidra address: 0124fe60 */
/* Ghidra symbol: FUN_0124fe60 */


undefined8 *
FUN_0124fe60(undefined8 *param_1,longlong *param_2,longlong *param_3,char param_4,wchar_t *param_5,
            undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  bool bVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  FUN_00414610(param_9);
  (**(code **)(*param_2 + 0x148))(param_2,param_1,L"parameter");
  (**(code **)(*param_3 + 0x98))(param_3,local_20,*param_1);
  if (param_7 != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,&DAT_01250310,param_7);
  }
  if (param_4 == '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"name",param_6);
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"type",param_5);
    if (param_5 == L"enum") {
      bVar2 = true;
    }
    else if (param_5 == (wchar_t *)0x0) {
      bVar2 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_5,L"enum");
      bVar2 = iVar1 == 0;
    }
    if (bVar2) {
      bVar2 = true;
    }
    else if (param_5 == L"comp") {
      bVar2 = true;
    }
    else if (param_5 == (wchar_t *)0x0) {
      bVar2 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_5,L"comp");
      bVar2 = iVar1 == 0;
    }
    if (bVar2) {
      bVar2 = true;
    }
    else if (param_5 == L"multienum") {
      bVar2 = true;
    }
    else if (param_5 == (wchar_t *)0x0) {
      bVar2 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_5,L"multienum");
      bVar2 = iVar1 == 0;
    }
    if (bVar2) {
      (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"options",param_8);
    }
  }
  if (param_5 == L"memo") {
    bVar2 = true;
  }
  else if (param_5 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(param_5,L"memo");
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    bVar2 = true;
  }
  else if (param_5 == L"memo_sh") {
    bVar2 = true;
  }
  else if (param_5 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(param_5,L"memo_sh");
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    bVar2 = true;
  }
  else if (param_5 == L"textarea") {
    bVar2 = true;
  }
  else if (param_5 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(param_5,L"textarea");
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    (**(code **)(*param_2 + 0x128))(param_2,&local_30,param_9);
    (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,&local_28,local_30);
  }
  else {
    if (param_5 == L"header") {
      bVar2 = true;
    }
    else if (param_5 == (wchar_t *)0x0) {
      bVar2 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_5,L"header");
      bVar2 = iVar1 == 0;
    }
    if (!bVar2) {
      (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"value",param_9);
    }
  }
  FUN_0041b800(&local_30);
  FUN_00417840(&local_28,&DAT_00b9f8e0,2);
  FUN_00414560(&param_5,5);
  return param_1;
}

