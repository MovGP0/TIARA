/* Ghidra address: 0097a6a0 */
/* Ghidra symbol: FUN_0097a6a0 */


void FUN_0097a6a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x12] == 0) {
    iVar2 = FUN_00416420(*(undefined8 *)(param_2 + 0x88),0);
    if (iVar2 == 0) {
      FUN_00414be0(local_20,L"UTF-8");
    }
    else {
      FUN_00414be0(local_20,*(undefined8 *)(param_2 + 0x88));
    }
  }
  else {
    FUN_004168e0(local_20,param_1[0x12]);
  }
  cVar1 = FUN_00978620(param_1,local_20[0]);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0x88))(param_1,*(undefined8 *)(param_2 + 0x38),0x99,lVar3,local_20[0],0)
    ;
  }
  else {
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    FUN_00978130(param_1,0x12,lVar3);
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb0))
              (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,(longlong)param_1 + 0x7c);
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 + 0x80;
    }
    FUN_009780f0(param_1,0x12,param_2);
  }
  FUN_00414520(local_20);
  return;
}

