/* Ghidra address: 014ceab0 */
/* Ghidra symbol: FUN_014ceab0 */


void FUN_014ceab0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  wchar_t *local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),iVar6);
      FUN_01d03160(plVar4);
      (**(code **)(*plVar4 + 0x288))(plVar4,&local_30);
      local_78 = L"T2JS_ADDMOTOR";
      local_70 = 0x11;
      local_68 = local_30;
      local_60 = 0x11;
      local_58 = 0x3c;
      local_50 = 0;
      FUN_00442f70(&local_40,L"%s %s,%d",&local_78,2);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_40);
      iVar1 = 0;
      if (local_30 != 0) {
        iVar1 = *(int *)(local_30 + -4);
      }
      FUN_00416780(&local_38,*(undefined2 *)(local_30 + -2 + (longlong)iVar1 * 2));
      uVar2 = FUN_0043fc00(local_38);
      if (iVar6 < 0x3f) {
        lVar5 = (longlong)iVar6;
        *(undefined4 *)(param_1 + 0x218 + lVar5 * 0xc) = 0;
        *(undefined4 *)(param_1 + 0x21c + lVar5 * 0xc) = 0;
        *(undefined4 *)(param_1 + 0x220 + lVar5 * 0xc) = uVar2;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_014ce930(param_1,plVar3,1);
  *(undefined1 *)(param_1 + 0x51b) = 1;
  FUN_00414560(&local_40,3);
  return;
}

