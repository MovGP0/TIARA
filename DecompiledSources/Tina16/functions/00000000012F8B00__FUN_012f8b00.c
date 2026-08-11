/* Ghidra address: 012f8b00 */
/* Ghidra symbol: FUN_012f8b00 */


void FUN_012f8b00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x260))(*(longlong **)(param_1 + 0x8e8));
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa68) + 0x260))(*(longlong **)(param_1 + 0xa68))
    ;
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa70) + 0x260))
                        (*(longlong **)(param_1 + 0xa70));
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x260))
                          (*(longlong **)(param_1 + 0xa78));
        if (cVar1 == '\0') goto code_r0x012f8d86;
      }
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa68) + 0x260))(*(longlong **)(param_1 + 0xa68))
    ;
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa70) + 0x260))
                        (*(longlong **)(param_1 + 0xa70));
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x260))
                          (*(longlong **)(param_1 + 0xa78));
        if (cVar1 != '\0') {
          FUN_00414b50(&local_18,L" (SIMetrix format)-graph");
        }
      }
      else {
        FUN_00414b50(&local_18,L"-PSpice");
      }
    }
    else {
      FUN_00414b50(&local_18,L"-LTSpice");
    }
    uVar3 = FUN_007fc180(&PTR_FUN_012e2948,1,param_1);
    *(undefined8 *)(param_1 + 0xae0) = uVar3;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_20);
    lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    FUN_00416cd0(&local_10,5,local_20,&DAT_012f8e6c,*(undefined8 *)(lVar2 + 0x10),local_18,L".png");
    cVar1 = FUN_00440a20(local_10,1);
    if (cVar1 == '\0') {
      FUN_0072d730(L"Spice result does not exist.",0xffffffff,0xffffffff);
    }
    else {
      lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      local_38 = *(undefined8 *)(lVar2 + 0x10);
      local_30 = 0x11;
      FUN_00442f70(&local_28,L"Spice result - %s",&local_38,0);
      FUN_0064de00(*(undefined8 *)(param_1 + 0xae0),local_28);
      FUN_012e2da0(*(undefined8 *)(param_1 + 0xae0),local_10);
      FUN_008059a0(*(undefined8 *)(param_1 + 0xae0));
    }
  }
  else {
    lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    if (lVar2 != 0) {
      lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      if ((*(uint *)(*(longlong *)(lVar2 + 0x18) + 4) & 0x20) == 0x20) {
        uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        FUN_01301c40(param_1,uVar3,1);
      }
    }
  }
code_r0x012f8d86:
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  FUN_00414560(&local_18,2);
  return;
}

