/* Ghidra address: 013cfaa0 */
/* Ghidra symbol: FUN_013cfaa0 */


void FUN_013cfaa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x90))(*(longlong **)(param_1 + 0x8c0));
  cVar3 = FUN_013ce890(param_1);
  if (cVar3 != '\0') goto code_r0x013cfce9;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),local_40);
  FUN_013c1650(&local_30,uVar4,local_40[0]);
  cVar3 = FUN_013c0c30(*(undefined8 *)PTR_DAT_02005188,local_30,local_24,local_20);
  if (cVar3 == '\0') {
    cVar3 = FUN_013c0c30(*(undefined8 *)PTR_DAT_02004fb8,local_30,local_24,local_20);
    if (cVar3 != '\0') goto LAB_013cfb64;
  }
  else {
LAB_013cfb64:
    (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x80))
              (*(longlong **)(param_1 + 0x8c0),local_30,local_20[0]);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x30))
                      (*(longlong **)(param_1 + 0x8c0),0);
    cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005188,uVar6);
    if (cVar3 == '\0') {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x30))
                        (*(longlong **)(param_1 + 0x8c0),0);
      cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02004fb8,uVar6);
      if (cVar3 != '\0') {
        FUN_01cc7700(*(undefined8 *)(*(longlong *)PTR_DAT_02004fb8 + 8));
        FUN_013e2500(*(undefined8 *)PTR_DAT_02004fb8,*(undefined8 *)(param_1 + 0x8c0),0,1);
      }
    }
    else {
      FUN_01cc7700(*(undefined8 *)(*(longlong *)PTR_DAT_02005188 + 8));
      FUN_013e2500(*(undefined8 *)PTR_DAT_02005188,*(undefined8 *)(param_1 + 0x8c0),0,1);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar2 = *(longlong **)(lVar1 + 0x10);
  iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_01cec9c0(lVar1,iVar5 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),1);
  FUN_013cf3e0(param_1);
  FUN_0064e1d0(*(undefined8 *)PTR_DAT_02001e00);
code_r0x013cfce9:
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

